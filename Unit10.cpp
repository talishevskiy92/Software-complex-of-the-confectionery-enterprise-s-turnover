//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit10.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit8.h"
#include <Math.hpp>
#include "Unit11.h"
#include "Unit12.h"
#include "Unit13.h"
#include "Unit14.h"
#include "Unit15.h"
#include "Unit16.h"
#include "Unit17.h"
#include "Unit18.h"
#include "Unit19.h"
#include "Unit20.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm10 *Form10;
//---------------------------------------------------------------------------
__fastcall TForm10::TForm10(TComponent* Owner)
	: TForm(Owner)
{/*
String st="Provider=Microsoft.Jet.OLEDB.4.0;Data Source=";
st+=ExtractFilePath(Application->ExeName)+"Datebase.mdb;Persist Security Info=False";
DM->ADOConnection1->ConnectionString=st;
DM->ADOConnection1->Connected=true;
DM->Sklad_S->Active=true;
DM->Sklad_P->Active=true;
DM->R->Active=true;
DM->R_K->Active=true;
DM->Z->Active=true; */


}
//---------------------------------------------------------------------------
void __fastcall TForm10::BitBtn2Click(TObject *Sender)
{
Form3->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm10::BitBtn3Click(TObject *Sender)
{
Form1->Show();
}
//---------------------------------------------------------------------------



void __fastcall TForm10::BitBtn4Click(TObject *Sender)
{
DM->Z->Insert();
DM->Z->Last();
Edit1->SetFocus();
DM->Z->Sort="Kod_Z";
}
//---------------------------------------------------------------------------

void __fastcall TForm10::MenuItem3Click(TObject *Sender)
{
DM->Z->Insert();
DM->Z->Last();
Edit1->SetFocus();
DM->Z->Sort="Kod_Z";
}
//---------------------------------------------------------------------------

void __fastcall TForm10::BitBtn6Click(TObject *Sender)
{
DM->Z->Cancel();
DM->Z->Sort="Kod_Z";
}
//---------------------------------------------------------------------------

void __fastcall TForm10::N5Click(TObject *Sender)
{
DM->Z->Cancel();
DM->Z->Sort="Kod_Z";
}
//---------------------------------------------------------------------------

void __fastcall TForm10::BitBtn8Click(TObject *Sender)
{
if(MessageDlg("ϳ�������� ��������� ������",
mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
{
DM->Z->Delete();

}
}
//---------------------------------------------------------------------------

void __fastcall TForm10::N7Click(TObject *Sender)
{
if(MessageDlg("ϳ�������� ��������� ������",
mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
{
DM->Z->Delete();

}
}
//---------------------------------------------------------------------------

void __fastcall TForm10::BitBtn5Click(TObject *Sender)
{
Form13->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm10::N4Click(TObject *Sender)
{
Form13->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm10::BitBtn7Click(TObject *Sender)
{
 if(Edit1->Text==""||Edit2->Text==""||DBLookupComboBox1->Text=="")
	 {MessageDlg("��������� �� ����!", mtInformation,TMsgDlgButtons()<<mbOK,0);
	 Edit2->SetFocus();
	 DBLookupComboBox1->SetFocus();
	 Edit1->SetFocus();
	 }
		else{



	  DM->Z->Insert();
	  DM->Z->FieldByName("Pokupets")->AsString = Edit1->Text;
	  DM->Z->FieldByName("Name_P")->AsString = DBLookupComboBox1->Text;
	  DM->Z->FieldByName("KG")->AsString = Edit2->Text;
	  DM->Z->FieldByName("Data_pokupky")->AsString = DateTimePicker1->Date;
	  DM->Z->FieldByName("Price")->AsString = Edit2->Text*DBText2->Caption;
	  DM->Z->FieldByName("Price_P")->AsString = Edit5->Text-Edit4->Text;
	  DM->Z->Post();
	  MessageDlg("���� ������ ���������",mtInformation,TMsgDlgButtons()<<mbOK,0);
	  DM->Sklad_P->Edit();
	  DM->Sklad_P->FieldByName("Zalyshoky_KG")->AsString = DBText1->Caption-Edit2->Text;
	  DM->Sklad_P->Post();
			}
	   Edit1->Clear();
	   Edit2->Clear();
	   DBLookupComboBox1->KeyValue=Null();
}
//---------------------------------------------------------------------------


void __fastcall TForm10::Edit2KeyPress(TObject *Sender, System::WideChar &Key)
{
	AnsiString Ts = "0123456789.\b";
	char Tr[] = { '\0','0','1','2','3','4','5','6','7','8','9',',','\b' };
	Key = Tr[Ts.Pos(Key)];
}
//---------------------------------------------------------------------------

void __fastcall TForm10::FormMouseWheelDown(TObject *Sender, TShiftState Shift, TPoint &MousePos,
          bool &Handled)
{
if (DBLookupComboBox1->Focused() == true)
 DBLookupComboBox1->Perform(WM_KEYDOWN, VK_DOWN, 0);
}
//---------------------------------------------------------------------------

void __fastcall TForm10::FormMouseWheelUp(TObject *Sender, TShiftState Shift, TPoint &MousePos,
          bool &Handled)
{
if (DBLookupComboBox1->Focused() == true)
DBLookupComboBox1->Perform(WM_KEYDOWN, VK_UP, 0);
}
//---------------------------------------------------------------------------

void __fastcall TForm10::DBGrid1TitleClick(TColumn *Column)
{
if(DM->Z->Active)
if((DM->Z->Sort.Pos(Column->FieldName)>0)&&(DM->Z->Sort.Pos("ASC")>0))
DM->Z->Sort=Column->FieldName;
else
DM->Z->Sort=Column->FieldName;
}
//---------------------------------------------------------------------------



void __fastcall TForm10::Edit2Change(TObject *Sender)
{
AnsiString s = "���������� ������� ���������. � �������� "+DBText1->Caption+" �� ���������";
int a;
if(Edit2->Text =="")
a=0;
else {a=Edit2->Text.ToInt();}
if(a<=StrToInt(DBText1->Caption))
{if(Edit2->Text =="")
Edit4->Text = "";
else
Edit4->Text=FloatToStr(Edit2->Text.ToDouble())*DBText2->Caption.ToDouble();
if(Edit2->Text =="")
Edit5->Text = "";
else
Edit5->Text=FloatToStr(Edit2->Text.ToDouble())*DBText3->Caption.ToDouble();
}
else
{Edit2->Text="";
MessageDlg(s, mtInformation,TMsgDlgButtons()<<mbOK,0);
Edit2->SetFocus();}

}
//---------------------------------------------------------------------------

void __fastcall TForm10::FormActivate(TObject *Sender)
{
DBLookupComboBox1->KeyValue=Null();
DBText1->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm10::FormCreate(TObject *Sender)
{         /*
struct res{float x,y;}res;
struct factor {float x,y;}factor;
res.x=Screen->Width;
res.y=Screen->Height;
factor.x=1280/res.x;
factor.y=1024/res.y;
int cc=ControlCount-1;
while (cc!=-1)
{
Controls[cc]->Left/=factor.x;
Controls[cc]->Top/=factor.y;
Controls[cc]->Width/=factor.x;
Controls[cc]->Height/=factor.y;
cc--;
}
Form10->Width=factor.x;
Form10->Height=factor.y;
Form10->PixelsPerInch=Screen->PixelsPerInch;            */

  DateTimePicker1->Date=FormatDateTime("dd.mm.yyyy",DateTimePicker1->Date);
DateTimePicker1->Date=Now().FormatString("dd.mm.yyyy");

}
//---------------------------------------------------------------------------

void __fastcall TForm10::Edit3Change(TObject *Sender)
{
if(Edit3->Text=="")DM->Z->Filtered=0;
else{
DM->Z->Filtered=0;
DM->Z->Filter="Pokupets Like '%"+Edit3->Text+"%'";
DM->Z->Filtered=1;}

}
//---------------------------------------------------------------------------

void __fastcall TForm10::BitBtn9Click(TObject *Sender)
{
Form14->frxReport1->ShowReport();
}
//---------------------------------------------------------------------------


void __fastcall TForm10::DBLookupComboBox1Click(TObject *Sender)
{
DBText1->Visible=true;
}
//---------------------------------------------------------------------------


void __fastcall TForm10::BitBtn10Click(TObject *Sender)
{
Form18->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm10::FormClose(TObject *Sender, TCloseAction &Action)
{
Form20->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm10::N2Click(TObject *Sender)
{   DM->ADOConnection1->Connected=false;
Form20->DBLookupComboBox1->KeyValue=Null();
Form20->Edit1->Clear();
Form10->Hide();
Form20->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm10::N8Click(TObject *Sender)
{
Form20->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm10::N1Click(TObject *Sender)
{
ShellExecute(Handle,L"open",L"Help.chm",NULL,NULL,SW_RESTORE);
}
//---------------------------------------------------------------------------

