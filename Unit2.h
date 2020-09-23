//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TDM : public TDataModule
{
__published:	// IDE-managed Components
	TDataSource *DataSource1;
	TDataSource *DataSource2;
	TADOConnection *ADOConnection1;
	TADOTable *Sklad_S;
	TADOTable *Sklad_P;
	TDataSource *DataSource3;
	TADOQuery *ADOQuery1;
	TDataSource *DataSource4;
	TDataSource *DataSource5;
	TADOQuery *ADOQuery2;
	TDataSource *DataSource6;
	TADOQuery *ADOQuery;
	TADOQuery *ADOQuery3;
	TADOQuery *ADOQuery4;
	TAutoIncField *ADOQuery3Kod_retseptury;
	TWideStringField *ADOQuery3Name_syrovyny;
	TFloatField *ADOQuery3KG;
	TFloatField *ADOQuery3Price;
	TDataSource *DataSource7;
	TDataSource *DataSource8;
	TDataSource *DataSource9;
	TADOTable *R;
	TADOTable *R_K;
	TAutoIncField *RKod_R;
	TWideStringField *RName_R;
	TAutoIncField *R_KKod_retseptury;
	TWideStringField *R_KName_syrovyny;
	TFloatField *R_KKG;
	TFloatField *R_KPrice;
	TIntegerField *R_KKod_R;
	TAutoIncField *ADOQueryKod;
	TWideStringField *ADOQueryNamesyrovyny;
	TFloatField *ADOQueryKG;
	TFloatField *ADOQueryPrice;
	TDateTimeField *ADOQueryExpiration_date;
	TDateTimeField *ADOQueryDelivery_date;
	TFloatField *ADOQueryPrice_KG;
	TIntegerField *RKodT;
	TDataSource *DataSource10;
	TFloatField *R_KKG_UP;
	TAutoIncField *Sklad_SKod;
	TWideStringField *Sklad_SNamesyrovyny;
	TFloatField *Sklad_SKG;
	TFloatField *Sklad_SPrice;
	TDateTimeField *Sklad_SExpiration_date;
	TDateTimeField *Sklad_SDelivery_date;
	TFloatField *Sklad_SPrice_KG;
	TFloatField *R_KPrice_KG;
	TADOTable *Z;
	TAutoIncField *ZKod_Z;
	TWideStringField *ZPokupets;
	TWideStringField *ZName_P;
	TWideStringField *ZKG;
	TDateTimeField *ZData_pokupky;
	TFloatField *ZPrice;
	TFloatField *ZPrice_P;
	TAutoIncField *Sklad_PKodT;
	TWideStringField *Sklad_PNameT;
	TWideStringField *Sklad_PRetseptupa;
	TDateTimeField *Sklad_PExpiration_date;
	TFloatField *Sklad_PKG;
	TFloatField *Sklad_PZalyshoky_KG;
	TFloatField *Sklad_PPrice;
	TIntegerField *Sklad_PKod_R;
	TFloatField *Sklad_PZ_PDV;
	TFloatField *Sklad_PBEZ_PDV;
	TFloatField *Sklad_PZ_PDV_KG;
	TFloatField *Sklad_PBEZ_PDV_KG;
	TFloatField *Sklad_PS;
	TFloatField *Sklad_PS_KG;
	TAutoIncField *ADOQuery1KodT;
	TWideStringField *ADOQuery1NameT;
	TWideStringField *ADOQuery1Retseptupa;
	TDateTimeField *ADOQuery1Expiration_date;
	TFloatField *ADOQuery1KG;
	TFloatField *ADOQuery1Zalyshoky_KG;
	TFloatField *ADOQuery1Price;
	TIntegerField *ADOQuery1Kod_R;
	TFloatField *ADOQuery1Z_PDV;
	TFloatField *ADOQuery1BEZ_PDV;
	TFloatField *ADOQuery1Z_PDV_KG;
	TFloatField *ADOQuery1BEZ_PDV_KG;
	TFloatField *ADOQuery1S;
	TFloatField *ADOQuery1S_KG;
	TADOTable *ADOTable1;
	TDataSource *DataSource11;
private:	// User declarations
public:		// User declarations
	__fastcall TDM(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDM *DM;
//---------------------------------------------------------------------------
#endif
