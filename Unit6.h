//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Xml.XMLDoc.hpp>
#include <Xml.xmldom.hpp>
#include <Xml.XMLIntf.hpp>
//---------------------------------------------------------------------------
class TxmlForm : public TForm
{
__published:	// IDE-managed Components
	TListView *bookList;
	TXMLDocument *XMLDocument1;
	TButton *xmlDeleteButton;
	TButton *xmlLoadButton;
	void __fastcall xmlLoadButtonClick(TObject *Sender);
	void __fastcall xmlDeleteButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TxmlForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TxmlForm *xmlForm;
//---------------------------------------------------------------------------
#endif