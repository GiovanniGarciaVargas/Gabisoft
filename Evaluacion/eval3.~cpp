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
TForm4 *Form4;

//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Timer1Timer(TObject *Sender)
{
StatusBar1->Panels->Items[0]->Text=Now().DateTimeString();
StatusBar1->Panels->Items[1]->Text= "G.A.B.I.SOFT ®" ;
StatusBar1->Panels->Items[2]->Text="Parte 3: Física";

}
//---------------------------------------------------------------------------

void __fastcall TForm4::BitBtn3Click(TObject *Sender)
{
if ((RadioButton4->Checked==true))
  {
   Form1->puntuacion=Form1->puntuacion+1;
   Image2->Visible=true;
   Panel3->Enabled=false;
   punt_part3=punt_part3 + 1;
    }

   else
   {
     Image3->Visible=true;
   Panel3->Enabled=false;
  }

  if ((RadioButton6->Checked==true))
  {
   Form1->puntuacion=Form1->puntuacion+1;
   Image6->Visible=true;
   Panel4->Enabled=false;
      punt_part3=punt_part3 + 1;
    }

   else
   {
     Image7->Visible=true;
   Panel4->Enabled=false;
  }

if ((RadioButton9->Checked==true))
 {
   Form1->puntuacion=Form1->puntuacion+1;
    Image4->Visible=true;
    Panel5->Enabled=false;
    punt_part3=punt_part3 + 1;
 }
   else
 {
    Image5->Visible=true;
    Panel5->Enabled=false;
 }

 if ((RadioButton16->Checked==true))
    {
   Form1->puntuacion=Form1->puntuacion+1;
      Image8->Visible=true;
      Panel8->Enabled=false;
      punt_part3=punt_part3 + 1;
    }
     else
       {
         Image9->Visible=true;
         Panel8->Enabled=false;
       }

    Edit1->Visible=true;
  Edit1->Text=FloatToStr(punt_part3)+" aciertos de 4";
   BitBtn2->Enabled=true;

}
//---------------------------------------------------------------------------

void __fastcall TForm4::BitBtn2Click(TObject *Sender)
{
Form5->Show();
Form4->Hide();

}
//---------------------------------------------------------------------------

