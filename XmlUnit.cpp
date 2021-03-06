//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainUnit.h"
#include "Unit3.h"
#include "FontChangeUnit.h"
#include "DatabaseUnit.h"
#include "XmlUnit.h"
#include "books.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TxmlForm *xmlForm;
//---------------------------------------------------------------------------
__fastcall TxmlForm::TxmlForm(TComponent* Owner)
	: TForm(Owner)
{
   TIniFile* ini = new TIniFile(GetCurrentDir() + "\\settings.ini");

   Left = ini->ReadInteger("XML Form", "Left", 0);
   Top = ini->ReadInteger("XML Form", "Top", 0);
   Width = ini->ReadInteger("XML Form", "Width", 640);
   Height = ini->ReadInteger("XML Form", "Height", 500);
   Font->Height = ini->ReadInteger("XML Form", "Font.Height", Font->Height);
   Font->Name = ini->ReadString("XML Form", "Font.Name", Font->Name);

   delete ini;
}
//---------------------------------------------------------------------------
void __fastcall TxmlForm::xmlLoadButtonClick(TObject *Sender)
{
   _di_IXMLbooksType Books = Getbooks(XMLDocument1);

   bookList->Items->Clear();
   for(int i = 0; i < Books->Count; i++){
	  bookList->Items->Add();

	  bookList->Items->Item[i]->Caption = Books->book[i]->name;
	  bookList->Items->Item[i]->SubItems->Add(Books->book[i]->authorName);
	  bookList->Items->Item[i]->SubItems->Add(Books->book[i]->authorSurname);
	  bookList->Items->Item[i]->SubItems->Add(Books->book[i]->rating);
   }
}
//---------------------------------------------------------------------------
void __fastcall TxmlForm::xmlDeleteButtonClick(TObject *Sender)
{
   _di_IXMLbooksType Books = Getbooks(XMLDocument1);
   Books->Delete(bookList->ItemIndex);
   XMLDocument1->SaveToFile(XMLDocument1->FileName);
}
//---------------------------------------------------------------------------
void __fastcall TxmlForm::FormClose(TObject *Sender, TCloseAction &Action)
{
   TIniFile* ini = new TIniFile(GetCurrentDir() + "\\settings.ini");

   ini->WriteInteger("XML Form", "Left", Left);
   ini->WriteInteger("XML Form", "Top", Top);
   ini->WriteInteger("XML Form", "Width", Width);
   ini->WriteInteger("XML Form", "Height", Height);
   ini->WriteInteger("XML Form", "Font.Height",Font->Height);
   ini->WriteString("XML Form", "Font.Name", Font->Name);
   ini->WriteString("XML Form", "Font.Name", Font->Name);
   delete ini;
}
//---------------------------------------------------------------------------

