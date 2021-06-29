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
}
//---------------------------------------------------------------------------
void __fastcall TdbForm::Button1Click(TObject *Sender)
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

