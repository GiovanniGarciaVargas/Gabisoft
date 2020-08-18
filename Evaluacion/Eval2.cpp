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
#pragma resource "*.dfm"
TForm3 *Form3;

//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Salir1Click(TObject *Sender)
{
Form3->Hide();
Form1->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Timer1Timer(TObject *Sender)
{
StatusBar1->Panels->Items[0]->Text=Now().DateTimeString();
StatusBar1->Panels->Items[1]->Text= "G.A.B.I.SOFT ®" ;
StatusBar1->Panels->Items[2]->Text="Parte 2: Algebra Lineal Y Vectorial";

}
//---------------------------------------------------------------------------
void __fastcall TForm3::BitBtn3Click(TObject *Sender)
{
if ((RadioButton4->Checked==true))
  {
   Form1->puntuacion=Form1->puntuacion+1;
   Image2->Visible=true;
   Panel3->Enabled=false;
   punt_part2=punt_part2 + 1;
    }

   else
   {
     Image3->Visible=true;
   Panel3->Enabled=false;
  }

  if ((RadioButton6->Checked==true))
  {
   Form1->puntuacion=Form1->puntuacion+1;
   Image10->Visible=true;
   Panel4->Enabled=false;
      punt_part2=punt_part2 + 1;
    }

   else
   {
     Image11->Visible=true;
   Panel4->Enabled=false;
  }

 if ((RadioButton9->Checked==true))
  {
   Form1->puntuacion=Form1->puntuacion+1;
   Image6->Visible=true;
   Panel5->Enabled=false;
      punt_part2=punt_part2 + 1;
    }

   else
   {
     Image7->Visible=true;
   Panel5->Enabled=false;
  }

    Edit1->Visible=true;
  Edit1->Text=FloatToStr(punt_part2)+" aciertos de 3";
   BitBtn2->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn2Click(TObject *Sender)
{
Form4->Show();
Form3->Hide();
}
//---------------------------------------------------------------------------

