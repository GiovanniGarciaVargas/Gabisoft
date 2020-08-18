//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int x1,x2,x3,y1,y2,y3,z1,z2,z3;   //Variables de la matriz 1
int a1,a2,a3,b1,b2,b3,c1,c2,c3;   //Variables de la matriz 2
float r1,r2,r3,r4,r5,r6,r7,r8,r9; //Variables de la matriz resultante
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
if ( (Edit1->Text=="")||(Edit2->Text=="")||(Edit3->Text=="")||(Edit4->Text=="")||(Edit5->Text=="")||(Edit6->Text=="")||(Edit7->Text=="")||(Edit8->Text=="")||(Edit9->Text=="")||
(Edit10->Text=="")||(Edit11->Text=="")||(Edit12->Text=="")||(Edit13->Text=="")||(Edit14->Text=="")||(Edit15->Text=="")||(Edit16->Text=="")||(Edit17->Text=="")||(Edit18->Text=="") )
{
ShowMessage("Faltan ingresar datos");
}
else
{
//------------------------Variables adquieren valor ingresado
x1=Edit1->Text.ToDouble();
x2=Edit2->Text.ToDouble();
x3=Edit3->Text.ToDouble();
y1=Edit4->Text.ToDouble();
y2=Edit5->Text.ToDouble();
y3=Edit6->Text.ToDouble();
z1=Edit7->Text.ToDouble();
z2=Edit8->Text.ToDouble();
z3=Edit9->Text.ToDouble();

a1=Edit10->Text.ToDouble();
a2=Edit11->Text.ToDouble();
a3=Edit12->Text.ToDouble();
b1=Edit13->Text.ToDouble();
b2=Edit14->Text.ToDouble();
b3=Edit15->Text.ToDouble();
c1=Edit16->Text.ToDouble();
c2=Edit17->Text.ToDouble();
c3=Edit18->Text.ToDouble();

r1=x1+a1;
r2=x2+a2;
r3=x3+a3;
r4=y1+b1;
r5=y2+b2;
r6=y3+b3;
r7=z1+c1;
r8=z2+c2;
r9=z3+c3;

Edit19->Text=r1;
Edit20->Text=r2;
Edit21->Text=r3;
Edit22->Text=r4;
Edit23->Text=r5;
Edit24->Text=r6;
Edit25->Text=r7;
Edit26->Text=r8;
Edit27->Text=r9;

Edit28->Text="("+FloatToStr(x1)+"+"+FloatToStr(a1)+")";
Edit29->Text="("+FloatToStr(x2)+"+"+FloatToStr(a2)+")";
Edit30->Text="("+FloatToStr(x3)+"+"+FloatToStr(a3)+")";
Edit31->Text="("+FloatToStr(y1)+"+"+FloatToStr(b1)+")";
Edit32->Text="("+FloatToStr(y2)+"+"+FloatToStr(b2)+")";
Edit33->Text="("+FloatToStr(y3)+"+"+FloatToStr(b3)+")";
Edit34->Text="("+FloatToStr(z1)+"+"+FloatToStr(c1)+")";
Edit35->Text="("+FloatToStr(z2)+"+"+FloatToStr(c2)+")";
Edit36->Text="("+FloatToStr(z3)+"+"+FloatToStr(c3)+")";
}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button2Click(TObject *Sender)
{
if ( (Edit1->Text=="")||(Edit2->Text=="")||(Edit3->Text=="")||(Edit4->Text=="")||(Edit5->Text=="")||(Edit6->Text=="")||(Edit7->Text=="")||(Edit8->Text=="")||(Edit9->Text=="")||
(Edit10->Text=="")||(Edit11->Text=="")||(Edit12->Text=="")||(Edit13->Text=="")||(Edit14->Text=="")||(Edit15->Text=="")||(Edit16->Text=="")||(Edit17->Text=="")||(Edit18->Text=="") )
{
ShowMessage("Faltan ingresar datos");
}
else
{
//------------------------Variables adquieren valor ingresado
x1=Edit1->Text.ToDouble();
x2=Edit2->Text.ToDouble();
x3=Edit3->Text.ToDouble();
y1=Edit4->Text.ToDouble();
y2=Edit5->Text.ToDouble();
y3=Edit6->Text.ToDouble();
z1=Edit7->Text.ToDouble();
z2=Edit8->Text.ToDouble();
z3=Edit9->Text.ToDouble();

a1=Edit10->Text.ToDouble();
a2=Edit11->Text.ToDouble();
a3=Edit12->Text.ToDouble();
b1=Edit13->Text.ToDouble();
b2=Edit14->Text.ToDouble();
b3=Edit15->Text.ToDouble();
c1=Edit16->Text.ToDouble();
c2=Edit17->Text.ToDouble();
c3=Edit18->Text.ToDouble();

r1=x1-a1;
r2=x2-a2;
r3=x3-a3;
r4=y1-b1;
r5=y2-b2;
r6=y3-b3;
r7=z1-c1;
r8=z2-c2;
r9=z3-c3;

Edit19->Text=r1;
Edit20->Text=r2;
Edit21->Text=r3;
Edit22->Text=r4;
Edit23->Text=r5;
Edit24->Text=r6;
Edit25->Text=r7;
Edit26->Text=r8;
Edit27->Text=r9;

Edit28->Text="("+FloatToStr(x1)+"-"+FloatToStr(a1)+")";
Edit29->Text="("+FloatToStr(x2)+"-"+FloatToStr(a2)+")";
Edit30->Text="("+FloatToStr(x3)+"-"+FloatToStr(a3)+")";
Edit31->Text="("+FloatToStr(y1)+"-"+FloatToStr(b1)+")";
Edit32->Text="("+FloatToStr(y2)+"-"+FloatToStr(b2)+")";
Edit33->Text="("+FloatToStr(y3)+"-"+FloatToStr(b3)+")";
Edit34->Text="("+FloatToStr(z1)+"-"+FloatToStr(c1)+")";
Edit35->Text="("+FloatToStr(z2)+"-"+FloatToStr(c2)+")";
Edit36->Text="("+FloatToStr(z3)+"-"+FloatToStr(c3)+")";
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
if ( (Edit1->Text=="")||(Edit2->Text=="")||(Edit3->Text=="")||(Edit4->Text=="")||(Edit5->Text=="")||(Edit6->Text=="")||(Edit7->Text=="")||(Edit8->Text=="")||(Edit9->Text=="")||
(Edit10->Text=="")||(Edit11->Text=="")||(Edit12->Text=="")||(Edit13->Text=="")||(Edit14->Text=="")||(Edit15->Text=="")||(Edit16->Text=="")||(Edit17->Text=="")||(Edit18->Text=="") )
{
ShowMessage("Faltan ingresar datos");
}
else
{
//------------------------Variables adquieren valor ingresado
x1=Edit1->Text.ToDouble();
x2=Edit2->Text.ToDouble();
x3=Edit3->Text.ToDouble();
y1=Edit4->Text.ToDouble();
y2=Edit5->Text.ToDouble();
y3=Edit6->Text.ToDouble();
z1=Edit7->Text.ToDouble();
z2=Edit8->Text.ToDouble();
z3=Edit9->Text.ToDouble();

a1=Edit10->Text.ToDouble();
a2=Edit11->Text.ToDouble();
a3=Edit12->Text.ToDouble();
b1=Edit13->Text.ToDouble();
b2=Edit14->Text.ToDouble();
b3=Edit15->Text.ToDouble();
c1=Edit16->Text.ToDouble();
c2=Edit17->Text.ToDouble();
c3=Edit18->Text.ToDouble();

//---Multiplicacion de matrices.
r1=(x1*a1)+(x2*b1)+(x3*c1);     //Obtener el valor de la primer casilla
r2=(x1*a2)+(x2*b2)+(x3*c2);     //Obtener el valor de la segunda casilla
r3=(x1*a3)+(x2*b3)+(x3*c3);     //Obtener el valor de la tercera casilla

r4=(y1*a1)+(y2*b1)+(y3*c1);     //Obtener el valor de la cuarta casilla
r5=(y1*a2)+(y2*b2)+(y3*c2);     //Obtener el valor de la quinta casilla
r6=(y1*a3)+(y2*b3)+(y3*c3);     //Obtener el valor de la sexta casilla

r7=(z1*a1)+(z2*b1)+(z3*c1);     //Obtener el valor de la septima casilla
r8=(z1*a2)+(z2*b2)+(z3*c2);     //Obtener el valor de la octava casilla
r9=(z1*a3)+(z2*b3)+(z3*c3);     //Obtener el valor de la novena casilla
//--------------Imprime los valores resultantes de la matriz
Edit19->Text=r1;
Edit20->Text=r2;
Edit21->Text=r3;
Edit22->Text=r4;
Edit23->Text=r5;
Edit24->Text=r6;
Edit25->Text=r7;
Edit26->Text=r8;
Edit27->Text=r9;
//--------------Ingresar los valores a la solución
Edit28->Text="("+FloatToStr(x1)+"*"+FloatToStr(a1)+")"+"+"+"("+FloatToStr(x2)+"*"+FloatToStr(b1)+")"+"+"+"("+FloatToStr(x3)+"*"+FloatToStr(c1)+")";
Edit29->Text="("+FloatToStr(x1)+"*"+FloatToStr(a2)+")"+"+"+"("+FloatToStr(x2)+"*"+FloatToStr(b2)+")"+"+"+"("+FloatToStr(x3)+"*"+FloatToStr(c2)+")";
Edit30->Text="("+FloatToStr(x1)+"*"+FloatToStr(a3)+")"+"+"+"("+FloatToStr(x2)+"*"+FloatToStr(b3)+")"+"+"+"("+FloatToStr(x3)+"*"+FloatToStr(c3)+")";
Edit31->Text="("+FloatToStr(y1)+"*"+FloatToStr(a1)+")"+"+"+"("+FloatToStr(y2)+"*"+FloatToStr(b1)+")"+"+"+"("+FloatToStr(y3)+"*"+FloatToStr(c1)+")";
Edit32->Text="("+FloatToStr(y1)+"*"+FloatToStr(a2)+")"+"+"+"("+FloatToStr(y2)+"*"+FloatToStr(b2)+")"+"+"+"("+FloatToStr(y3)+"*"+FloatToStr(c2)+")";
Edit33->Text="("+FloatToStr(y1)+"*"+FloatToStr(a3)+")"+"+"+"("+FloatToStr(y2)+"*"+FloatToStr(b3)+")"+"+"+"("+FloatToStr(y3)+"*"+FloatToStr(c3)+")";
Edit34->Text="("+FloatToStr(z1)+"*"+FloatToStr(a1)+")"+"+"+"("+FloatToStr(z2)+"*"+FloatToStr(b1)+")"+"+"+"("+FloatToStr(z3)+"*"+FloatToStr(c1)+")";
Edit35->Text="("+FloatToStr(z1)+"*"+FloatToStr(a2)+")"+"+"+"("+FloatToStr(z2)+"*"+FloatToStr(b2)+")"+"+"+"("+FloatToStr(z3)+"*"+FloatToStr(c2)+")";
Edit36->Text="("+FloatToStr(z1)+"*"+FloatToStr(a3)+")"+"+"+"("+FloatToStr(z2)+"*"+FloatToStr(b3)+")"+"+"+"("+FloatToStr(z3)+"*"+FloatToStr(c3)+")";
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
//-------------Limpiar las casillas
Edit1->Text="";
Edit2->Text="";
Edit3->Text="";
Edit4->Text="";
Edit5->Text="";
Edit6->Text="";
Edit7->Text="";
Edit8->Text="";
Edit9->Text="";
Edit10->Text="";
Edit11->Text="";
Edit12->Text="";
Edit13->Text="";
Edit14->Text="";
Edit15->Text="";
Edit16->Text="";
Edit17->Text="";
Edit18->Text="";
Edit19->Text="";
Edit20->Text="";
Edit21->Text="";
Edit22->Text="";
Edit23->Text="";
Edit24->Text="";
Edit25->Text="";
Edit26->Text="";
Edit27->Text="";
Edit28->Text="";
Edit29->Text="";
Edit30->Text="";
Edit31->Text="";
Edit32->Text="";
Edit33->Text="";
Edit34->Text="";
Edit35->Text="";
Edit36->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Salir1Click(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Limpiar1Click(TObject *Sender)
{
Edit1->Text="";
Edit2->Text="";
Edit3->Text="";
Edit4->Text="";
Edit5->Text="";
Edit6->Text="";
Edit7->Text="";
Edit8->Text="";
Edit9->Text="";
Edit10->Text="";
Edit11->Text="";
Edit12->Text="";
Edit13->Text="";
Edit14->Text="";
Edit15->Text="";
Edit16->Text="";
Edit17->Text="";
Edit18->Text="";
Edit19->Text="";
Edit20->Text="";
Edit21->Text="";
Edit22->Text="";
Edit23->Text="";
Edit24->Text="";
Edit25->Text="";
Edit26->Text="";
Edit27->Text="";
Edit28->Text="";
Edit29->Text="";
Edit30->Text="";
Edit31->Text="";
Edit32->Text="";
Edit33->Text="";
Edit34->Text="";
Edit35->Text="";
Edit36->Text="";
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Sumar1Click(TObject *Sender)
{
if ( (Edit1->Text=="")||(Edit2->Text=="")||(Edit3->Text=="")||(Edit4->Text=="")||(Edit5->Text=="")||(Edit6->Text=="")||(Edit7->Text=="")||(Edit8->Text=="")||(Edit9->Text=="")||
(Edit10->Text=="")||(Edit11->Text=="")||(Edit12->Text=="")||(Edit13->Text=="")||(Edit14->Text=="")||(Edit15->Text=="")||(Edit16->Text=="")||(Edit17->Text=="")||(Edit18->Text=="") )
{
ShowMessage("Faltan ingresar datos");
}
else
{
x1=Edit1->Text.ToDouble();
x2=Edit2->Text.ToDouble();
x3=Edit3->Text.ToDouble();
y1=Edit4->Text.ToDouble();
y2=Edit5->Text.ToDouble();
y3=Edit6->Text.ToDouble();
z1=Edit7->Text.ToDouble();
z2=Edit8->Text.ToDouble();
z3=Edit9->Text.ToDouble();

a1=Edit10->Text.ToDouble();
a2=Edit11->Text.ToDouble();
a3=Edit12->Text.ToDouble();
b1=Edit13->Text.ToDouble();
b2=Edit14->Text.ToDouble();
b3=Edit15->Text.ToDouble();
c1=Edit16->Text.ToDouble();
c2=Edit17->Text.ToDouble();
c3=Edit18->Text.ToDouble();

r1=x1+a1;
r2=x2+a2;
r3=x3+a3;
r4=y1+b1;
r5=y2+b2;
r6=y3+b3;
r7=z1+c1;
r8=z2+c2;
r9=z3+c3;

Edit19->Text=r1;
Edit20->Text=r2;
Edit21->Text=r3;
Edit22->Text=r4;
Edit23->Text=r5;
Edit24->Text=r6;
Edit25->Text=r7;
Edit26->Text=r8;
Edit27->Text=r9;

Edit28->Text="("+FloatToStr(x1)+"+"+FloatToStr(a1)+")";
Edit29->Text="("+FloatToStr(x2)+"+"+FloatToStr(a2)+")";
Edit30->Text="("+FloatToStr(x3)+"+"+FloatToStr(a3)+")";
Edit31->Text="("+FloatToStr(y1)+"+"+FloatToStr(b1)+")";
Edit32->Text="("+FloatToStr(y2)+"+"+FloatToStr(b2)+")";
Edit33->Text="("+FloatToStr(y3)+"+"+FloatToStr(b3)+")";
Edit34->Text="("+FloatToStr(z1)+"+"+FloatToStr(c1)+")";
Edit35->Text="("+FloatToStr(z2)+"+"+FloatToStr(c2)+")";
Edit36->Text="("+FloatToStr(z3)+"+"+FloatToStr(c3)+")";
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Restar1Click(TObject *Sender)
{
if ( (Edit1->Text=="")||(Edit2->Text=="")||(Edit3->Text=="")||(Edit4->Text=="")||(Edit5->Text=="")||(Edit6->Text=="")||(Edit7->Text=="")||(Edit8->Text=="")||(Edit9->Text=="")||
(Edit10->Text=="")||(Edit11->Text=="")||(Edit12->Text=="")||(Edit13->Text=="")||(Edit14->Text=="")||(Edit15->Text=="")||(Edit16->Text=="")||(Edit17->Text=="")||(Edit18->Text=="") )
{
ShowMessage("Faltan ingresar datos");
}
else
{
x1=Edit1->Text.ToDouble();
x2=Edit2->Text.ToDouble();
x3=Edit3->Text.ToDouble();
y1=Edit4->Text.ToDouble();
y2=Edit5->Text.ToDouble();
y3=Edit6->Text.ToDouble();
z1=Edit7->Text.ToDouble();
z2=Edit8->Text.ToDouble();
z3=Edit9->Text.ToDouble();

a1=Edit10->Text.ToDouble();
a2=Edit11->Text.ToDouble();
a3=Edit12->Text.ToDouble();
b1=Edit13->Text.ToDouble();
b2=Edit14->Text.ToDouble();
b3=Edit15->Text.ToDouble();
c1=Edit16->Text.ToDouble();
c2=Edit17->Text.ToDouble();
c3=Edit18->Text.ToDouble();

r1=x1-a1;
r2=x2-a2;
r3=x3-a3;
r4=y1-b1;
r5=y2-b2;
r6=y3-b3;
r7=z1-c1;
r8=z2-c2;
r9=z3-c3;

Edit19->Text=r1;
Edit20->Text=r2;
Edit21->Text=r3;
Edit22->Text=r4;
Edit23->Text=r5;
Edit24->Text=r6;
Edit25->Text=r7;
Edit26->Text=r8;
Edit27->Text=r9;

Edit28->Text="("+FloatToStr(x1)+"-"+FloatToStr(a1)+")";
Edit29->Text="("+FloatToStr(x2)+"-"+FloatToStr(a2)+")";
Edit30->Text="("+FloatToStr(x3)+"-"+FloatToStr(a3)+")";
Edit31->Text="("+FloatToStr(y1)+"-"+FloatToStr(b1)+")";
Edit32->Text="("+FloatToStr(y2)+"-"+FloatToStr(b2)+")";
Edit33->Text="("+FloatToStr(y3)+"-"+FloatToStr(b3)+")";
Edit34->Text="("+FloatToStr(z1)+"-"+FloatToStr(c1)+")";
Edit35->Text="("+FloatToStr(z2)+"-"+FloatToStr(c2)+")";
Edit36->Text="("+FloatToStr(z3)+"-"+FloatToStr(c3)+")";        
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Multiplicar1Click(TObject *Sender)
{
if ( (Edit1->Text=="")||(Edit2->Text=="")||(Edit3->Text=="")||(Edit4->Text=="")||(Edit5->Text=="")||(Edit6->Text=="")||(Edit7->Text=="")||(Edit8->Text=="")||(Edit9->Text=="")||
(Edit10->Text=="")||(Edit11->Text=="")||(Edit12->Text=="")||(Edit13->Text=="")||(Edit14->Text=="")||(Edit15->Text=="")||(Edit16->Text=="")||(Edit17->Text=="")||(Edit18->Text=="") )
{
ShowMessage("Faltan ingresar datos");
}
else
{
x1=Edit1->Text.ToDouble();
x2=Edit2->Text.ToDouble();
x3=Edit3->Text.ToDouble();
y1=Edit4->Text.ToDouble();
y2=Edit5->Text.ToDouble();
y3=Edit6->Text.ToDouble();
z1=Edit7->Text.ToDouble();
z2=Edit8->Text.ToDouble();
z3=Edit9->Text.ToDouble();

a1=Edit10->Text.ToDouble();
a2=Edit11->Text.ToDouble();
a3=Edit12->Text.ToDouble();
b1=Edit13->Text.ToDouble();
b2=Edit14->Text.ToDouble();
b3=Edit15->Text.ToDouble();
c1=Edit16->Text.ToDouble();
c2=Edit17->Text.ToDouble();
c3=Edit18->Text.ToDouble();

//---Multiplicacion de matrices.
r1=(x1*a1)+(x2*b1)+(x3*c1);     //Obtener el valor de la primer casilla
r2=(x1*a2)+(x2*b2)+(x3*c2);     //Obtener el valor de la segunda casilla
r3=(x1*a3)+(x2*b3)+(x3*c3);     //Obtener el valor de la tercera casilla

r4=(y1*a1)+(y2*b1)+(y3*c1);     //Obtener el valor de la cuarta casilla
r5=(y1*a2)+(y2*b2)+(y3*c2);     //Obtener el valor de la quinta casilla
r6=(y1*a3)+(y2*b3)+(y3*c3);     //Obtener el valor de la sexta casilla

r7=(z1*a1)+(z2*b1)+(z3*c1);     //Obtener el valor de la septima casilla
r8=(z1*a2)+(z2*b2)+(z3*c2);     //Obtener el valor de la octava casilla
r9=(z1*a3)+(z2*b3)+(z3*c3);     //Obtener el valor de la novena casilla

Edit19->Text=r1;
Edit20->Text=r2;
Edit21->Text=r3;
Edit22->Text=r4;
Edit23->Text=r5;
Edit24->Text=r6;
Edit25->Text=r7;
Edit26->Text=r8;
Edit27->Text=r9;

Edit28->Text="("+FloatToStr(x1)+"*"+FloatToStr(a1)+")"+"+"+"("+FloatToStr(x2)+"*"+FloatToStr(b1)+")"+"+"+"("+FloatToStr(x3)+"*"+FloatToStr(c1)+")";
Edit29->Text="("+FloatToStr(x1)+"*"+FloatToStr(a2)+")"+"+"+"("+FloatToStr(x2)+"*"+FloatToStr(b2)+")"+"+"+"("+FloatToStr(x3)+"*"+FloatToStr(c2)+")";
Edit30->Text="("+FloatToStr(x1)+"*"+FloatToStr(a3)+")"+"+"+"("+FloatToStr(x2)+"*"+FloatToStr(b3)+")"+"+"+"("+FloatToStr(x3)+"*"+FloatToStr(c3)+")";
Edit31->Text="("+FloatToStr(y1)+"*"+FloatToStr(a1)+")"+"+"+"("+FloatToStr(y2)+"*"+FloatToStr(b1)+")"+"+"+"("+FloatToStr(y3)+"*"+FloatToStr(c1)+")";
Edit32->Text="("+FloatToStr(y1)+"*"+FloatToStr(a2)+")"+"+"+"("+FloatToStr(y2)+"*"+FloatToStr(b2)+")"+"+"+"("+FloatToStr(y3)+"*"+FloatToStr(c2)+")";
Edit33->Text="("+FloatToStr(y1)+"*"+FloatToStr(a3)+")"+"+"+"("+FloatToStr(y2)+"*"+FloatToStr(b3)+")"+"+"+"("+FloatToStr(y3)+"*"+FloatToStr(c3)+")";
Edit34->Text="("+FloatToStr(z1)+"*"+FloatToStr(a1)+")"+"+"+"("+FloatToStr(z2)+"*"+FloatToStr(b1)+")"+"+"+"("+FloatToStr(z3)+"*"+FloatToStr(c1)+")";
Edit35->Text="("+FloatToStr(z1)+"*"+FloatToStr(a2)+")"+"+"+"("+FloatToStr(z2)+"*"+FloatToStr(b2)+")"+"+"+"("+FloatToStr(z3)+"*"+FloatToStr(c2)+")";
Edit36->Text="("+FloatToStr(z1)+"*"+FloatToStr(a3)+")"+"+"+"("+FloatToStr(z2)+"*"+FloatToStr(b3)+")"+"+"+"("+FloatToStr(z3)+"*"+FloatToStr(c3)+")";
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Acercade1Click(TObject *Sender)
{
ShowMessage("Programa desarrollado por G.A.B.I. Soft");        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Comofunciona1Click(TObject *Sender)
{
ShowMessage("Ingresa los valores a las casillas de las dos matrices que desees sumar, restar y/o multiplicar");        
}
//---------------------------------------------------------------------------

