//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit8.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm8 *Form8;
//---------------------------------------------------------------------------
__fastcall TForm8::TForm8(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------





void __fastcall TForm8::DBGrid1TitleClick(TColumn *Column)
{
if(DM->R_K->Active)
if((DM->R_K->Sort.Pos(Column->FieldName)>0)&&(DM->R_K->Sort.Pos("ASC")>0))
DM->R_K->Sort=Column->FieldName;
else
DM->R_K->Sort=Column->FieldName;
}
//---------------------------------------------------------------------------

void __fastcall TForm8::FormMouseWheelDown(TObject *Sender, TShiftState Shift, TPoint &MousePos,
          bool &Handled)
{
if (DBLookupComboBox1->Focused() == true)
 DBLookupComboBox1->Perform(WM_KEYDOWN, VK_DOWN, 0);
}
//---------------------------------------------------------------------------

void __fastcall TForm8::FormMouseWheelUp(TObject *Sender, TShiftState Shift, TPoint &MousePos,
          bool &Handled)
{
if (DBLookupComboBox1->Focused() == true)
DBLookupComboBox1->Perform(WM_KEYDOWN, VK_UP, 0);
}
//---------------------------------------------------------------------------

void __fastcall TForm8::FormActivate(TObject *Sender)
{
 DBLookupComboBox1->KeyValue=Null();
Label9->Visible=false;
Label3->Visible=false;
Label10->Visible=false;
Label11->Visible=false;
Label14->Visible=false;
Label15->Visible=false;
Label16->Visible=false;
DBGrid1->Visible=false;
DBText2->Visible=false;

}
//---------------------------------------------------------------------------


void __fastcall TForm8::DBLookupComboBox1Click(TObject *Sender)
{
DBText2->Visible=true;
Label9->Visible=false;
Label3->Visible=false;
Label10->Visible=false;
Label11->Visible=false;
Label14->Visible=false;
Label15->Visible=false;
Label16->Visible=false;
DBGrid1->Visible=false;


}
//---------------------------------------------------------------------------

void __fastcall TForm8::BitBtn1Click(TObject *Sender)
{
if(DBLookupComboBox1->Text==""||DBLookupComboBox2->Text=="")
{MessageDlg("Заповніть всі поля", mtInformation,TMsgDlgButtons()<<mbOK,0); DBLookupComboBox1->SetFocus();}
else {
  // Скільки Кг сировини було затрачено
	DM->R_K->First();
	  for (int w=0; w <DM->R_K->RecordCount; w++)
	{
	double q=Form8->DBText2->Caption/1000;
	q*= DM->R_K->FieldByName("KG")->AsFloat;
	DM->R_K->Edit();
	DM->R_K->FieldByName("KG_UP")->AsFloat= q;
	DM->R_K->Post();
	DM->R_K->Next();
	}
	// Ціна затрат

	DM->R_K->First();
	for (int e=0; e <DM->R_K->RecordCount; e++)
	{
	double r=DM->R_K->FieldByName("KG_UP")->AsFloat;
	double t=DM->R_K->FieldByName("Price_KG")->AsFloat;
	DM->R_K->Edit();
	DM->R_K->FieldByName("Price")->AsFloat= r*t;
	DM->R_K->Post();
	DM->R_K->Next();
	}
	 double a;
DM->R_K->First();
for (int i=0; i <DM->R_K->RecordCount; i++)
{
	a += DM->R_K->FieldByName("Price")->AsFloat;
	DM->R_K->Next();
}
Form8->Label9->Caption = a;
Form8->Label11->Caption = a+(a*0.2);
double b=  Form8->Label9->Caption.ToDouble()*0.4;
double c=  a+b;
Form8->Label10->Caption=c;
Form8->Label14->Caption=Form8->Label9->Caption.ToDouble()/Form8->Label17->Caption.ToDouble();
Form8->Label16->Caption=Form8->Label14->Caption.ToDouble();
double f=Form8->Label16->Caption.ToDouble();
Form8->Label15->Caption=f+(Form8->Label16->Caption.ToDouble()*0.4);

	DM->Sklad_P->Edit();
	DM->Sklad_P->FieldByName("Z_PDV")->AsFloat= Label10->Caption.ToDouble();
	DM->Sklad_P->FieldByName("BEZ_PDV")->AsFloat= Label9->Caption.ToDouble();
	DM->Sklad_P->FieldByName("Z_PDV_KG")->AsString= Label15->Caption;
	DM->Sklad_P->FieldByName("BEZ_PDV_KG")->AsString= Label14->Caption;
	DM->Sklad_P->FieldByName("S")->AsString= Label11->Caption;
	DM->Sklad_P->FieldByName("S_KG")->AsString= Label16->Caption;
	DM->Sklad_P->Post();
	DM->Sklad_P->Refresh();



Label3->Visible=true;
Label9->Visible=true;
Label10->Visible=true;
Label11->Visible=true;
Label14->Visible=true;
Label15->Visible=true;
Label16->Visible=true;
DBGrid1->Visible=true;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm8::DBLookupComboBox2Click(TObject *Sender)
{
Label9->Visible=false;
Label3->Visible=false;
Label10->Visible=false;
Label11->Visible=false;
Label14->Visible=false;
Label15->Visible=false;
Label16->Visible=false;
DBGrid1->Visible=false;

}
//---------------------------------------------------------------------------

