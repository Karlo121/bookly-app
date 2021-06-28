//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("Unit3.cpp", ratingForm);
USEFORM("Unit4.cpp", changeFontForm);
USEFORM("DatabaseUnit.cpp", dbForm);
USEFORM("Unit6.cpp", xmlForm);
USEFORM("MainUnit.cpp", mainForm);
USEFORM("ReviewUnit.cpp", reviewForm);
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
		Application->CreateForm(__classid(TratingForm), &ratingForm);
		Application->CreateForm(__classid(TchangeFontForm), &changeFontForm);
		Application->CreateForm(__classid(TdbForm), &dbForm);
		Application->CreateForm(__classid(TxmlForm), &xmlForm);
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
