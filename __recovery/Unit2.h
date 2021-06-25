//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.Menus.hpp>
#include <Xml.XMLDoc.hpp>
#include <Xml.xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TmainForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *bookNameLabel;
	TGroupBox *bookBox;
	TEdit *bookName;
	TGroupBox *autorBox;
	TLabel *autorNameLabel;
	TEdit *autorName;
	TEdit *autorSurname;
	TLabel *autorSurnameLabel;
	TLabel *bookPageNumLabel;
	TEdit *bookPageNum;
	TGroupBox *ratingBox;
	TRadioButton *ratingOne;
	TRadioButton *ratingTwo;
	TRadioButton *ratingThree;
	TRadioButton *ratingFour;
	TRadioButton *ratingFive;
	TButton *ratingSubmitButton;
	TSaveDialog *SaveDialog;
	TOpenDialog *OpenDialog;
	TMainMenu *MainMenu1;
	TMenuItem *File;
	TMenuItem *Exit1;
	TMenuItem *File1;
	TMenuItem *SaveAs1;
	TMenuItem *Open1;
	TButton *reviewButton;
	TMemo *reviewField;
	TMenuItem *ChangeFont;
	TXMLDocument *XMLDocument1;
	TListView *bookList;
	TButton *xmlLoadButton;
	TButton *xmlAddButton;
	TButton *xmlDeleteButton;
	TMenuItem *N1;
	TMenuItem *SaveasCustom1;
	TMenuItem *OpenCustom1;
	TButton *Button1;
	TMemo *displayField;
	void __fastcall ratingSubmitButtonClick(TObject *Sender);
	void __fastcall saveButtonClick(TObject *Sender);
	void __fastcall openButtonClick(TObject *Sender);
	void __fastcall Exit1Click(TObject *Sender);
	void __fastcall reviewButtonClick(TObject *Sender);
	void __fastcall ratingButtonClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall ChangeFontClick(TObject *Sender);
	void __fastcall xmlLoadButtonClick(TObject *Sender);
	void __fastcall xmlAddButtonClick(TObject *Sender);
	void __fastcall xmlDeleteButtonClick(TObject *Sender);
	void __fastcall SaveasCustom1Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TmainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TmainForm *mainForm;
//---------------------------------------------------------------------------
#endif