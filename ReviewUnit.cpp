//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ReviewUnit.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TreviewForm *reviewForm;
//---------------------------------------------------------------------------
__fastcall TreviewForm::TreviewForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TreviewForm::reviewCompleteButtonClick(TObject *Sender)
{
   mainForm->reviewField->Lines->Add(reviewText->Text);
}
//---------------------------------------------------------------------------

