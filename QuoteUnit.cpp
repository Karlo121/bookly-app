//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "QuoteUnit.h"
#include "MainUnit.h"
#include "QuoteThreadUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TquoteForm *quoteForm;
//---------------------------------------------------------------------------
__fastcall TquoteForm::TquoteForm(TComponent* Owner)
	: TForm(Owner)
{
   TIniFile* ini = new TIniFile(GetCurrentDir() + "\\settings.ini");

   Left = ini->ReadInteger("Quote Form", "Left", 0);
   Top = ini->ReadInteger("Quote Form", "Top", 0);
   Width = ini->ReadInteger("Quote Form", "Width", 640);
   Height = ini->ReadInteger("Quote Form", "Height", 500);
   Font->Height = ini->ReadInteger("Quote Form", "Font.Height", Font->Height);
   Font->Name = ini->ReadString("Quote Form", "Font.Name", Font->Name);

   delete ini;
}
//---------------------------------------------------------------------------
void __fastcall TquoteForm::Button1Click(TObject *Sender)
{
		TQuoteThread  *quoteThread = new TQuoteThread(false);
}
//---------------------------------------------------------------------------
void __fastcall TquoteForm::FormClose(TObject *Sender, TCloseAction &Action)
{
   TIniFile* ini = new TIniFile(GetCurrentDir() + "\\settings.ini");

   ini->WriteInteger("Quote Form", "Left", Left);
   ini->WriteInteger("Quote Form", "Top", Top);
   ini->WriteInteger("Quote Form", "Width", Width);
   ini->WriteInteger("Quote Form", "Font.Height", Font->Height);
   ini->WriteString("Quote Form", "Font.Name", Font->Name);
   delete ini;
}
//---------------------------------------------------------------------------

