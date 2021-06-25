//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
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

