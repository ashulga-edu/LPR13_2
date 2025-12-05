#ifndef LPR13_2_MainH
#define LPR13_2_MainH

#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <Data.DB.hpp>
#include <Vcl.Buttons.hpp>

class TMainForm : public TForm
{
__published:
    TPageControl *pagesMain;

    TTabSheet *tabRent;
    TTabSheet *tabCassettes;
    TTabSheet *tabClients;

    TDBNavigator *navRent;
    TDBGrid *gridRent;

    TDBNavigator *navCassettes;
    TDBGrid *gridCassettes;
    TDBMemo *memCassInfo;

    TDBNavigator *navClients;
    TDBGrid *gridClients;
    TDBMemo *memClientInfo;

public:
    __fastcall TMainForm(TComponent* Owner);
};

extern PACKAGE TMainForm *MainForm;

#endif

