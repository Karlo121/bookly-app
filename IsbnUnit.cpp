//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "IsbnUnit.h"
#include "DatabaseUnit.h"
#include "isbnservice.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TisbnForm *isbnForm;


//---------------------------------------------------------------------------
__fastcall TisbnForm::TisbnForm(TComponent* Owner)
	: TForm(Owner)
{
   TIniFile* ini = new TIniFile(GetCurrentDir() + "\\settings.ini");
   // main forma
   Left = ini->ReadInteger("ISBN Form", "Left", 0);
   Top = ini->ReadInteger("ISBN Form", "Top", 0);
   Width = ini->ReadInteger("ISBN Form", "Width", 640);
   Height = ini->ReadInteger("ISBN Form", "Height", 500);
   Font->Height = ini->ReadInteger("ISBN Form", "Font.Height", Font->Height);
   Font->Name = ini->ReadString("ISBN Form", "Font.Name", Font->Name);

   delete ini;

}
//---------------------------------------	------------------------------------
void __fastcall TisbnForm::isbnLoadButtonClick(TObject *Sender)
{
     isbnText->Text = dbForm->isbnField->Text;
}
//---------------------------------------------------------------------------
void __fastcall TisbnForm::checkIsbnButtonClick(TObject *Sender)
{
	 tcpClient->Host = hostField->Text;

	 tcpClient->Connect();
	 tcpClient->Socket->WriteLn(isbnText->Text);

	 // èekaj i ispiši odgovor poslužitelja

	 _di_ISBNServiceSoapType isbnValidate = GetISBNServiceSoapType();

	 if(isbnValidate->IsValidISBN13(tcpClient->Socket->ReadLn()) == 1){
		responseField->Text = "Valid ISBN";
	 }
	 else {
		responseField->Text = "Invalid ISBN";
	 }

	 tcpClient->Disconnect();
}
//---------------------------------------------------------------------------
void __fastcall TisbnForm::checkUdpButtonClick(TObject *Sender)
{
	udpClient->SendBuffer(hostField->Text, 23427, ToBytes(isbnText->Text));
}
//---------------------------------------------------------------------------



void __fastcall TisbnForm::FormClose(TObject *Sender, TCloseAction &Action)
{
   TIniFile* ini = new TIniFile(GetCurrentDir() + "\\settings.ini");
   // Ini settings for main form
   ini->WriteInteger("ISBN Form", "Left", Left);
   ini->WriteInteger("ISBN Form", "Top", Top);
   ini->WriteInteger("ISBN Form", "Width", Width);
   ini->WriteInteger("ISBN Form", "Height", Height);
   ini->WriteInteger("ISBN Form", "Font.Height", Font->Height);
   ini->WriteString("ISBN Form", "Font.Name", Font->Name);
   delete ini;
}
//---------------------------------------------------------------------------

