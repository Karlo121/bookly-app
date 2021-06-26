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
	TSaveDialog *SaveDialog;
	TOpenDialog *OpenDialog;
	TMainMenu *MainMenu1;
	TMenuItem *File;
	TMenuItem *Exit1;
	TMenuItem *File1;
	TButton *reviewButton;
	TMemo *reviewField;
	TMenuItem *ChangeFont;
	TButton *xmlAddButton;
	TMenuItem *SaveasCustom1;
	TMenuItem *OpenCustom1;
	TButton *Button1;
	TButton *xmlViewOpenButton;
	void __fastcall Exit1Click(TObject *Sender);
	void __fastcall reviewButtonClick(TObject *Sender);
	void __fastcall ratingButtonClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall ChangeFontClick(TObject *Sender);
	void __fastcall xmlAddButtonClick(TObject *Sender);
	void __fastcall SaveasCustom1Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall xmlViewOpenButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TmainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TmainForm *mainForm;
//---------------------------------------------------------------------------
#endif
