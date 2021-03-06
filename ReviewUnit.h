//---------------------------------------------------------------------------

#ifndef ReviewUnitH
#define ReviewUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <System.Actions.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtActns.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.StdActns.hpp>
#include <Vcl.ToolWin.hpp>
//---------------------------------------------------------------------------
class TreviewForm : public TForm
{
__published:	// IDE-managed Components
	TRichEdit *reviewText;
	TActionList *actionListReview;
	TImageList *imageListReview;
	TToolBar *reviewToolBar;
	TToolButton *selectAllButton;
	TEditSelectAll *EditSelectAll1;
	TToolButton *deleteButton;
	TEditDelete *EditDelete1;
	TToolButton *separatorTwo;
	TToolButton *cutButton;
	TToolButton *copyButton;
	TToolButton *pasteButton;
	TEditCut *EditCut1;
	TEditCopy *EditCopy1;
	TEditPaste *EditPaste1;
	TToolButton *separatorThree;
	TToolButton *undoButton;
	TEditUndo *EditUndo1;
	TToolButton *separatorOne;
	TToolButton *boldButton;
	TToolButton *italicButton;
	TRichEditBold *FormatRichEditBold1;
	TRichEditItalic *FormatRichEditItalic1;
	TButton *reviewCompleteButton;
	TAction *Action1;
	TAction *Action2;
	void __fastcall reviewCompleteButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TreviewForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TreviewForm *reviewForm;
//---------------------------------------------------------------------------
#endif
