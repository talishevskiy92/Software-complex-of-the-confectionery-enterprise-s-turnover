//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit11.h"
#include "Unit1.h"
#include "Unit10.h"
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
TForm11 *Form11;
//---------------------------------------------------------------------------
__fastcall TForm11::TForm11(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm11::N10Click(TObject *Sender)
{
DM->R->Cancel();
DM->R->Sort="Kod_R";
}
//---------------------------------------------------------------------------
void __fastcall TForm11::N12Click(TObject *Sender)
{
if(MessageDlg("Підтвердіть видалення запису",
mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
{
DM->R->Delete();
DM->R->Sort = "Kod_R";
}
}
//---------------------------------------------------------------------------
void __fastcall TForm11::ЗберегтиClick(TObject *Sender)
{
if((DM->R->State==dsInsert)||(DM->R->State==dsEdit))
{
DM->R->Post();
MessageDlg("Дані успішно збережені",mtInformation,TMsgDlgButtons()<<mbOK,0);
Close();
}
else
{
MessageDlg("Не було внесено жодних змін", mtInformation,TMsgDlgButtons()<<mbOK,0);
DM->R->Cancel();
}
}
//---------------------------------------------------------------------------

