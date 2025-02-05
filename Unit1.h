//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
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
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TBitBtn *BitBtn5;
	TBitBtn *BitBtn6;
	TBitBtn *BitBtn7;
	TBitBtn *BitBtn9;
	TBitBtn *BitBtn8;
	TDBGrid *DBGrid1;
	TMainMenu *MainMenu1;
	TMenuItem *MenuItem1;
	TMenuItem *MenuItem2;
	TMenuItem *MenuItem3;
	TMenuItem *N4;
	TMenuItem *N5;
	TMenuItem *N6;
	TMenuItem *N7;
	TMenuItem *N1;
	TGroupBox *GroupBox1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TEdit *Edit2;
	TDateTimePicker *DateTimePicker1;
	TEdit *Edit1;
	TPanel *Panel2;
	TLabel *Label5;
	TEdit *Edit4;
	TBitBtn *BitBtn1;
	TButton *Button1;
	TLabel *Label4;
	TBitBtn *BitBtn2;
	TBitBtn *BitBtn3;
	TMenuItem *N2;
	TMenuItem *N3;
	TMenuItem *N8;
	void __fastcall BitBtn5Click(TObject *Sender);
	void __fastcall BitBtn7Click(TObject *Sender);
	void __fastcall BitBtn8Click(TObject *Sender);
	void __fastcall N7Click(TObject *Sender);
	void __fastcall MenuItem3Click(TObject *Sender);
	void __fastcall N5Click(TObject *Sender);
	void __fastcall DBGrid1TitleClick(TColumn *Column);
	void __fastcall BitBtn9Click(TObject *Sender);
	void __fastcall Edit2KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Edit3KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall BitBtn6Click(TObject *Sender);
	void __fastcall N4Click(TObject *Sender);
	void __fastcall DBGrid1DblClick(TObject *Sender);
	void __fastcall Edit4Change(TObject *Sender);
	void __fastcall BitBtn1Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall N6Click(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall BitBtn2Click(TObject *Sender);
	void __fastcall BitBtn3Click(TObject *Sender);
	void __fastcall N1Click(TObject *Sender);
	void __fastcall N2Click(TObject *Sender);
	void __fastcall N8Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
