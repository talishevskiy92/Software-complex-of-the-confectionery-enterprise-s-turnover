//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::BitBtn2Click(TObject *Sender)
{
	     Form4->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm4::BitBtn1Click(TObject *Sender)
{
DBEdit5->Text=DBEdit2->Text*DBEdit6->Text;
if((DM->Sklad_S->State==dsInsert)||(DM->Sklad_S->State==dsEdit))
{
DM->Sklad_S->Post();
MessageDlg("Дані успішно збережені",mtInformation,TMsgDlgButtons()<<mbOK,0);
Close();
}
else
{
MessageDlg("Не було внесено жодних змін", mtInformation,TMsgDlgButtons()<<mbOK,0);
DM->Sklad_S->Cancel();
}


}



//---------------------------------------------------------------------------
void __fastcall TForm4::DBEdit2KeyPress(TObject *Sender, System::WideChar &Key)
{
	AnsiString Ts = "0123456789.\b";
	char Tr[] = { '\0','0','1','2','3','4','5','6','7','8','9',',','\b' };
	Key = Tr[Ts.Pos(Key)];
}
//---------------------------------------------------------------------------

void __fastcall TForm4::DBEdit3KeyPress(TObject *Sender, System::WideChar &Key)
{
	AnsiString Ts = "0123456789.\b";
	char Tr[] = { '\0','0','1','2','3','4','5','6','7','8','9',',','\b' };
	Key = Tr[Ts.Pos(Key)];
}
//---------------------------------------------------------------------------

void __fastcall TForm4::DBEdit4KeyPress(TObject *Sender, System::WideChar &Key)
{
	AnsiString Ts = "0123456789.\b";
	char Tr[] = { '\0','0','1','2','3','4','5','6','7','8','9',',','\b' };
	Key = Tr[Ts.Pos(Key)];
}
//---------------------------------------------------------------------------


void __fastcall TForm4::DBEdit5KeyPress(TObject *Sender, System::WideChar &Key)
{
	AnsiString Ts = "0123456789.\b";
	char Tr[] = { '\0','0','1','2','3','4','5','6','7','8','9',',','\b' };
	Key = Tr[Ts.Pos(Key)];
}
//---------------------------------------------------------------------------

void __fastcall TForm4::DBEdit6KeyPress(TObject *Sender, System::WideChar &Key)
{
	AnsiString Ts = "0123456789.\b";
	char Tr[] = { '\0','0','1','2','3','4','5','6','7','8','9',',','\b' };
	Key = Tr[Ts.Pos(Key)];
}
//---------------------------------------------------------------------------

