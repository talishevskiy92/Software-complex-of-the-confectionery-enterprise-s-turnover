//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit7.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm6::DBEdit2KeyPress(TObject *Sender, System::WideChar &Key)
{
	AnsiString Ts = "0123456789.\b";
	char Tr[] = { '\0','0','1','2','3','4','5','6','7','8','9','.','\b' };
	Key = Tr[Ts.Pos(Key)];
}
//---------------------------------------------------------------------------

void __fastcall TForm6::DBEdit3KeyPress(TObject *Sender, System::WideChar &Key)
{
	AnsiString Ts = "0123456789.\b";
	char Tr[] = { '\0','0','1','2','3','4','5','6','7','8','9','.','\b' };
	Key = Tr[Ts.Pos(Key)];
}
//---------------------------------------------------------------------------

void __fastcall TForm6::DBEdit4KeyPress(TObject *Sender, System::WideChar &Key)
{
	AnsiString Ts = "0123456789.\b";
	char Tr[] = { '\0','0','1','2','3','4','5','6','7','8','9','.','\b' };
	Key = Tr[Ts.Pos(Key)];
}
//---------------------------------------------------------------------------

void __fastcall TForm6::BitBtn1Click(TObject *Sender)
{
if((DM->Sklad_P->State==dsInsert)||(DM->Sklad_P->State==dsEdit))
{
DM->Sklad_P->Post();
MessageDlg("Дані успішно збережені",mtInformation,TMsgDlgButtons()<<mbOK,0);
DM->Sklad_P->Refresh();
Close();
}
else
{
MessageDlg("Не було внесено жодних змін", mtInformation,TMsgDlgButtons()<<mbOK,0);
DM->Sklad_P->Cancel();
}
}
//---------------------------------------------------------------------------

