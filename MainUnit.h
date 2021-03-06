//---------------------------------------------------------------------------

#ifndef MainUnitH
#define MainUnitH
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
#include <Vcl.DBCtrls.hpp>
#include <Vcl.WinXCalendars.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <map>
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
	TMenuItem *appBarButton;
	TMenuItem *Exit1;
	TMenuItem *File1;
	TButton *reviewButton;
	TMemo *reviewField;
	TMenuItem *ChangeFont;
	TButton *xmlAddButton;
	TMenuItem *SaveasCustom1;
	TMenuItem *OpenCustom1;
	TButton *seeDataButton;
	TButton *xmlViewOpenButton;
	TEdit *yearField;
	TLabel *birthYearLabel;
	TEdit *isbnField;
	TLabel *isbnLabel;
	TMenuItem *DownloadBookly1;
	TButton *qotdButton;
	TImage *Image1;
	TImage *Image2;
	TDBLookupComboBox *genreSelector;
	TLabel *genreLabel;
	void __fastcall Exit1Click(TObject *Sender);
	void __fastcall reviewButtonClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall ChangeFontClick(TObject *Sender);
	void __fastcall xmlAddButtonClick(TObject *Sender);
	void __fastcall SaveasCustom1Click(TObject *Sender);
	void __fastcall seeDataButtonClick(TObject *Sender);
	void __fastcall xmlViewOpenButtonClick(TObject *Sender);
	void __fastcall DownloadBookly1Click(TObject *Sender);
	void __fastcall qotdButtonClick(TObject *Sender);
	void __fastcall Image1Click(TObject *Sender);
	void __fastcall Image2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TmainForm(TComponent* Owner);
	std::map<String, std::map<String, String>> translation;
};
//---------------------------------------------------------------------------
extern PACKAGE TmainForm *mainForm;
//---------------------------------------------------------------------------
#endif
