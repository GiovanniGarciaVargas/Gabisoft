//---------------------------------------------------------------------------

#include <vcl.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma hdrstop

#include "fisica.h"
#include "presentacion.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//--- Variable identificador para el manejo del control de botones de ejercicios
int id;
//--- Variables para el desarrollo de operaciones
float resu1,resu2,masa,aceleracion,fuerza,dinas,vo,vf,tiempo,velocidad;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::BitBtn1Click(TObject *Sender)
{
//--- Condicional de espacio vacío
if((Edit3->Text=="")||(Edit4->Text==""))
{
ShowMessage("Faltan ingresar datos");
}
else
{
//--- Calculo de operaciones de fisica ejercicio 1
masa=Edit3->Text.ToDouble();
aceleracion=Edit4->Text.ToDouble();
resu1=masa*aceleracion;
resu2=(resu1)*(pow(10,5));

Edit1->Text=resu1;
Edit2->Text=resu2;
Button1->Enabled=true;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender)
{
//--- Visibilidad de la etiqueta y memo boton 1
Label19->Visible=true;
Memo2->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Edit1Change(TObject *Sender)
{
//--- Formato de decimales
Edit1->Text.FormatFloat("#.##",Edit1->Text.ToDouble());
}
//---------------------------------------------------------------------------




void __fastcall TForm2::Image2Click(TObject *Sender)
{
//--- Uso de variable global para pasar el control boton 1
if(id==1)
{
Panel5->Visible=true;
Panel2->Visible=false;
Panel3->Visible=false;
Panel4->Visible=false;
Panel6->Visible=false;
Panel7->Visible=false;
Panel8->Visible=false;
Panel9->Visible=false;
Panel10->Visible=false;
}
else if(id==2)
{
Panel2->Visible=true;
Panel3->Visible=false;
Panel4->Visible=false;
Panel5->Visible=false;
Panel6->Visible=false;
Panel7->Visible=false;
Panel8->Visible=false;
Panel9->Visible=false;
Panel10->Visible=false;
}
else if(id==3)
{
Panel8->Visible=true;
Panel2->Visible=false;
Panel3->Visible=false;
Panel4->Visible=false;
Panel5->Visible=false;
Panel6->Visible=false;
Panel7->Visible=false;
Panel9->Visible=false;
Panel10->Visible=false;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Image3Click(TObject *Sender)
{
//--- Uso de variable global para pasar el control boton 2
if(id==1)
{
Panel6->Visible=true;
Panel3->Visible=false;
Panel2->Visible=false;
Panel4->Visible=false;
Panel5->Visible=false;
Panel7->Visible=false;
Panel8->Visible=false;
Panel9->Visible=false;
Panel10->Visible=false;
}
else if(id==2)
{
Panel3->Visible=true;
Panel2->Visible=false;
Panel4->Visible=false;
Panel5->Visible=false;
Panel6->Visible=false;
Panel7->Visible=false;
Panel8->Visible=false;
Panel9->Visible=false;
Panel10->Visible=false;
}
else if(id==3)
{
Panel9->Visible=true;
Panel3->Visible=false;
Panel2->Visible=false;
Panel4->Visible=false;
Panel5->Visible=false;
Panel6->Visible=false;
Panel7->Visible=false;
Panel8->Visible=false;
Panel10->Visible=false;
}
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button3Click(TObject *Sender)
{
//--- Visibilidad de la etiqueta y memo boton 2
Label18->Visible=true;
Memo4->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
//--- Condicional de espacio vacío
if((Edit6->Text=="")||(Edit7->Text==""))
{
ShowMessage("Faltan ingresar datos");
}
else
{
//--- Calculo de operaciones de fisica ejercicio 2
masa=Edit6->Text.ToDouble();
dinas=Edit7->Text.ToDouble();
fuerza=dinas/(pow(10,5));
resu1=fuerza / masa;

Edit5->Text=resu1;
Button3->Enabled=true;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Image4Click(TObject *Sender)
{
//--- Habilitar botones de ejercicios con identificador 2
id=2;
Image2->Visible=true;
Image3->Visible=true;
Image6->Visible=true;

Panel2->Visible=false;
Panel3->Visible=false;
Panel4->Visible=false;

Panel5->Visible=false;
Panel6->Visible=false;
Panel7->Visible=false;

Panel8->Visible=false;
Panel9->Visible=false;
Panel10->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Image5Click(TObject *Sender)
{
//--- Pasar el control a la forma 1 y cerrar la forma actual
Form1->Show();
Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Image6Click(TObject *Sender)
{
//--- Uso de variable global para pasar el control boton 3
if(id==1)
{
Panel7->Visible=true;
Panel4->Visible=false;
Panel2->Visible=false;
Panel3->Visible=false;
Panel5->Visible=false;
Panel6->Visible=false;
Panel8->Visible=false;
Panel9->Visible=false;
Panel10->Visible=false;
}
else if(id==2)
{
Panel4->Visible=true;
Panel2->Visible=false;
Panel3->Visible=false;
Panel5->Visible=false;
Panel6->Visible=false;
Panel7->Visible=false;
Panel8->Visible=false;
Panel9->Visible=false;
Panel10->Visible=false;
}
else if(id==3)
{
Panel10->Visible=true;
Panel4->Visible=false;
Panel2->Visible=false;
Panel3->Visible=false;
Panel5->Visible=false;
Panel6->Visible=false;
Panel7->Visible=false;
Panel8->Visible=false;
Panel9->Visible=false;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button5Click(TObject *Sender)
{
//--- Visibilidad de etiqueta y memo ejercicio 3
Label17->Visible=true;
Memo6->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button4Click(TObject *Sender)
{
//--- Condicional de espacio vacío
if ((Edit8->Text=="")||(Edit9->Text=="")||(Edit10->Text=="")||(Edit11->Text==""))
{
ShowMessage("Falta ingresar datos");
}
else
{
//--- Calculo de operaciones de fisica ejercicio 3
masa=Edit8->Text.ToDouble();
vo=Edit9->Text.ToDouble();
vf=Edit10->Text.ToDouble();
tiempo=Edit11->Text.ToDouble();

aceleracion=vf/tiempo;
fuerza=masa*aceleracion;

Edit12->Text=fuerza;
Button5->Enabled=true;
}

}
//---------------------------------------------------------------------------

void __fastcall TForm2::Image7Click(TObject *Sender)
{
//--- Habilitar botones de ejercicios con el identificador 1
id=1;
Image2->Visible=true;
Image3->Visible=true;
Image6->Visible=true;

Panel2->Visible=false;
Panel3->Visible=false;
Panel4->Visible=false;

Panel5->Visible=false;
Panel6->Visible=false;
Panel7->Visible=false;

Panel8->Visible=false;
Panel9->Visible=false;
Panel10->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button6Click(TObject *Sender)
{
if ( (Edit13->Text=="")||(Edit14->Text=="")||(Edit15->Text=="")  )
{
ShowMessage("Faltan datos por ingresar");
}
else
{
masa = Edit13->Text.ToDouble();
velocidad = Edit14->Text.ToDouble();
fuerza = Edit15->Text.ToDouble();

tiempo = (masa*velocidad)/fuerza;
Edit16->Text = tiempo;
Button7->Enabled=true;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button7Click(TObject *Sender)
{
Label28->Visible=true;
Memo8->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button8Click(TObject *Sender)
{
if ( (Edit17->Text=="")||(Edit18->Text=="") )
{
ShowMessage("Faltan datos por ingresar");
}
else
{
masa=Edit17->Text.ToDouble();
velocidad=Edit18->Text.ToDouble();

fuerza=masa*velocidad;
Edit19->Text=fuerza;
Button9->Enabled=true;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button9Click(TObject *Sender)
{
Label47->Visible=true;
Memo10->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button10Click(TObject *Sender)
{
if( (Edit20->Text=="")||(Edit21->Text=="") )
{
ShowMessage("Faltan ingresar datos");
}
else
{
fuerza=Edit20->Text.ToDouble();
masa=Edit21->Text.ToDouble();

velocidad=fuerza/masa;
Edit22->Text=velocidad;
Button11->Enabled=true;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button11Click(TObject *Sender)
{
Label55->Visible=true;
Memo12->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Image8Click(TObject *Sender)
{
id=3;
Image2->Visible=true;
Image3->Visible=true;
Image6->Visible=true;

Panel2->Visible=false;
Panel3->Visible=false;
Panel4->Visible=false;

Panel5->Visible=false;
Panel6->Visible=false;
Panel7->Visible=false;

Panel8->Visible=false;
Panel9->Visible=false;
Panel10->Visible=false;
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button12Click(TObject *Sender)
{
if (
(Edit23->Text=="")||(Edit24->Text==""))
{
ShowMessage("Faltan datos por ingresar");
}
else
{
float fx,fy;

fx=Edit23->Text.ToDouble();
fy=Edit24->Text.ToDouble();

fx=fx*cos(30*3.14159/180);
fy=fy*sin(30*3.14159/180);

Edit25->Text=fx;
Edit26->Text=fy;

Button13->Enabled=true;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button13Click(TObject *Sender)
{
Label59->Visible=true;
Memo14->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button14Click(TObject *Sender)
{
if (
(Edit27->Text=="")||(Edit28->Text=="") )
{
ShowMessage("Faltas datos por ingresar");
}
else
{
float fneta,fgravedad,faplicada;

fneta=Edit28->Text.ToDouble();
fgravedad=Edit27->Text.ToDouble();

faplicada=fgravedad+fneta;

Edit29->Text=faplicada;
Button15->Enabled=true;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button15Click(TObject *Sender)
{
Label71->Visible=true;
Memo16->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button16Click(TObject *Sender)
{
if (
(Edit30->Text=="")||(Edit31->Text=="")||(Edit32->Text=="")||(Edit33->Text=="") )
{
ShowMessage("Faltan datos en las casillas");
}
else
{
vo=Edit30->Text.ToDouble();
vf=Edit31->Text.ToDouble();
tiempo=Edit32->Text.ToDouble();
masa=Edit33->Text.ToDouble();

aceleracion=((vf-vo)/tiempo)*-1;
fuerza=masa*aceleracion;

Edit34->Text=aceleracion;
Edit35->Text=fuerza;

Button17->Enabled=true;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button17Click(TObject *Sender)
{
Label79->Visible=true;
Memo18->Visible=true;
}
//---------------------------------------------------------------------------



