#ifndef LPR13_2_DMH
#define LPR13_2_DMH

#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>

class TdmVideo : public TDataModule
{
__published:
    TADOConnection *conVideo;
    TADOTable *tblCassettes;
    TADOTable *tblClients;
    TADOTable *tblRent;
    TDataSource *dsCassettes;
    TDataSource *dsClients;
    TDataSource *dsRent;
	TIntegerField *tblCassettesКод_касети;
	TWideStringField *tblCassettesНазва_касети;
	TWideStringField *tblCassettesТип_касети;
	TFloatField *tblCassettesЦінагрн;
	TWideMemoField *tblCassettesІнфо_касети;
	TAutoIncField *tblRentКод_операції;
	TIntegerField *tblRentКод_касети;
	TDateTimeField *tblRentДата_видачі;
	TDateTimeField *tblRentДата_прийому;
	TIntegerField *tblRentКод_клієнта;
	TIntegerField *tblRentКількість_копій;
	TDateTimeField *tblRentДата_повернення;
	TBooleanField *tblRentВідмітка_повернення;
	TWideStringField *tblRentRentCassetteName;
    void __fastcall DataModuleCreate(TObject *Sender);

public:
    __fastcall TdmVideo(TComponent* Owner);
};

extern PACKAGE TdmVideo *dmVideo;

#endif

