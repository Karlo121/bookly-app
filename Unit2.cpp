//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------









void __fastcall TForm2::ratingSubmitButtonClick(TObject *Sender)
{

	  displayField->Lines->Add("Book name: " + bookName->Text);
	  displayField->Lines->Add("Book length: " + bookPageNum->Text);
	  displayField->Lines->Add("Author: " + autorName->Text + autorSurname->Text);
	  if(ratingOne->Checked) {
		  displayField->Lines->Add("Rating: 1 ");
	  }
	  else if(ratingTwo->Checked) {
		 displayField->Lines->Add("Rating: 2 ");
	  }
	  else if(ratingThree->Checked) {
		 displayField->Lines->Add("Rating: 3");
	  }
	  else if(ratingFour->Checked) {
		  displayField->Lines->Add("Rating: 4");
	  }
	  else if(ratingFive->Checked) {
		  displayField->Lines->Add("Rating: 5");
	  }
	  else {
		  ShowMessage("No rating selected...");
	  }

}
//---------------------------------------------------------------------------


void __fastcall TForm2::saveButtonClick(TObject *Sender)
{
	if(SaveDialog ->Execute() == true) {
	   displayField->Lines->SaveToFile(SaveDialog->FileName) ;
	}


}
//---------------------------------------------------------------------------

void __fastcall TForm2::openButtonClick(TObject *Sender)
{
	if(OpenDialog ->Execute() == true) {
	   displayField->Lines->LoadFromFile(OpenDialog->FileName) ;
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Exit1Click(TObject *Sender)
{
	if(Application->MessageBox(L"Exit the application?", L"Exit", MB_YESNO|MB_ICONEXCLAMATION|MB_DEFBUTTON2) == IDYES)
	   Application->Terminate();
}
//---------------------------------------------------------------------------



