 //---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop

#include "QuoteThreadUnit.h"
#include "QuoteUnit.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------

//   Important: Methods and properties of objects in VCL can only be
//   used in a method called using Synchronize, for example:
//
//      Synchronize(&UpdateCaption);
//
//   where UpdateCaption could look like:
//
//      void __fastcall TQuoteThread::UpdateCaption()
//      {
//        Form1->Caption = "Updated in a thread";
//      }
//---------------------------------------------------------------------------

__fastcall TQuoteThread::TQuoteThread(bool CreateSuspended)
	: TThread(CreateSuspended)
{
}

//---------------------------------------------------------------------------
void __fastcall TQuoteThread::Execute()
{

    FreeOnTerminate=true;
	quoteForm->RESTRequest1->Execute();

}

//---------------------------------------------------------------------------
