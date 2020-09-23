//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit10.h"
#include "Unit11.h"
#include "Unit8.h"
#include "Unit20.h"
#include "Unit12.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------










void __fastcall TForm5::BitBtn1Click(TObject *Sender)
{
Form5->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::DBGrid1TitleClick(TColumn *Column)
{
if(DM->R_K->Active)
if((DM->R_K->Sort.Pos(Column->FieldName)>0)&&(DM->R_K->Sort.Pos("ASC")>0))
DM->R_K->Sort=Column->FieldName;
else
DM->R_K->Sort=Column->FieldName;
}
//---------------------------------------------------------------------------



void __fastcall TForm5::BitBtn3Click(TObject *Sender)
{
DM->R_K->Insert();
DM->R_K->Last();
DBLookupComboBox1->SetFocus();


}
//---------------------------------------------------------------------------


void __fastcall TForm5::BitBtn5Click(TObject *Sender)
{
DM->R_K->Cancel();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::BitBtn7Click(TObject *Sender)
{
if(MessageDlg("Підтвердіть видалення запису",
mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
{
DM->R_K->Delete();


}
}
//---------------------------------------------------------------------------

void __fastcall TForm5::BitBtn6Click(TObject *Sender)
{
 if(Edit2->Text==""||DBLookupComboBox1->Text=="")
	 {MessageDlg("Заповніть всі поля!", mtInformation,TMsgDlgButtons()<<mbOK,0); Edit2->SetFocus();DBLookupComboBox1->SetFocus();}
		else{
	  DM->R_K->Insert();
	  DM->R_K->FieldByName("Name_syrovyny")->AsString = DBLookupComboBox1->Text;
	  DM->R_K->FieldByName("KG")->AsString = Edit2->Text;
	  DM->R_K->FieldByName("Price")->AsString = Edit2->Text*DBText1->Caption;
	  DM->R_K->FieldByName("Price_KG")->AsString = DBText1->Caption;
	  DM->R_K->Post();
	  DM->Sklad_S->Edit();
	  DM->Sklad_S->Post();
	  double a=DBText3->Caption/1000;
	  double b=Edit2->Text*a;
	  double c=DBText2->Caption.ToDouble()-b;
	  DM->Sklad_S->Edit();
	  DM->Sklad_S->FieldByName("KG")->AsFloat =c;
	  DM->Sklad_S->Post();

			}
	  DM->R_K->Refresh();
	  DM->R->Refresh();
	  DM->Sklad_P->Refresh();
	  Edit2->Clear();

}
//---------------------------------------------------------------------------

void __fastcall TForm5::BitBtn4Click(TObject *Sender)
{
 Form7->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Edit2KeyPress(TObject *Sender, System::WideChar &Key)
{
	AnsiString Ts = "0123456789.\b";
	char Tr[] = { '\0','0','1','2','3','4','5','6','7','8','9',',','\b' };
	Key = Tr[Ts.Pos(Key)];
}
//---------------------------------------------------------------------------





























void __fastcall TForm5::N3Click(TObject *Sender)
{
DM->R_K->Insert();
DM->R_K->Last();
DBLookupComboBox1->SetFocus();

}
//---------------------------------------------------------------------------

void __fastcall TForm5::N4Click(TObject *Sender)
{
 Form7->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::N5Click(TObject *Sender)
{
DM->R_K->Cancel();

}
//---------------------------------------------------------------------------


void __fastcall TForm5::N7Click(TObject *Sender)
{
if(MessageDlg("Підтвердіть видалення запису",
mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
{
DM->R_K->Delete();

}
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------








void __fastcall TForm5::FormMouseWheelDown(TObject *Sender, TShiftState Shift, TPoint &MousePos,
          bool &Handled)
{
if (DBLookupComboBox1->Focused() == true)
 DBLookupComboBox1->Perform(WM_KEYDOWN, VK_DOWN, 0);

}
//---------------------------------------------------------------------------

void __fastcall TForm5::FormMouseWheelUp(TObject *Sender, TShiftState Shift, TPoint &MousePos,
		  bool &Handled)
{
if (DBLookupComboBox1->Focused() == true)
DBLookupComboBox1->Perform(WM_KEYDOWN, VK_UP, 0);


}
//---------------------------------------------------------------------------




void __fastcall TForm5::N6Click(TObject *Sender)
{
 if(Edit2->Text==""||DBLookupComboBox1->Text=="")
	 {MessageDlg("Заповніть всі поля!", mtInformation,TMsgDlgButtons()<<mbOK,0); Edit2->SetFocus();DBLookupComboBox1->SetFocus();}
		else{
	  DM->R_K->Insert();
	  DM->R_K->FieldByName("Name_syrovyny")->AsString = DBLookupComboBox1->Text;
	  DM->R_K->FieldByName("KG")->AsString = Edit2->Text;
	  DM->R_K->FieldByName("Price")->AsString = Edit2->Text*DBText1->Caption;
	  DM->R_K->FieldByName("Price_KG")->AsString = DBText1->Caption;
	  DM->R_K->Post();
	  DM->Sklad_S->Edit();
	  DM->Sklad_S->Post();
	  double a=DBText3->Caption/1000;
	  double b=Edit2->Text*a;
	  double c=DBText2->Caption.ToDouble()-b;
	  DM->Sklad_S->Edit();
	  DM->Sklad_S->FieldByName("KG")->AsFloat =c;
	  DM->Sklad_S->Post();
				}
	  DM->R_K->Refresh();
	  DM->R->Refresh();
	  DM->Sklad_P->Refresh();
	  Edit2->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::FormActivate(TObject *Sender)
{
DBLookupComboBox1->KeyValue=Null();
Edit2->Clear();
//Form5->Label1->Caption=Form8->Label15->Caption;
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Edit2Change(TObject *Sender)
{
AnsiString s = "Недостатня кількість сировини. В наявності "+DBText2->Caption+" Кг сировини.";
double f=DBText3->Caption/1000;
if(Edit2->Text =="")
a =0;
else a=Edit2->Text.ToDouble();
if(a<=DBText2->Caption.ToDouble())
{if(Edit2->Text =="")
Edit1->Text = "";
else
Edit1->Text =Edit2->Text.ToDouble()*f;}
else
{Edit2->Text="";
MessageDlg(s, mtInformation,TMsgDlgButtons()<<mbOK,0);
Edit2->SetFocus();}
}
//---------------------------------------------------------------------------






void __fastcall TForm5::N8Click(TObject *Sender)
{
ShellExecute(Handle,L"open",L"Help.chm",NULL,NULL,SW_RESTORE);
}
//---------------------------------------------------------------------------

void __fastcall TForm5::N11Click(TObject *Sender)
{
if(MessageDlg("Завершити роботу программи",
mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
Form20->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::N9Click(TObject *Sender)
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

