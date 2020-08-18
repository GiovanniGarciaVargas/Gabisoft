//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "result.h"
#include "Eval2.h"
#include "Principal.h"
#include "eval1.h"
#include "eval3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CGAUGES"
#pragma resource "*.dfm"
TForm5 *Form5;
float total1  ;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm5::FormActivate(TObject *Sender)
{
Edit1->Text=FloatToStr(Form1->puntuacion) + " aciertos de 12 ";
total=((Form1->puntuacion*100)/12);
CGauge1->Progress=total;
Label5->Caption=Form1->Edit1->Text;
}
//---------------------------------------------------------------------------
