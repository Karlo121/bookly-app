//---------------------------------------------------------------------------

#ifndef IsbnUnitH
#define IsbnUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
#include <IdUDPBase.hpp>
#include <IdUDPClient.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TisbnForm : public TForm
{
__published:	// IDE-managed Components
	TIdTCPClient *tcpClient;
	TEdit *hostField;
	TLabel *hostLabel;
	TEdit *isbnText;
	TButton *isbnLoadButton;
	TButton *checkIsbnButton;
	TEdit *responseField;
	TIdUDPClient *udpClient;
	TButton *checkUdpButton;
	void __fastcall isbnLoadButtonClick(TObject *Sender);
	void __fastcall checkIsbnButtonClick(TObject *Sender);
	void __fastcall checkUdpButtonClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TisbnForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TisbnForm *isbnForm;
//---------------------------------------------------------------------------
#endif
