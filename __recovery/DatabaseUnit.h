//---------------------------------------------------------------------------

#ifndef DatabaseUnitH
#define DatabaseUnitH
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
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
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
	TButton *deleteRecordButton;
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
	TDBEdit *birthyearField;
	TLabel *Label11;
	TDBEdit *DBEdit10;
	TGroupBox *GroupBoxDatabase1;
	TGroupBox *groupboxreview;
	TGroupBox *GroupBoxDatabase2;
	TWideStringField *TBookGenre;
	TADOTable *TGenre;
	TDataSource *DGenre;
	TAutoIncField *TGenreID;
	TWideStringField *TGenregenre;
	TIntegerField *TBookBirthYear;
	TButton *sortButton;
	TButton *sortButtonPageNum;
	TDBLookupComboBox *genreFilterField;
	TButton *filterGenreButton;
	TWideMemoField *TBookISBN;
	TDBMemo *isbnField;
	TButton *checkISBN;
	TButton *openIsbnFormButton;
	TButton *calcAgeButton;
	TEdit *ageField;
	void __fastcall deleteRecordButtonClick(TObject *Sender);
	void __fastcall searchButtonClick(TObject *Sender);
	void __fastcall authorSearchButtonClick(TObject *Sender);
	void __fastcall sortButtonClick(TObject *Sender);
	void __fastcall sortButtonPageNumClick(TObject *Sender);
	void __fastcall filterGenreButtonClick(TObject *Sender);
	void __fastcall checkISBNClick(TObject *Sender);
	void __fastcall openIsbnFormButtonClick(TObject *Sender);
	void __fastcall calcAgeButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TdbForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TdbForm *dbForm;
//---------------------------------------------------------------------------
#endif
