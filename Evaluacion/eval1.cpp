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
TForm2 *Form2;

//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Salir1Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Timer1Timer(TObject *Sender)
{
StatusBar1->Panels->Items[0]->Text=Now().DateTimeString();
StatusBar1->Panels->Items[1]->Text= "G.A.B.I.SOFT ®" ;
StatusBar1->Panels->Items[2]->Text="Parte 1: Cálculo Con Geometría Análitica";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::BitBtn3Click(TObject *Sender)
{
if ((RadioButton1->Checked==true))
  {
   Form1->puntuacion=Form1->puntuacion+1;
   punt_part1=punt_part1 + 1;
   Image2->Visible=true;
   Panel3->Enabled=false;
    }
   else
   {
     Image3->Visible=true;
   Panel3->Enabled=false;
    punt_part1=punt_part1;
   }


  if ((RadioButton6->Checked==true))
  {
   Form1->puntuacion=Form1->puntuacion+1;
      Image4->Visible=true;
   Panel4->Enabled=false;
      punt_part1=punt_part1 + 1;
    }

   else
   {
     Image5->Visible=true;
   Panel4->Enabled=false;
        punt_part1=punt_part1;
  }



  if ((RadioButton11->Checked==true))
  {
   Form1->puntuacion=Form1->puntuacion+1;
   Image6->Visible=true;
   Panel5->Enabled=false;
      punt_part1=punt_part1 + 1;
    }

   else
   {
     Image7->Visible=true;
   Panel5->Enabled=false;
        punt_part1=punt_part1;
  }


  if ((RadioButton14->Checked==true))
  {
   Form1->puntuacion=Form1->puntuacion+1;
   Image8->Visible=true;
   Panel6->Enabled=false;
      punt_part1=punt_part1 + 1;
    }
   else
   {
     Image9->Visible=true;
   Panel6->Enabled=false;
        punt_part1=punt_part1;
  }


  if ((RadioButton17->Checked==true))
  {
   Form1->puntuacion=Form1->puntuacion+1;
   Image10->Visible=true;
   Panel10->Enabled=false;
   punt_part1=punt_part1 + 1;
    }

   else
   {
   Image11->Visible=true;
   Panel10->Enabled=false;
   punt_part1=punt_part1;
  }

  Edit1->Visible=true;
  Edit1->Text=FloatToStr(punt_part1)+" aciertos de 5";
    BitBtn2->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::BitBtn2Click(TObject *Sender)
{
Form3->Show();
Form2->Hide();
Form1->Hide();
}
//---------------------------------------------------------------------------
