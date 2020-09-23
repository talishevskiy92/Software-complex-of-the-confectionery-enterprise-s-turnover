//---------------------------------------------------------------------------

#ifndef Unit10H
#define Unit10H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.DBCtrls.hpp>
//---------------------------------------------------------------------------
class TForm10 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TBitBtn *BitBtn2;
	TBitBtn *BitBtn3;
	TMainMenu *MainMenu1;
	TMenuItem *MenuItem1;
	TMenuItem *MenuItem2;
	TMenuItem *MenuItem3;
	TMenuItem *N4;
	TMenuItem *N5;
	TMenuItem *N6;
	TMenuItem *N7;
	TMenuItem *N1;
	TDBGrid *DBGrid1;
	TEdit *Edit1;
	TLabel *Label1;
	TDBLookupComboBox *DBLookupComboBox1;
	TLabel *Label2;
	TEdit *Edit2;
	TLabel *Label3;
	TDateTimePicker *DateTimePicker1;
	TLabel *Label4;
	TGroupBox *GroupBox1;
	TBitBtn *BitBtn4;
	TBitBtn *BitBtn5;
	TBitBtn *BitBtn6;
	TBitBtn *BitBtn7;
	TBitBtn *BitBtn8;
	TPanel *Panel2;
	TLabel *Label5;
	TEdit *Edit3;
	TBitBtn *BitBtn9;
	TDBText *DBText2;
	TEdit *Edit4;
	TDBText *DBText3;
	TEdit *Edit5;
	TDBText *DBText1;
	TLabel *Label6;
	TLabel *Label7;
	TBitBtn *BitBtn10;
	TMenuItem *N2;
	TMenuItem *N3;
	TMenuItem *N8;
	void __fastcall BitBtn2Click(TObject *Sender);
	void __fastcall BitBtn3Click(TObject *Sender);
	void __fastcall BitBtn4Click(TObject *Sender);
	void __fastcall MenuItem3Click(TObject *Sender);
	void __fastcall BitBtn6Click(TObject *Sender);
	void __fastcall N5Click(TObject *Sender);
	void __fastcall BitBtn8Click(TObject *Sender);
	void __fastcall N7Click(TObject *Sender);
	void __fastcall BitBtn5Click(TObject *Sender);
	void __fastcall N4Click(TObject *Sender);
	void __fastcall BitBtn7Click(TObject *Sender);
	void __fastcall Edit2KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall FormMouseWheelDown(TObject *Sender, TShiftState Shift, TPoint &MousePos,
          bool &Handled);
	void __fastcall FormMouseWheelUp(TObject *Sender, TShiftState Shift, TPoint &MousePos,
          bool &Handled);
	void __fastcall DBGrid1TitleClick(TColumn *Column);
	void __fastcall Edit2Change(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Edit3Change(TObject *Sender);
	void __fastcall BitBtn9Click(TObject *Sender);
	void __fastcall DBLookupComboBox1Click(TObject *Sender);
	void __fastcall BitBtn10Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall N2Click(TObject *Sender);
	void __fastcall N8Click(TObject *Sender);
	void __fastcall N1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm10(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm10 *Form10;
//---------------------------------------------------------------------------
#endif
