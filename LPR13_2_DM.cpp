#include <vcl.h>
#pragma hdrstop

#include "LPR13_2_DM.h"
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>

#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma resource "*.dfm"

TdmVideo *dmVideo;

__fastcall TdmVideo::TdmVideo(TComponent* Owner)
    : TDataModule(Owner)
{
}

void __fastcall TdmVideo::DataModuleCreate(TObject *Sender)
{
    try
    {
        tblCassettes->Active = false;
        tblClients->Active = false;
        tblRent->Active = false;
        conVideo->Connected = false;
        conVideo->LoginPrompt = false;
        String dbPath = ExtractFilePath(Application->ExeName) + "Video.mdb";
        conVideo->ConnectionString =
            "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=" + dbPath +
            ";Persist Security Info=False";
        conVideo->Connected = true;
        tblCassettes->Open();
        tblClients->Open();
        tblRent->Open();
    }
    catch (Exception &e)
    {
        ShowMessage(L"Помилка відкриття БД:\n" + e.Message);
    }
}
