//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit20.h"
#include "Unit1.h"
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
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit8.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm20 *Form20;
//---------------------------------------------------------------------------
__fastcall TForm20::TForm20(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm20::Button2Click(TObject *Sender)
{
Form20->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm20::Button1Click(TObject *Sender)
{
if(DBLookupComboBox1->Text==""&&Edit1->Text=="")  {
MessageDlg("Заповніть всі поля!",mtInformation,TMsgDlgButtons()<<mbOK,0);
Edit1->SetFocus();}
else{
if(DBLookupComboBox1->Text=="Адміністратор"&&Edit1->Text==DBText1->Caption){
		Form10->BitBtn8->Visible=true;
		Form1->BitBtn8->Visible=true;
		Form3->BitBtn7->Visible=true;
		Form5->BitBtn7->Visible=true;
		Form12->BitBtn6->Visible=true;
		Form10->Show();
		Form20->Hide();
}
else
if(DBLookupComboBox1->Text=="Користувач"&&Edit1->Text==DBText1->Caption){
		Form10->BitBtn8->Visible=false;
		Form1->BitBtn8->Visible=false;
		Form3->BitBtn7->Visible=false;
		Form5->BitBtn7->Visible=false;
		Form12->BitBtn6->Visible=false;
		Form10->Show();
		Form20->Hide();
}
else {MessageDlg("Пароль введений неправильно",mtInformation,TMsgDlgButtons()<<mbOK,0);}}

}
//---------------------------------------------------------------------------





void __fastcall TForm20::FormActivate(TObject *Sender)
{
if(!FileExists("Database.mdb"))
{MessageDlg("База даних відсутня",mtInformation,TMsgDlgButtons()<<mbOK,0); Application->Terminate();}
String st="Provider=Microsoft.Jet.OLEDB.4.0;Data Source=";
st+=ExtractFilePath(Application->ExeName)+"Database.mdb;Persist Security Info=False";
DM->ADOConnection1->ConnectionString=st;

if(DM->ADOConnection1->Connected==false) {
DM->ADOConnection1->Connected==true;
DM->ADOTable1->Active=true;
DM->Sklad_S->Active=true;
DM->Sklad_P->Active=true;
DM->R->Active=true;
DM->R_K->Active=true;
DM->Z->Active=true;
DM->ADOQuery->Active=true;
DM->ADOQuery1->Active=true;
DM->ADOQuery2->Active=true;
DM->ADOQuery3->Active=true;
DM->ADOQuery4->Active=true;    }

else {MessageDlg("База даних не активна",mtInformation,TMsgDlgButtons()<<mbOK,0);}

}
//---------------------------------------------------------------------------

