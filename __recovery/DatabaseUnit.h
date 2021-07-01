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
	TLabel *bookNameLabelDb;
	TDBEdit *DBEdit1;
	TDBMemo *DBMemo1;
	TLabel *pageNumLabelDb;
	TDBEdit *DBEdit4;
	TLabel *ratingLabelDb;
	TDBEdit *DBEdit6;
	TAutoIncField *TAuthorID;
	TWideStringField *TAuthorauthorName;
	TWideStringField *TAuthorauthorSurname;
	TIntegerField *TAuthorauthorBirthyear;
	TWideStringField *TAuthorcountry;
	TIntegerField *TAuthorauthorNum;
	TLabel *authorNameLabelDb;
	TDBEdit *DBEdit7;
	TLabel *authorSurnameLabelDb;
	TDBEdit *DBEdit8;
	TLabel *authorBirthyearLabelDb;
	TDBEdit *birthyearField;
	TLabel *countryLabelDb;
	TDBEdit *DBEdit10;
	TGroupBox *GroupBoxDatabase1;
	TGroupBox *groupBoxReviewDb;
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
	TLabel *bookAuthorLabelDb;
	TDBEdit *DBEdit2;
	TLabel *bookAuthorSurnameLabelDb;
	TDBEdit *DBEdit3;
	void __fastcall deleteRecordButtonClick(TObject *Sender);
	void __fastcall searchButtonClick(TObject *Sender);
	void __fastcall authorSearchButtonClick(TObject *Sender);
	void __fastcall sortButtonClick(TObject *Sender);
	void __fastcall sortButtonPageNumClick(TObject *Sender);
	void __fastcall filterGenreButtonClick(TObject *Sender);
	void __fastcall checkISBNClick(TObject *Sender);
	void __fastcall openIsbnFormButtonClick(TObject *Sender);
	void __fastcall calcAgeButtonClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TdbForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TdbForm *dbForm;
//---------------------------------------------------------------------------
#endif
