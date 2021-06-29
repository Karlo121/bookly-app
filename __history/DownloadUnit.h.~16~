//---------------------------------------------------------------------------

#ifndef DownloadUnitH
#define DownloadUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdHTTP.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
#include <IdServerIOHandler.hpp>
#include <IdSSL.hpp>
#include <IdSSLOpenSSL.hpp>
#include <IdAuthentication.hpp>
#include <IdIOHandler.hpp>
#include <IdIOHandlerSocket.hpp>
#include <IdIOHandlerStack.hpp>
#include <Vcl.ComCtrls.hpp>
#include <IdIntercept.hpp>
#include <IdInterceptThrottler.hpp>
//---------------------------------------------------------------------------
class TdlForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *downloadUrlField;
	TButton *Button1;
	TIdHTTP *Download;
	TIdSSLIOHandlerSocketOpenSSL *OpenSSL;
	TProgressBar *ProgressBar1;
	TButton *Cancel;
	TIdInterceptThrottler *Throttler;
	TButton *Button2;
	TButton *Button3;
	TButton *Button4;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall DownloadWorkBegin(TObject *ASender, TWorkMode AWorkMode, __int64 AWorkCountMax);
	void __fastcall DownloadWork(TObject *ASender, TWorkMode AWorkMode, __int64 AWorkCount);
	void __fastcall CancelClick(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TdlForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TdlForm *dlForm;
//---------------------------------------------------------------------------
#endif
