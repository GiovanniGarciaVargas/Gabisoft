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

char nombre;
  TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
//----En este apartado de codigo, se encuentra la escritura que se mostrara en pantalla en el Status Bar
//--- El StatusBar se dividira en 3 Panels, de los cuales:
StatusBar1->Panels->Items[0]->Text=Now().DateTimeString();    //--Panels 0 ó 1, aqui se escribira La Fecha y la hora del sistema
StatusBar1->Panels->Items[1]->Text= "G.A.B.I.SOFT ®" ;        //--Panels donde se escribira el nombre del Software Tutorial
StatusBar1->Panels->Items[2]->Text="Pantalla Principal: Evaluación";  //-- Panels Donde se indicara en que pantalla o apartado de la evaluacion se encuentra el usuario.
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn2Click(TObject *Sender)
{
//Apartado del codigo donde se evaluaran los datos del usuario que realizara la evaluacion....
if ( Edit1->Text=="") //--En este apartado se evaluara el dato a ingresar(osea el nombre del usuario)
    {
         ShowMessage("Debes Ingresar Tu Nombre");  //---En caso de que no se ingrese algun dato, arrojara un error de "Debes ingresar tu nombre"
         Edit1->SetFocus();
  }
      else
  {
        Form2->ShowModal();  //--- Si Se ingreso algun dato, cerrara la forma principal y entrara a la forma de primera parte
        Form1->Hide();
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{
Edit1->Clear(); //--Comando que borra lo ingresado en el Edit
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Exit1Click(TObject *Sender)
{
Close(); //--Cerrar forma
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit1KeyPress(TObject *Sender, char &Key)
{
if (Key==VK_RETURN)
 if ( Edit1->Text=="")
    {
         ShowMessage("Debes Ingresar Tu Nombre");
         Edit1->SetFocus();
  }
      else
  {
        Form2->ShowModal();
        Form1->Hide();
   }
  else
 if (Key== VK_ESCAPE)
  {
        BitBtn3->Enabled=true;
        BitBtn3->Visible=true;
        BitBtn3->SetFocus();
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
BitBtn3->Enabled=false; //--Deshabilita el boton 3
BitBtn3->Visible=false; //Deja invisible el  boton 3
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn3Click(TObject *Sender)
{
Close();     //--Cierra forma
}
//---------------------------------------------------------------------------

