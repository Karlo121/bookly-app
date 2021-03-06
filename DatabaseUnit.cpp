//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "DatabaseUnit.h"
#include "isbnservice.h"
#include "IsbnUnit.h"
#include "ImyWebServiceWSDL.h"
#include "QuoteThreadUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma link "frxExportBaseDialog"
#pragma link "frxExportPDF"
#pragma resource "*.dfm"
TdbForm *dbForm;

//---------------------------------------------------------------------------
__fastcall TdbForm::TdbForm(TComponent* Owner)
	: TForm(Owner)
{
    TIniFile* ini = new TIniFile(GetCurrentDir() + "\\settings.ini");
	Left = ini->ReadInteger("Database Form", "Left", 0);
	Height = ini->ReadInteger("Database Form", "Height", 600);
	Top = ini->ReadInteger("Database Form", "Top", 0);
	Width = ini->ReadInteger("Database Form", "Width", 1117);
	Font->Height = ini->ReadInteger("Database Form", "Font.Height", Font->Height);
	Font->Name = ini->ReadString("Database Form", "Font.Name", Font->Name);
	delete ini;
}
//---------------------------------------------------------------------------
void __fastcall TdbForm::deleteRecordButtonClick(TObject *Sender)
{
   TBook->Delete();
}
//---------------------------------------------------------------------------
void __fastcall TdbForm::searchButtonClick(TObject *Sender)
{
	TLocateOptions SearchOptions;
	SearchOptions.Clear();
	SearchOptions << loPartialKey;

	if(TBook->Locate("bookName", nameSearch->Text, SearchOptions))
	{

	}
	else {
    ShowMessage("Not Found!");
	}
}
//---------------------------------------------------------------------------




void __fastcall TdbForm::authorSearchButtonClick(TObject *Sender)
{
	TLocateOptions SearchOptions;
    SearchOptions.Clear();
    SearchOptions << loPartialKey;

    if(TBook->Locate("authorName", authorSearch->Text, SearchOptions))
    {
       // works
    }
    else {
         if(TBook->Locate("authorSurname", authorSearch->Text, SearchOptions))
    {
         // works
    }
    else {
       ShowMessage("Doesnt exist...")  ;
    }
    }
}
//---------------------------------------------------------------------------

void __fastcall TdbForm::sortButtonClick(TObject *Sender)
{
   TBook->IndexFieldNames = "rating DESC";
}
//---------------------------------------------------------------------------

void __fastcall TdbForm::sortButtonPageNumClick(TObject *Sender)
{
   TBook->IndexFieldNames = "pageNum DESC";
}
//---------------------------------------------------------------------------

void __fastcall TdbForm::filterGenreButtonClick(TObject *Sender)
{


	TBook->Filtered = false;
	TBook->Filter = "Genre LIKE " + QuotedStr(genreFilterField->Text);

	TBook->Filtered = true;
}
//---------------------------------------------------------------------------



void __fastcall TdbForm::checkISBNClick(TObject *Sender)
{

	 _di_ISBNServiceSoapType isbnValidate = GetISBNServiceSoapType();


	 if(isbnValidate->IsValidISBN13(isbnField->Text) == 1){
		ShowMessage("Valid ISBN");
	 }
	 else {
		 ShowMessage("Invalid ISBN");
	 }
}
//---------------------------------------------------------------------------


void __fastcall TdbForm::openIsbnFormButtonClick(TObject *Sender)
{
    isbnForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TdbForm::calcAgeButtonClick(TObject *Sender)
{
    _di_ImyWebService webService = GetImyWebService();
   ageField->Text = webService->ageCalc(birthyearField->Text.ToInt());

}
//---------------------------------------------------------------------------



void __fastcall TdbForm::FormClose(TObject *Sender, TCloseAction &Action)
{
   TIniFile* ini = new TIniFile(GetCurrentDir() + "\\settings.ini");

   ini->WriteInteger("Database Form", "Left", Left);
   ini->WriteInteger("Database Form", "Top", Top);
   ini->WriteInteger("Database Form", "Width", Width);
   ini->WriteInteger("Database Form", "Height", Height);
   ini->WriteInteger("Database Form", "Font.Height",Font->Height);
   ini->WriteString("Database Form", "Font.Name", Font->Name);
   delete ini;
}
//---------------------------------------------------------------------------


