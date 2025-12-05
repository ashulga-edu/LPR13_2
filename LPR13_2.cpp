#include <vcl.h>
#pragma hdrstop
#include <tchar.h>

USEFORM("LPR13_2_Main.cpp", MainForm);
USEFORM("LPR13_2_DM.cpp", dmVideo);

int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
    try
    {
        Application->Initialize();
        Application->MainFormOnTaskBar = true;
        Application->CreateForm(__classid(TdmVideo), &dmVideo);
        Application->CreateForm(__classid(TMainForm), &MainForm);
        Application->Run();
    }
    catch (Exception &e)
    {
        Application->ShowException(&e);
    }
    catch (...)
    {
        try
        {
            throw Exception(L"Unknown exception");
        }
        catch (Exception &e)
        {
            Application->ShowException(&e);
        }
    }
    return 0;
}
