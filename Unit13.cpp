//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit13.h"
#include "Unit1.h"
#include "Unit10.h"
#include "Unit11.h"
#include "Unit12.h"
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
TForm13 *Form13;
//---------------------------------------------------------------------------
__fastcall TForm13::TForm13(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm13::BitBtn1Click(TObject *Sender)
{
if((DM->Z->State==dsInsert)||(DM->Z->State==dsEdit))
{
DM->Z->Post();
MessageDlg("Дані успішно збережені",mtInformation,TMsgDlgButtons()<<mbOK,0);
Close();
}
else
{
MessageDlg("Не було внесено жодних змін", mtInformation,TMsgDlgButtons()<<mbOK,0);
DM->Z->Cancel();
}
}
//---------------------------------------------------------------------------



void __fastcall TForm13::DBEdit3KeyPress(TObject *Sender, System::WideChar &Key)
{
	AnsiString Ts = "0123456789.\b";
	char Tr[] = { '\0','0','1','2','3','4','5','6','7','8','9',',','\b' };
	Key = Tr[Ts.Pos(Key)];
}
//---------------------------------------------------------------------------

void __fastcall TForm13::DBEdit4KeyPress(TObject *Sender, System::WideChar &Key)
{
	AnsiString Ts = "0123456789.\b";
	char Tr[] = { '\0','0','1','2','3','4','5','6','7','8','9',',','\b' };
	Key = Tr[Ts.Pos(Key)];
}
//---------------------------------------------------------------------------

