//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Mask.hpp>
#include "frxClass.hpp"
#include "frxDBSet.hpp"
#include "frxExportBaseDialog.hpp"
#include "frxExportPDF.hpp"
//---------------------------------------------------------------------------
class TdbForm : public TForm
{
__published:	// IDE-managed Components
	TADOTable *TBook;
	TADOConnection *ADOConnection1;
	TDataSource *DBook;
	TADOTable *TAuthor;
	TDataSource *DAuthor;
	TDBGrid *DBGrid1;
	TDBGrid *DBGrid2;
	TLabel *Label6;
	TDBEdit *DBEdit5;
	TButton *Button1;
	TEdit *nameSearch;
	TButton *searchButton;
	TEdit *authorSearch;
	TButton *authorSearchButton;
	TfrxReport *frxReport1;
	TfrxDBDataset *frxDBDataset1;
	TfrxPDFExport *frxPDFExport1;
	TAutoIncField *TBookID;
	TWideStringField *TBookbookName;
	TWideStringField *TBookauthorName;
	TWideStringField *TBookauthorSurname;
	TWideMemoField *TBookreview;
	TIntegerField *TBookpageNum;
	TIntegerField *TBookrating;
	TIntegerField *TBookauthorNum;
	TLabel *Label1;
	TDBEdit *DBEdit1;
	TLabel *Label2;
	TDBEdit *DBEdit2;
	TLabel *Label3;
	TDBEdit *DBEdit3;
	TDBMemo *DBMemo1;
	TLabel *Label5;
	TDBEdit *DBEdit4;
	TLabel *Label7;
	TDBEdit *DBEdit6;
	TAutoIncField *TAuthorID;
	TWideStringField *TAuthorauthorName;
	TWideStringField *TAuthorauthorSurname;
	TIntegerField *TAuthorauthorBirthyear;
	TWideStringField *TAuthorcountry;
	TIntegerField *TAuthorauthorNum;
	TLabel *Label8;
	TDBEdit *DBEdit7;
	TLabel *Label9;
	TDBEdit *DBEdit8;
	TLabel *Label10;
	TDBEdit *DBEdit9;
	TLabel *Label11;
	TDBEdit *DBEdit10;
	TGroupBox *GroupBox1;
	TGroupBox *groupboxreview;
	TGroupBox *GroupBox2;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall searchButtonClick(TObject *Sender);
	void __fastcall authorSearchButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TdbForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TdbForm *dbForm;
//---------------------------------------------------------------------------
#endif
