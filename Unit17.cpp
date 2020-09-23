//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit17.h"
#include "Unit1.h"
#include "Unit10.h"
#include "Unit11.h"
#include "Unit12.h"
#include "Unit13.h"
#include "Unit14.h"
#include "Unit15.h"
#include "Unit16.h"
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
TForm17 *Form17;
//---------------------------------------------------------------------------
__fastcall TForm17::TForm17(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm17::DateTimePicker1CloseUp(TObject *Sender)
{
if((DateTimePicker1->Date)>(DateTimePicker2->Date))
{ShowMessage("Вибрана дата перевищує дату завершення!");}
}
//---------------------------------------------------------------------------
void __fastcall TForm17::FormActivate(TObject *Sender)
{
DateTimePicker1->Date=FormatDateTime("dd.mm.yyyy",DateTimePicker1->Date);
		 DateTimePicker2->Date=FormatDateTime("dd.mm.yyyy",DateTimePicker2->Date);
		 DateTimePicker1->Date=Now().FormatString("dd.mm.yyyy");
		 DateTimePicker2->Date=Now().FormatString("dd.mm.yyyy");
}
//---------------------------------------------------------------------------
void __fastcall TForm17::BitBtn1Click(TObject *Sender)
{
if((DateTimePicker1->Date)>(DateTimePicker2->Date))
{ShowMessage("Вибрана дата перевищує дату завершення!");}
else {
DM->Sklad_S->Filtered = false;
DM->Sklad_S->Filter = "Delivery_date >='"+DateTimePicker1->Date.FormatString("dd.mm.yyyy")+"' and Delivery_date <='"+DateTimePicker2->Date.FormatString("dd.mm.yyyy")+"'";
DM->Sklad_S->Filtered = true;  }
Form16->frxReport1->ShowReport();
}
//---------------------------------------------------------------------------

void __fastcall TForm17::FormClose(TObject *Sender, TCloseAction &Action)
{
DM->Sklad_S->Filtered = false;
}
//---------------------------------------------------------------------------

