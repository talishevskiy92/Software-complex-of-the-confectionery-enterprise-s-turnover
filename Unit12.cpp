//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit12.h"
#include "Unit1.h"
#include "Unit10.h"
#include "Unit11.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit8.h"
#include "Unit20.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm12 *Form12;
//---------------------------------------------------------------------------
__fastcall TForm12::TForm12(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm12::BitBtn1Click(TObject *Sender)
{
  if(Edit1->Text=="")
	 {MessageDlg("Заповніть всі поля!", mtInformation,TMsgDlgButtons()<<mbOK,0);
	 Edit1->SetFocus();
	 }
		else{
	  DM->R->Insert();
	  DM->R->FieldByName("Name_R")->AsString = Edit1->Text;
	  DM->R->Post();
	  MessageDlg("Дані успішно збережені",mtInformation,TMsgDlgButtons()<<mbOK,0);
			}
	  DM->Sklad_P->Edit();
	  DM->Sklad_P->FieldByName("Retseptupa")->AsString = Edit1->Text;
	  DM->Sklad_P->Post();
	   Edit1->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm12::N1Click(TObject *Sender)
{
if(MessageDlg("Підтвердіть видалення запису",
mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
{
DM->R->Delete();
DM->R->Sort = "Kod_R";
}
}
//---------------------------------------------------------------------------
void __fastcall TForm12::BitBtn2Click(TObject *Sender)
{
Form5->Show();
DM->R_K->Refresh();
DM->Sklad_P->Refresh();
DM->R->Refresh();
}
//---------------------------------------------------------------------------
void __fastcall TForm12::BitBtn7Click(TObject *Sender)
{
Form12->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm12::BitBtn3Click(TObject *Sender)
{
DM->R->Insert();
DM->R->Last();
Edit1->SetFocus();
DM->R->Sort="Kod_R";
}
//---------------------------------------------------------------------------

void __fastcall TForm12::MenuItem3Click(TObject *Sender)
{
DM->R->Insert();
DM->R->Last();
Edit1->SetFocus();
DM->R->Sort="Kod_R";
}
//---------------------------------------------------------------------------

void __fastcall TForm12::BitBtn5Click(TObject *Sender)
{
DM->R->Cancel();
DM->R->Sort="Kod_R";
}
//---------------------------------------------------------------------------

void __fastcall TForm12::BitBtn6Click(TObject *Sender)
{
if(MessageDlg("Підтвердіть видалення запису",
mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
{
DM->R->Delete();
DM->R->Sort = "Kod_R";
}
}
//---------------------------------------------------------------------------

void __fastcall TForm12::N7Click(TObject *Sender)
{
if(MessageDlg("Підтвердіть видалення запису",
mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
{
DM->R->Delete();
DM->R->Sort = "Kod_R";
}
}
//---------------------------------------------------------------------------

void __fastcall TForm12::N6Click(TObject *Sender)
{
  if(Edit1->Text=="")
	 {MessageDlg("Заповніть всі поля!", mtInformation,TMsgDlgButtons()<<mbOK,0);
	 Edit1->SetFocus();
	 }
		else{
	  DM->R->Insert();
	  DM->R->FieldByName("Name_R")->AsString = Edit1->Text;
	  DM->R->Post();
	  MessageDlg("Дані успішно збережені",mtInformation,TMsgDlgButtons()<<mbOK,0);
			}
	   Edit1->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm12::N5Click(TObject *Sender)
{
DM->R->Cancel();
DM->R->Sort="Kod_R";
}
//---------------------------------------------------------------------------

void __fastcall TForm12::BitBtn4Click(TObject *Sender)
{
Form11->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm12::N4Click(TObject *Sender)
{
Form11->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm12::MenuItem4Click(TObject *Sender)
{
ShellExecute(Handle,L"open",L"Help.chm",NULL,NULL,SW_RESTORE);
}
//---------------------------------------------------------------------------

void __fastcall TForm12::N8Click(TObject *Sender)
{
if(MessageDlg("Завершити роботу программи",
mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
Form20->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm12::N2Click(TObject *Sender)
{
DM->ADOConnection1->Connected=false;
Form20->DBLookupComboBox1->KeyValue=Null();
Form20->Edit1->Clear();
Form12->Close();
Form5->Close();
Form1->Close();
Form10->Hide();
Form20->Show();
}
//---------------------------------------------------------------------------

