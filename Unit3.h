//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TBitBtn *BitBtn1;
	TBitBtn *BitBtn2;
	TBitBtn *BitBtn3;
	TBitBtn *BitBtn4;
	TBitBtn *BitBtn5;
	TBitBtn *BitBtn6;
	TBitBtn *BitBtn7;
	TMainMenu *MainMenu1;
	TMenuItem *N1;
	TMenuItem *N2;
	TMenuItem *N3;
	TMenuItem *N4;
	TMenuItem *N5;
	TMenuItem *N6;
	TMenuItem *N7;
	TMenuItem *N8;
	TPanel *Panel2;
	TDBGrid *DBGrid1;
	TDateTimePicker *DateTimePicker3;
	TDateTimePicker *DateTimePicker4;
	TLabel *Label6;
	TLabel *Label7;
	TGroupBox *GroupBox1;
	TDateTimePicker *DateTimePicker2;
	TLabel *Label4;
	TLabel *Label3;
	TDateTimePicker *DateTimePicker1;
	TEdit *Edit2;
	TLabel *Label2;
	TEdit *Edit1;
	TLabel *Label5;
	TLabel *Label1;
	TMemo *Memo1;
	TLabel *Label8;
	TLabel *Label9;
	TBitBtn *BitBtn8;
	TMenuItem *N9;
	TMenuItem *N10;
	TMenuItem *N11;
	void __fastcall BitBtn1Click(TObject *Sender);
	void __fastcall BitBtn3Click(TObject *Sender);
	void __fastcall BitBtn7Click(TObject *Sender);
	void __fastcall N7Click(TObject *Sender);
	void __fastcall N3Click(TObject *Sender);
	void __fastcall Edit1KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall BitBtn4Click(TObject *Sender);
	void __fastcall BitBtn5Click(TObject *Sender);
	void __fastcall BitBtn6Click(TObject *Sender);
	void __fastcall N6Click(TObject *Sender);
	void __fastcall N4Click(TObject *Sender);
	void __fastcall N5Click(TObject *Sender);
	void __fastcall DBGrid1TitleClick(TColumn *Column);
	void __fastcall Edit2KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall BitBtn8Click(TObject *Sender);
	void __fastcall DateTimePicker3Change(TObject *Sender);
	void __fastcall DateTimePicker3CloseUp(TObject *Sender);
	void __fastcall DateTimePicker4CloseUp(TObject *Sender);
	void __fastcall BitBtn2Click(TObject *Sender);
	void __fastcall N9Click(TObject *Sender);
	void __fastcall N8Click(TObject *Sender);
	void __fastcall N11Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
