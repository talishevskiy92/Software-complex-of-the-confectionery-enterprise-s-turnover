//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit8.h"
#include "Unit9.h"
#include "Unit10.h"
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
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
		DateTimePicker1->Date=FormatDateTime("dd.mm.yyyy",DateTimePicker1->Date);
		DateTimePicker1->Date=Now().FormatString("dd.mm.yyyy");

}
//---------------------------------------------------------------------------




void __fastcall TForm1::BitBtn5Click(TObject *Sender)
{
DM->Sklad_P->Insert();
DM->Sklad_P->Last();
Edit1->SetFocus();
DM->Sklad_P->Sort="KodT";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn7Click(TObject *Sender)
{
DM->Sklad_P->Cancel();
DM->Sklad_P->Sort="KodT";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn8Click(TObject *Sender)
{
if(MessageDlg("ϳ�������� ��������� ������",
mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
{
DM->Sklad_P->Delete();
DM->Sklad_P->Sort = "KodT";
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N7Click(TObject *Sender)
{
if(MessageDlg("ϳ�������� ��������� ������",
mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
{
DM->Sklad_P->Delete();
DM->Sklad_P->Sort = "KodT";
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MenuItem3Click(TObject *Sender)
{
DM->Sklad_P->Insert();
DM->Sklad_P->Last();
Edit1->SetFocus();
DM->Sklad_P->Sort="KodT";
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N5Click(TObject *Sender)
{
DM->Sklad_P->Cancel();
DM->Sklad_P->Sort="KodT";
}
//---------------------------------------------------------------------------



void __fastcall TForm1::DBGrid1TitleClick(TColumn *Column)
{
if(DM->Sklad_P->Active)
if((DM->Sklad_P->Sort.Pos(Column->FieldName)>0)&&(DM->Sklad_P->Sort.Pos("ASC")>0))
DM->Sklad_P->Sort=Column->FieldName;
else
DM->Sklad_P->Sort=Column->FieldName;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn9Click(TObject *Sender)
{


 if(Edit1->Text==""||Edit2->Text=="")
	 {MessageDlg("��������� �� ����!", mtInformation,TMsgDlgButtons()<<mbOK,0);
		 Edit2->SetFocus();
	 Edit1->SetFocus();
	 }
		else{
	  DM->Sklad_P->Insert();
	  DM->Sklad_P->FieldByName("NameT")->AsString = Edit1->Text;
	  DM->Sklad_P->FieldByName("KG")->AsString = Edit2->Text;
	  DM->Sklad_P->FieldByName("Zalyshoky_KG")->AsString = Edit2->Text;
	  DM->Sklad_P->FieldByName("Expiration_date")->AsString = DateTimePicker1->Date;
	  DM->Sklad_P->Post();
	  MessageDlg("���� ������ ���������",mtInformation,TMsgDlgButtons()<<mbOK,0);

			}
	   Edit1->Clear();
	   Edit2->Clear();

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Edit2KeyPress(TObject *Sender, System::WideChar &Key)
{
	AnsiString Ts = "0123456789.\b";
	char Tr[] = { '\0','0','1','2','3','4','5','6','7','8','9',',','\b' };
	Key = Tr[Ts.Pos(Key)];
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit3KeyPress(TObject *Sender, System::WideChar &Key)
{
	AnsiString Ts = "0123456789.\b";
	char Tr[] = { '\0','0','1','2','3','4','5','6','7','8','9',',','\b' };
	Key = Tr[Ts.Pos(Key)];
}
//---------------------------------------------------------------------------


void __fastcall TForm1::BitBtn6Click(TObject *Sender)
{
Form6->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N4Click(TObject *Sender)
{
Form6->Show();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::DBGrid1DblClick(TObject *Sender)
{
Form12->Show();
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Edit4Change(TObject *Sender)
{
if(Edit4->Text=="")DM->Sklad_P->Filtered=0;
else{
DM->Sklad_P->Filtered=0;
DM->Sklad_P->Filter="NameT Like '%"+Edit4->Text+"%'";
DM->Sklad_P->Filtered=1;}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{
Form1->Close();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
  Form12->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N6Click(TObject *Sender)
{
 if(Edit1->Text==""||Edit2->Text=="")
	 {MessageDlg("��������� �� ����!", mtInformation,TMsgDlgButtons()<<mbOK,0);
		 Edit2->SetFocus();
	 Edit1->SetFocus();
	 }
		else{
	  DM->Sklad_P->Insert();
	  DM->Sklad_P->FieldByName("NameT")->AsString = Edit1->Text;
	  DM->Sklad_P->FieldByName("KG")->AsString = Edit2->Text;
	  DM->Sklad_P->FieldByName("Expiration_date")->AsString = DateTimePicker1->Date;
	  DM->Sklad_P->Post();
	  MessageDlg("���� ������ ���������",mtInformation,TMsgDlgButtons()<<mbOK,0);

			}
	   Edit1->Clear();
	   Edit2->Clear();

}
//---------------------------------------------------------------------------



void __fastcall TForm1::FormActivate(TObject *Sender)
{
Edit1->Clear();
Edit2->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn2Click(TObject *Sender)
{
Form15->frxReport1->ShowReport();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::BitBtn3Click(TObject *Sender)
{

// ������ �� �������� ���� ���������
	Form8->Show();
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
	// ֳ�� ������

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

}
//---------------------------------------------------------------------------


void __fastcall TForm1::N1Click(TObject *Sender)
{
ShellExecute(Handle,L"open",L"Help.chm",NULL,NULL,SW_RESTORE);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N2Click(TObject *Sender)
{
if(MessageDlg("��������� ������ ���������",
mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
Form20->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N8Click(TObject *Sender)
{
DM->ADOConnection1->Connected=false;
Form20->DBLookupComboBox1->KeyValue=Null();
Form20->Edit1->Clear();
Form1->Close();
Form10->Hide();
Form20->Show();
}
//---------------------------------------------------------------------------


