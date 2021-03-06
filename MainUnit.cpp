//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainUnit.h"
#include "ReviewUnit.h"
#include "FontChangeUnit.h"
#include "DatabaseUnit.h"
#include "DownloadUnit.h"
#include "QuoteUnit.h"
#include "IsbnUnit.h"
#include "XmlUnit.h"
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
HINSTANCE myFlags;


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

void translateForm(TForm* Form, String Language, const std::map<String, std::map<String, String>>& translation){
	for(int i = 0; i < Form->ComponentCount; i++)
		for(auto it_ComponentName = translation.begin(); it_ComponentName != translation.end(); it_ComponentName++)
			if(Form->Components[i]->Name == it_ComponentName->first)
			   for(auto it_Language = it_ComponentName->second.begin(); it_Language != it_ComponentName->second.end(); it_Language++)
				   if(it_Language->first == Language)
					  if(IsPublishedProp(Form->Components[i], "Caption"))
						 SetPropValue(Form->Components[i], "Caption", it_Language->second);
}

//---------------------------------------------------------------------------
__fastcall TmainForm::TmainForm(TComponent* Owner)
	: TForm(Owner)
{
  myFlags = LoadLibraryA("flags.dll");
  if(!myFlags) {
	  ShowMessage("flags.dll is missing");
	  return;
  }
  Image1->Picture->Bitmap->LoadFromResourceName((unsigned)myFlags, "HR");
  Image2->Picture->Bitmap->LoadFromResourceName((unsigned)myFlags, "UK");
  FreeLibrary(myFlags);

  translation["xmlAddButton"] = {
	  {
		  {"EN", "Insert Record"},
		  {"HR", "Unesi zapis"}
	  }
  };
  translation["reviewButton"] = {
	  {
		  {"EN", "Write a review"},
		  {"HR", "Zapisi misljenje"}
	  }
  };
  translation["bookBox"] = {
	  {
		  {"EN", "Book"},
		  {"HR", "Knjiga"}
	  }
  };
  translation["bookNameLabel"] = {
	  {
		  {"EN", "Name:"},
		  {"HR", "Ime:"}
	  }
  };
  translation["bookPageNumLabel"] = {
	  {
		  {"EN", "Page num:"},
		  {"HR", "Broj stranica:"}
	  }
  };
  translation["genreLabel"] = {
	  {
		  {"EN", "Genre:"},
		  {"HR", "?anr:"}
	  }
  };
  translation["autorBox"] = {
	  {
		  {"EN", "Author:"},
		  {"HR", "Autor:"}
	  }
  };
  translation["autorNameLabel"] = {
	  {
		  {"EN", "Name:"},
		  {"HR", "Ime:"}
	  }
  };
  translation["autorSurnameLabel"] = {
	  {
		  {"EN", "Surname:"},
		  {"HR", "Prezime:"}
	  }
  };
  translation["birthYearLabel"] = {
	  {
		  {"EN", "Birth year:"},
		  {"HR", "Godina ro?.:"}
	  }
  };
  translation["ratingBox"] = {
	  {
		  {"EN", "Rating"},
		  {"HR", "Ocjena"}
	  }
  };
  translation["seeDataButton"] = {
	  {
		  {"EN", "See Data"},
		  {"HR", "Pregled zapisa"}
	  }
  };
  translation["xmlViewOpenButton"] = {
	  {
		  {"EN", "See XML"},
		  {"HR", "Pregled XML-a"}
	  }
  };
  translation["qotdButton"] = {
	  {
		  {"EN", "Quote of the day"},
		  {"HR", "Citat dana"}
	  }
  };
  translation["appBarButton"] = {
	  {
		  {"EN", "Application"},
		  {"HR", "Aplikacija"}
	  }
  };
  translation["DownloadBookly1"] = {
	  {
		  {"EN", "Download Bookly database"},
		  {"HR", "Preuzmi Bookly bazu podataka"}
	  }
  };
  translation["ChangeFont"] = {
	  {
		  {"EN", "Change Font/Size"},
		  {"HR", "Promijeni Font"}
	  }
  };
  translation["Exit1"] = {
	  {
		  {"EN", "Exit"},
		  {"HR", "Izlaz"}
	  }
  };
  translation["SaveasCustom1"] = {
	  {
		  {"EN", "Save as Custom..."},
		  {"HR", "Spremi kao prilago?en format..."}
	  }
  };
  translation["OpenCustom1"] = {
	  {
		  {"EN", "Open Custom..."},
		  {"HR", "Otvori prilago?eni format..."}
	  }
  };
  translation["changeFontLabel"] = {
		 {
		  {"EN", "Change your Font"},
		  {"HR", "Promijenite Font"}
	  }
  };
  translation["fontSizeLabel"] = {
	  {
		  {"EN", "Change your Font size"},
		  {"HR", "Promijenite velicinu Fonta"}
	  }
  };
  translation["fontChangeDoneButton"] = {
	  {
		  {"EN", "Done"},
		  {"HR", "Gotovo"}
	  }
  };
  translation["searchButton"] = {
	  {
		  {"EN", "Search By Name"},
		  {"HR", "Pretrazi po imenu"}
	  }
  };
  translation["authorSearchButton"] = {
	  {
		  {"EN", "Search by Author Name/Surname"},
		  {"HR", "Pretrazi po autorovom imenu i prezimenu"}
	  }
  };
  translation["GroupBoxDatabase1"] = {
	  {
		  {"EN", "Edit Book Info"},
		  {"HR", "Uredi informacije knjige"}
	  }
  };
  translation["GroupBoxDatabase2"] = {
	  {
		  {"EN", "Edit Author Info"},
		  {"HR", "Uredi informacije o autoru"}
	  }
  };
  translation["calcAgeButton"] = {
	  {
		  {"EN", "Calculate age"},
		  {"HR", "Izracunaj godine"}
	  }
  };
  translation["sortButton"] = {
	  {
		  {"EN", "Sort by rating"},
		  {"HR", "Sortiraj po ocjenama"}
	  }
  };
  translation["sortButtonPageNum"] = {
	  {
		  {"EN", "Sort By Page Number"},
		  {"HR", "Sortiraj po stranicama"}
	  }
  };
  translation["filterGenreButton"] = {
	  {
		  {"EN", "Filter by genre"},
		  {"HR", "Filtriraj po ?anru"}
	  }
  };
  translation["openIsbnFormButton"] = {
	  {
		  {"EN", "Validate ISBN with TCP or UDP"},
		  {"HR", "Validiraj ISBN pomocu TCP-a ili UDP-a"}
	  }
  };
  translation["checkISBN"] = {
	  {
		  {"EN", "Validate ISBN Offline"},
		  {"HR", "Validiraj ISBN Offline"}
	  }
  };
  translation["deleteRecordButton"] = {
	  {
		  {"EN", "Delete record"},
		  {"HR", "Izbrisi Zapis"}
	  }
  };
  translation["deleteRecordButton"] = {
	  {
		  {"EN", "Delete record"},
		  {"HR", "Izbrisi Zapis"}
	  }
  };
  translation["xmlLoadButton"] = {
	  {
		  {"EN", "Load XML"},
		  {"HR", "Prikazi XML"}
	  }
  };
  translation["xmlDeleteButton"] = {
	  {
		  {"EN", "Delete from XML"},
		  {"HR", "Izbrisi iz XML-a"}
	  }
  };
  translation["isbnLoadButton"] = {
	  {
		{"EN", "Load Selected ISBN"},
		{"HR", "Dohvati ISBN"}
	  }
  };
  translation["checkIsbnButton"] = {
	  {
		 {"EN", "Check ISBN TCP"},
		 {"HR", "Provijeri ISBN preko TCP-a"}
	  }
  };
  translation["checkUdpButton"] = {
	  {
		  {"EN", "Check ISBN UDP"},
		  {"HR", "Provijeri ISBN preko UDP-a"}
	  }
  };
  translation["hostLabel"] = {
	  {
		  {"EN", "Host IP:"},
		  {"HR", "Hostov IP"}
	  }
  };
  translation["downloadButton"] = {
	  {
		  {"EN", "Download"},
		  {"HR", "Preuzmi"}
	  }
  };
  translation["cancelButton"] = {
	  {
		  {"EN", "Cancel"},
		  {"HR", "Prekini"}
	  }
  };
  translation["downloadButton"] = {
	  {
		  {"EN", "Download"},
		  {"HR", "Preuzmi"}
	  }
  };
  translation["dlCancelButton"] = {
	  {
		  {"EN", "Cancel"},
		  {"HR", "Prekini"}
	  }
  };
  translation["authorBirthyearLabelDb"] = {
	  {
		  {"EN", "Birthyear:"},
		  {"HR", "Godina ro?:"}
	  }
  };
  translation["countryLabelDb"] = {
	  {
		  {"EN", "Country:"},
		  {"HR", "Dr?ava:"}
	  }
  };
  translation["authorSurnameLabelDb"] = {
	  {
		  {"EN", "Author Surname:"},
		  {"HR", "Prezime autora:"}
	  }
  };
  translation["authorNameLabelDb"] = {
	  {
		  {"EN", "Author Name:"},
		  {"HR", "Ime autora:"}
	  }
  };
  translation["bookNameLabelDb"] = {
	  {
		  {"EN", "Book name:"},
		  {"HR", "Ime knjige:"}
	  }
  };
  translation["ratingLabelDb"] = {
	  {
		  {"EN", "Rating:"},
		  {"HR", "Ocjena:"}
	  }
  };
  translation["pageNumLabelDb"] = {
	  {
		  {"EN", "Page number:"},
		  {"HR", "Broj stranica:"}
	  }
  };
  translation["bookAuthorSurnameLabelDb"] = {
	  {
		  {"EN", "Author Surname:"},
		  {"HR", "Prezime autora:"}
	  }
  };
  translation["bookAuthorLabelDb"] = {
	  {
		  {"EN", "Author Name:"},
		  {"HR", "Ime autora:"}
	  }
  };
  translation["groupBoxReviewDb"] = {
	  {
		  {"EN", "Edit and Read your Review"},
		  {"HR", "Uredi i ?itaj:"}
	  }
  };
  translation["getQuoteButton"] = {
	  {
		  {"EN", "Get Quote of the Day in XML Format"},
		  {"HR", "U?itaj dnevni citat:"}
	  }
  };



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

void __fastcall TmainForm::FormClose(TObject *Sender, TCloseAction &Action)
{
   TIniFile* ini = new TIniFile(GetCurrentDir() + "\\settings.ini");

   ini->WriteInteger("Main Form", "Left", Left);
   ini->WriteInteger("Main Form", "Top", Top);
   ini->WriteInteger("Main Form", "Width", Width);
   ini->WriteInteger("Main Form", "Height", Height);
   ini->WriteInteger("Main Form", "Font.Height", Font->Height);
   ini->WriteString("Main Form", "Font.Name", Font->Name);
   delete ini;
}
//---------------------------------------------------------------------------

void __fastcall TmainForm::FormCreate(TObject *Sender)
{
   reviewField->Text = "";
   TIniFile* ini = new TIniFile(GetCurrentDir() + "\\settings.ini");

   Left = ini->ReadInteger("Main Form", "Left", 0);
   Top = ini->ReadInteger("Main Form", "Top", 0);
   Width = ini->ReadInteger("Main Form", "Width", 640);
   Height = ini->ReadInteger("Main Form", "Height", 500);
   Font->Height = ini->ReadInteger("Main Form", "Font.Height", Font->Height);
   Font->Name = ini->ReadString("Main Form", "Font.Name", Font->Name);
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
   dbForm->TBook->FieldByName("ISBN")->AsString = isbnField->Text;
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



void __fastcall TmainForm::seeDataButtonClick(TObject *Sender)
{
		 dbForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TmainForm::xmlViewOpenButtonClick(TObject *Sender)
{
	  xmlForm->Show();
}
//---------------------------------------------------------------------------




void __fastcall TmainForm::DownloadBookly1Click(TObject *Sender)
{
   dlForm->Show();
}
//---------------------------------------------------------------------------


void __fastcall TmainForm::qotdButtonClick(TObject *Sender)
{
      quoteForm->Show();
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

void __fastcall TmainForm::Image1Click(TObject *Sender)
{
	  translateForm(this, "HR", translation);
	  translateForm(changeFontForm, "HR", translation);
	  translateForm(dbForm, "HR", translation);
	  translateForm(xmlForm, "HR", translation);
	  translateForm(isbnForm, "HR", translation);
	  translateForm(dlForm, "HR", translation);
}
//---------------------------------------------------------------------------

void __fastcall TmainForm::Image2Click(TObject *Sender)
{
      translateForm(this, "EN", translation);
	  translateForm(changeFontForm, "EN", translation);
	  translateForm(dbForm, "EN", translation);
	  translateForm(xmlForm, "EN", translation);
	  translateForm(isbnForm, "EN", translation);
	  translateForm(dlForm, "EN", translation);
}
//---------------------------------------------------------------------------

