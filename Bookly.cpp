//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("MainUnit.cpp", mainForm);
USEFORM("XmlUnit.cpp", xmlForm);
USEFORM("ReviewUnit.cpp", reviewForm);
USEFORM("QuoteUnit.cpp", quoteForm);
USEFORM("DownloadUnit.cpp", dlForm);
USEFORM("DatabaseUnit.cpp", dbForm);
USEFORM("FontChangeUnit.cpp", changeFontForm);
USEFORM("IsbnUnit.cpp", isbnForm);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		TStyleManager::TrySetStyle("Material Oxford Blue");
		Application->CreateForm(__classid(TmainForm), &mainForm);
		Application->CreateForm(__classid(TreviewForm), &reviewForm);
		Application->CreateForm(__classid(TchangeFontForm), &changeFontForm);
		Application->CreateForm(__classid(TdbForm), &dbForm);
		Application->CreateForm(__classid(TxmlForm), &xmlForm);
		Application->CreateForm(__classid(TisbnForm), &isbnForm);
		Application->CreateForm(__classid(TdlForm), &dlForm);
		Application->CreateForm(__classid(TquoteForm), &quoteForm);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
