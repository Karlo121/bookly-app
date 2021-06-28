//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainUnit.h"
#include "ReviewUnit.h"
#include "Unit3.h"
#include "Unit4.h"
#include "DatabaseUnit.h"
#include "Unit6.h"
#include "books.h"
#include <registry.hpp>
#include <wchar.h>
#include <locale.h>
#include <string.h>
#include <vector>
#include <memory>
#include <random>
#include <time.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TmainForm *mainForm;


class myFileFormat {
public:
	 wchar_t name[15];
	 float version;

	 myFileFormat() {
		 wcsncpy(name, L"BooklyFileFormat", 15);
		 version = 1.0;
	 }
};

class Book{
public:
   wchar_t name[25]; wchar_t authorName[25];
   wchar_t authorSurname[25];
   wchar_t review[200];
   int pageNum; int rating;

   Book() = default;
   Book(const wchar_t* _name,const  wchar_t* _authorName,
		const wchar_t* _authorSurname, const wchar_t* _review,
		int _pageNum, int _rating)
   {
	   std::wcsncpy(name, _name, 25);
	   std::wcsncpy(authorName, _authorName, 25);
	   std::wcsncpy(authorSurname, _authorSurname, 25);
	   std::wcsncpy(review, _review, 256);
	   pageNum = _pageNum;
	   rating = _rating;
   }

};
//---------------------------------------------------------------------------
__fastcall TmainForm::TmainForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------



void __fastcall TmainForm::Exit1Click(TObject *Sender)
{
	if(Application->MessageBox(L"Exit the application?", L"Exit", MB_YESNO|MB_ICONEXCLAMATION|MB_DEFBUTTON2) == IDYES)
	   Application->Terminate();
}
//---------------------------------------------------------------------------


