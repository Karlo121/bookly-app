//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "DownloadUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TdlForm *dlForm;
//---------------------------------------------------------------------------
__fastcall TdlForm::TdlForm(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TdlForm::downloadButtonClick(TObject *Sender)
{

    Download->IOHandler = OpenSSL;
	TFileStream* fs = new TFileStream("C:\\bookly.mdb", fmCreate);
	Download->Get(downloadUrlField->Text, fs);

	delete fs;
}
//---------------------------------------------------------------------------



void __fastcall TdlForm::DownloadWorkBegin(TObject *ASender, TWorkMode AWorkMode,
          __int64 AWorkCountMax)
{
	 ProgressBar1->Position = 0;
     ProgressBar1->Max = AWorkCountMax;
}
//---------------------------------------------------------------------------

void __fastcall TdlForm::DownloadWork(TObject *ASender, TWorkMode AWorkMode, __int64 AWorkCount)

{
	 ProgressBar1->Position = AWorkCount;
	 Application->ProcessMessages();
}
//---------------------------------------------------------------------------


void __fastcall TdlForm::dlCancelButtonClick(TObject *Sender)
{
     Download->Disconnect();
}
//---------------------------------------------------------------------------

void __fastcall TdlForm::Button2Click(TObject *Sender)
{
	Throttler->BitsPerSec = 20 * 1024 * 8;
}
//---------------------------------------------------------------------------

void __fastcall TdlForm::Button3Click(TObject *Sender)
{
       Throttler->BitsPerSec = 50 * 1024 * 8;
}
//---------------------------------------------------------------------------

void __fastcall TdlForm::Button4Click(TObject *Sender)
{
        Throttler->BitsPerSec = 200 * 1024 * 8;
}
//---------------------------------------------------------------------------


