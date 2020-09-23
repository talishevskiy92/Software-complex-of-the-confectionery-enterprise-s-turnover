//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit4.h"
#include <Math.hpp>
#include "Unit10.h"
#include "Unit11.h"
#include "Unit12.h"
#include "Unit13.h"
#include "Unit14.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit8.h"
#include "Unit15.h"
#include "Unit16.h"
#include "Unit17.h"
#include "Unit20.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
		 DateTimePicker1->Date=FormatDateTime("dd.mm.yyyy",DateTimePicker1->Date);
		 DateTimePicker2->Date=FormatDateTime("dd.mm.yyyy",DateTimePicker2->Date);
		 DateTimePicker1->Date=Now().FormatString("dd.mm.yyyy");
		 DateTimePicker2->Date=Now().FormatString("dd.mm.yyyy");
		 DateTimePicker3->Date=FormatDateTime("dd.mm.yyyy",DateTimePicker3->Date);
		 DateTimePicker4->Date=FormatDateTime("dd.mm.yyyy",DateTimePicker4->Date);
		 DateTimePicker3->Date=Now().FormatString("dd.mm.yyyy");
		 DateTimePicker4->Date=Now().FormatString("dd.mm.yyyy");


}
//---------------------------------------------------------------------------
void __fastcall TForm3::BitBtn1Click(TObject *Sender)
{
Form3->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn3Click(TObject *Sender)
{
DM->Sklad_S->Insert();
DM->Sklad_S->Last();
Memo1->SetFocus();




}
//---------------------------------------------------------------------------






void __fastcall TForm3::BitBtn7Click(TObject *Sender)
{
if(MessageDlg("Підтвердіть видалення запису",
mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
{
DM->Sklad_S->Delete();
DM->Sklad_S->Sort = "Kod";
}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::N7Click(TObject *Sender)
{
if(MessageDlg("Підтвердіть видалення запису",
mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
{
DM->Sklad_S->Delete();
DM->Sklad_S->Sort = "Kod";
}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::N3Click(TObject *Sender)
{
DM->Sklad_S->Insert();
DM->Sklad_S->Last();
Memo1->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Edit1KeyPress(TObject *Sender, System::WideChar &Key)
{
	AnsiString Ts = "0123456789.\b";
	char Tr[] = { '\0','0','1','2','3','4','5','6','7','8','9',',','\b' };
	Key = Tr[Ts.Pos(Key)];
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn4Click(TObject *Sender)
{
Form4->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn5Click(TObject *Sender)
{
DM->Sklad_S->Cancel();
DM->Sklad_S->Sort="Kod";
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn6Click(TObject *Sender)
{

 if(Memo1->Text ==""||Edit1->Text==""||Edit2->Text=="")
	 {MessageDlg("Заповніть всі поля!", mtInformation,TMsgDlgButtons()<<mbOK,0);Edit1->SetFocus();Edit2->SetFocus(); Memo1->SetFocus();}
		else{
	  DM->Sklad_S->Insert();
	  DM->Sklad_S->FieldByName("Name syrovyny")->AsString = Memo1->Text;
	  DM->Sklad_S->FieldByName("KG")->AsString = Edit1->Text;
	  DM->Sklad_S->FieldByName("Price_KG")->AsString = Edit2->Text;
	  DM->Sklad_S->FieldByName("Price")->AsString = Edit1->Text*Edit2->Text;
	  DM->Sklad_S->FieldByName("Expiration_date")->AsString = DateTimePicker1->Date;
	  DM->Sklad_S->FieldByName("Delivery_date")->AsString = DateTimePicker2->Date;
	  DM->Sklad_S->Post();
				}
	  Memo1->Clear();
	  Edit1->Clear();
	  Edit2->Clear();

}
//---------------------------------------------------------------------------

void __fastcall TForm3::N6Click(TObject *Sender)
{
 if(Memo1->Text ==""||Edit1->Text==""||Edit2->Text=="")
	 {MessageDlg("Заповніть всі поля!", mtInformation,TMsgDlgButtons()<<mbOK,0);Edit1->SetFocus();Edit2->SetFocus(); Memo1->SetFocus();}
		else{
	  DM->Sklad_S->Insert();
	  DM->Sklad_S->FieldByName("Name syrovyny")->AsString = Memo1->Text;
	  DM->Sklad_S->FieldByName("KG")->AsString = Edit1->Text;
	  DM->Sklad_S->FieldByName("Price_KG")->AsString = Edit2->Text;
	  DM->Sklad_S->FieldByName("Price")->AsString = Edit1->Text*Edit2->Text;
	  DM->Sklad_S->FieldByName("Expiration_date")->AsString = DateTimePicker1->Date;
	  DM->Sklad_S->FieldByName("Delivery_date")->AsString = DateTimePicker2->Date;
	  DM->Sklad_S->Post();
     			}
	  Memo1->Clear();
	  Edit1->Clear();
	  Edit2->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::N4Click(TObject *Sender)
{
Form4->Show();

}
//---------------------------------------------------------------------------

void __fastcall TForm3::N5Click(TObject *Sender)
{
DM->Sklad_S->Cancel();
DM->Sklad_S->Sort="Kod";
}
//---------------------------------------------------------------------------






void __fastcall TForm3::DBGrid1TitleClick(TColumn *Column)
{
if(DM->Sklad_S->Active)
if((DM->Sklad_S->Sort.Pos(Column->FieldName)>0)&&(DM->Sklad_S->Sort.Pos("ASC")>0))
DM->Sklad_S->Sort=Column->FieldName;
else
DM->Sklad_S->Sort=Column->FieldName;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Edit2KeyPress(TObject *Sender, System::WideChar &Key)
{
	AnsiString Ts = "0123456789.\b";
	char Tr[] = { '\0','0','1','2','3','4','5','6','7','8','9',',','\b' };
	Key = Tr[Ts.Pos(Key)];
}
//---------------------------------------------------------------------------


void __fastcall TForm3::FormActivate(TObject *Sender)
{
Memo1->Clear();
Edit1->Clear();
Edit2->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn8Click(TObject *Sender)
{
 DM->Sklad_S->Filtered = false;
  		 DateTimePicker3->Date=Now().FormatString("dd.mm.yyyy");
		 DateTimePicker4->Date=Now().FormatString("dd.mm.yyyy");
}
//---------------------------------------------------------------------------



void __fastcall TForm3::DateTimePicker3Change(TObject *Sender)
{      /*
DM->ADOQuery->Close();
DM->ADOQuery->SQL->Clear();
DM->ADOQuery->SQL->Text="select * from Sklad_S where  Delivery_date <= :Delivery_date";
DM->ADOQuery->Parameters->ParamByName("Delivery_date")->Value = FormatDateTime("dd.mm.yyyy",DateTimePicker3->Date);
DM->ADOQuery->Open();    */
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DateTimePicker3CloseUp(TObject *Sender)
{
if((DateTimePicker3->Date)>(DateTimePicker4->Date))
{ShowMessage("Вибрана дата перевищує дату завершення!");}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DateTimePicker4CloseUp(TObject *Sender)
{
if((DateTimePicker3->Date)>(DateTimePicker4->Date))
{ShowMessage("Вибрана дата перевищує дату завершення!");}
else {
DM->Sklad_S->Filtered = false;
DM->Sklad_S->Filter = "Delivery_date >='"+DateTimePicker3->Date.FormatString("dd.mm.yyyy")+"' and Delivery_date <='"+DateTimePicker4->Date.FormatString("dd.mm.yyyy")+"'";
DM->Sklad_S->Filtered = true;  }
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn2Click(TObject *Sender)
{
Form17->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::N9Click(TObject *Sender)
{
ShellExecute(Handle,L"open",L"Help.chm",NULL,NULL,SW_RESTORE);
}
//---------------------------------------------------------------------------

void __fastcall TForm3::N8Click(TObject *Sender)
{
if(MessageDlg("Завершити роботу программи",
mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
Form20->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::N11Click(TObject *Sender)
{
DM->ADOConnection1->Connected=false;
Form20->DBLookupComboBox1->KeyValue=Null();
Form20->Edit1->Clear();
Form3->Close();
Form10->Hide();
Form20->Show();
}
//---------------------------------------------------------------------------

