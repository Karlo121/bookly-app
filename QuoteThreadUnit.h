//---------------------------------------------------------------------------

#ifndef QuoteThreadUnitH
#define QuoteThreadUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
//---------------------------------------------------------------------------
class TQuoteThread : public TThread
{
private:
protected:
	void __fastcall Execute();
public:
	__fastcall TQuoteThread(bool CreateSuspended);
};
//---------------------------------------------------------------------------
#endif