void __fastcall TmainForm::reviewButtonClick(TObject *Sender)
{
	reviewForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TmainForm::ratingButtonClick(TObject *Sender)
{
	   ratingForm->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TmainForm::FormClose(TObject *Sender, TCloseAction &Action)
{
   TIniFile* ini = new TIniFile(GetCurrentDir() + "\\settings.ini");
   ini->WriteInteger("Main Windows", "Left", Left);
   ini->WriteInteger("Main Windows", "Top", Top);
   ini->WriteInteger("Main Windows", "Width", Width);
   ini->WriteInteger("Main Windows", "Height", Height);
   ini->WriteInteger("Main Windows", "Font.Height", Font->Height);
   ini->WriteString("Main Windows", "Font.Name", Font->Name);

   delete ini;
}
//---------------------------------------------------------------------------

void __fastcall TmainForm::FormCreate(TObject *Sender)
{
   TIniFile* ini = new TIniFile(GetCurrentDir() + "\\settings.ini");
   Left = ini->ReadInteger("Main Windows", "Left", 0);
   Top = ini->ReadInteger("Main Windows", "Top", 0);
   Width = ini->ReadInteger("Main Windows", "Width", 600);
   Height = ini->ReadInteger("Main Windows", "Height", 500);
   Font->Height = ini->ReadInteger("Main Windows", "Font.Height", Font->Height);
   Font->Name = ini->ReadString("Main Windows", "Font.Name", Font->Name);
   delete ini;
}
//---------------------------------------------------------------------------

void __fastcall TmainForm::ChangeFontClick(TObject *Sender)
{
	 changeFontForm->ShowModal();
	 Font->Height = changeFontForm->fontSizeField->Text.ToInt();
	 Font->Name = changeFontForm->fontStyleField->Text;

}
//---------------------------------------------------------------------------



void __fastcall TmainForm::xmlAddButtonClick(TObject *Sender)
{

   int finalRating;


   srand(time(NULL));
   printf("%d", rand());
   int numberForId = rand();



   _di_IXMLbooksType Books = Getbooks(xmlForm->XMLDocument1);
   _di_IXMLbookType Book = Books->Add();

   Book->name = bookName->Text;
   Book->authorName = autorName->Text;
   Book->authorSurname = autorSurname->Text;
   Book->pageNum = bookPageNum->Text.ToInt();
   if(ratingOne->Checked) {
		 finalRating = 1;
	  }
	  else if(ratingTwo->Checked) {
		 finalRating = 2;
	  }
	  else if(ratingThree->Checked) {
		 finalRating = 3;
	  }
	  else if(ratingFour->Checked) {
		  finalRating = 4;
	  }
	  else if(ratingFive->Checked) {
		  finalRating = 5;
	  }
	  else {
		  finalRating = 0;
	  }
   Book->rating = finalRating;
   Book->review = reviewForm->reviewText->Text;

   xmlForm->XMLDocument1->SaveToFile(xmlForm->XMLDocument1->FileName);


   dbForm->TBook->Insert();
   dbForm->TBook->FieldByName("bookName")->AsString = bookName->Text;
   dbForm->TBook->FieldByName("authorName")->AsString = autorName->Text;
   dbForm->TBook->FieldByName("authorSurname")->AsString = autorSurname->Text;
   dbForm->TBook->FieldByName("review")->AsString = reviewForm->reviewText->Text;
   dbForm->TBook->FieldByName("rating")->AsInteger = finalRating;
   dbForm->TBook->FieldByName("pageNum")->AsInteger = bookPageNum->Text.ToInt();
   dbForm->TBook->FieldByName("authorNum")->AsInteger = numberForId;
   dbForm->TBook->FieldByName("Genre")->AsString = genreSelector->Text;
   dbForm->TBook->Post();

   dbForm->TAuthor->Insert();
   dbForm->TAuthor->FieldByName("authorNum")->AsInteger = numberForId;
   dbForm->TAuthor->FieldByName("authorBirthyear")->AsInteger = yearField->Text.ToInt();
   dbForm->TAuthor->FieldByName("authorName")->AsString = autorName->Text;
   dbForm->TAuthor->FieldByName("authorSurname")->AsString = autorSurname->Text;
   dbForm->TAuthor->Post();

}
//---------------------------------------------------------------------------



void __fastcall TmainForm::SaveasCustom1Click(TObject *Sender)
{

	  int finalRating;
	  if(ratingOne->Checked) {
		 finalRating = 1;
	  }
	  else if(ratingTwo->Checked) {
		 finalRating = 2;
	  }
	  else if(ratingThree->Checked) {
		 finalRating = 3;
	  }
	  else if(ratingFour->Checked) {
		  finalRating = 4;
	  }
	  else if(ratingFive->Checked) {
		  finalRating = 5;
	  }
	  else {
		  finalRating = 0;
	  }

	// bookName to wchar_t
	String narrowBookName = bookName->Text;
	std::wstring wideBookName = std::wstring(narrowBookName.begin(), narrowBookName.end());
	const wchar_t* bookNameCon = wideBookName.c_str();

	// authorName to wchar_t
	String narrowAuthorName = autorName->Text;
	std::wstring wideAuthorName = std::wstring(narrowAuthorName.begin(), narrowAuthorName.end());
	const wchar_t* authorNameCon = wideAuthorName.c_str();

	// authorSurname to wchar_t
	String narrowAuthorSurname = autorSurname->Text;
	std::wstring wideAuthorSurname = std::wstring(narrowAuthorSurname.begin(), narrowAuthorSurname.end());
	const wchar_t* authorSurnameCon = wideAuthorName.c_str();

	// review to wchar_t
	String narrowReview = reviewForm->reviewText->Text;
	std::wstring wideReview = std::wstring(narrowReview.begin(), narrowReview.end());
	const wchar_t* reviewCon = wideReview.c_str();


	 Book books[1] =
	 {Book(bookNameCon,authorNameCon,authorSurnameCon,reviewCon,3,4)};


	 // save file format to header
	 myFileFormat Header;
	 std::unique_ptr<TMemoryStream> contactStream(new TMemoryStream);
	 contactStream->Write(&Header, sizeof(myFileFormat));

	 contactStream->Write(&books[0], sizeof(Book));

	 contactStream->SaveToFile("books.bff");

}
//---------------------------------------------------------------------------



void __fastcall TmainForm::Button1Click(TObject *Sender)
{
		 dbForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TmainForm::xmlViewOpenButtonClick(TObject *Sender)
{
	  xmlForm->Show();
}
//---------------------------------------------------------------------------




