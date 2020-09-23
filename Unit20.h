//---------------------------------------------------------------------------

#ifndef Unit20H
#define Unit20H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TForm20 : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TDBLookupComboBox *DBLookupComboBox1;
	TLabel *Label1;
	TLabel *Label2;
	TEdit *Edit1;
	TButton *Button1;
	TButton *Button2;
	TDBText *DBText1;
	TDBText *DBText2;
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm20(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm20 *Form20;
//---------------------------------------------------------------------------
#endif
