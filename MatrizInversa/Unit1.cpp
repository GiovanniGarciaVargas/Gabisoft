//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
float x1,x2,x3,y1,y2,y3,z1,z2,z3;
float a1=1,b2=1,c3=1;
float a2=0,a3=0,b1=0,b3=0,c1=0,c2=0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{
if ( (Edit1->Text=="")||(Edit2->Text=="")||(Edit3->Text=="")||(Edit4->Text=="")||
(Edit5->Text=="")||(Edit6->Text=="")||(Edit7->Text=="")||(Edit8->Text=="")||(Edit9->Text=="") )
{
ShowMessage("Faltan datos por ingresar");
}
else
{
//---------------Declaracion de variables.
x1=Edit1->Text.ToDouble();
x2=Edit2->Text.ToDouble();
x3=Edit3->Text.ToDouble();

y1=Edit4->Text.ToDouble();
y2=Edit5->Text.ToDouble();
y3=Edit6->Text.ToDouble();

z1=Edit7->Text.ToDouble();
z2=Edit8->Text.ToDouble();
z3=Edit9->Text.ToDouble();

Edit28->Text=x1;
Edit29->Text=x2;
Edit30->Text=x3;
Edit31->Text=y1;
Edit32->Text=y2;
Edit33->Text=y3;
Edit34->Text=z1;
Edit35->Text=z2;
Edit36->Text=z3;

Edit37->Text=a1;
Edit38->Text=a2;
Edit39->Text=a3;
Edit40->Text=b1;
Edit41->Text=b2;
Edit42->Text=b3;
Edit43->Text=c1;
Edit44->Text=c2;
Edit45->Text=c3;
//---------------Obtener el primer 1 de la matriz.
a1=a1 * (1/x1);
a2=a2 * (1/x1);
a3=a3 * (1/x1);

x3=x3 * (1/x1);
x2=x2 * (1/x1);
Label5->Caption=x1;
x1=x1 * (1/x1);

Edit46->Text=x1;
Edit47->Text=x2;
Edit48->Text=x3;
Edit49->Text=y1;
Edit50->Text=y2;
Edit51->Text=y3;
Edit52->Text=z1;
Edit53->Text=z2;
Edit54->Text=z3;

Edit55->Text=a1;
Edit56->Text=a2;
Edit57->Text=a3;
Edit58->Text=b1;
Edit59->Text=b2;
Edit60->Text=b3;
Edit61->Text=c1;
Edit62->Text=c2;
Edit63->Text=c3;
//--------------Convertir a 0 los numeros debajo del 1.
b3=((-y1)*a3)+ b3;
b2=((-y1)*a2)+ b2;
b1=((-y1)*a1)+ b1;
y3=((-y1)*x3)+ y3;
y2=((-y1)*x2)+ y2;
Label6->Caption=y1;
y1=((-y1)*x1)+ y1;

c3=((-z1)*a3)+ c3;
c2=((-z1)*a2)+ c2;
c1=((-z1)*a1)+ c1;
z3=((-z1)*x3)+ z3;
z2=((-z1)*x2)+ z2;
Label9->Caption=z1;
z1=((-z1)*x1)+ z1;

Edit64->Text=x1;
Edit65->Text=x2;
Edit66->Text=x3;
Edit67->Text=y1;
Edit68->Text=y2;
Edit69->Text=y3;
Edit70->Text=z1;
Edit71->Text=z2;
Edit72->Text=z3;

Edit73->Text=a1;
Edit74->Text=a2;
Edit75->Text=a3;
Edit76->Text=b1;
Edit77->Text=b2;
Edit78->Text=b3;
Edit79->Text=c1;
Edit80->Text=c2;
Edit81->Text=c3;
//--------------Obtener el segundo 1 de la matriz.
b1=b1 * (1/y2);
b2=b2 * (1/y2);
b3=b3 * (1/y2);

y3=y3 * (1/y2);
y1=y1 * (1/y2);
Label11->Caption=y2;
y2=y2 * (1/y2);

Edit82->Text=x1;
Edit83->Text=x2;
Edit84->Text=x3;
Edit85->Text=y1;
Edit86->Text=y2;
Edit87->Text=y3;
Edit88->Text=z1;
Edit89->Text=z2;
Edit90->Text=z3;

Edit91->Text=a1;
Edit92->Text=a2;
Edit93->Text=a3;
Edit94->Text=b1;
Edit95->Text=b2;
Edit96->Text=b3;
Edit97->Text=c1;
Edit98->Text=c2;
Edit99->Text=c3;
//--------------Convertir a 0 los numeros abajo y arriba del 1.
a1=((-x2)*b1)+ a1;
a2=((-x2)*b2)+ a2;
a3=((-x2)*b3)+ a3;
x3=((-x2)*y3)+ x3;
x1=((-x2)*y1)+ x1;
Label13->Caption=x2;
x2=((-x2)*y2)+ x2;

c1=((-z2)*b1)+ c1;
c2=((-z2)*b2)+ c2;
c3=((-z2)*b3)+ c3;
z3=((-z2)*y3)+ z3;
z1=((-z2)*y1)+ z1;
Label15->Caption=z2;
z2=((-z2)*y2)+ z2;

Edit100->Text=x1;
Edit101->Text=x2;
Edit102->Text=x3;
Edit103->Text=y1;
Edit104->Text=y2;
Edit105->Text=y3;
Edit106->Text=z1;
Edit107->Text=z2;
Edit108->Text=z3;

Edit109->Text=a1;
Edit110->Text=a2;
Edit111->Text=a3;
Edit112->Text=b1;
Edit113->Text=b2;
Edit114->Text=b3;
Edit115->Text=c1;
Edit116->Text=c2;
Edit117->Text=c3;
//--------------Obtener el tercer 1 de la matriz.
if(z3==0)
{
ShowMessage("Matriz sin solucion");
}
else
{
c1=c1 * (1/z3);
c2=c2 * (1/z3);
c3=c3 * (1/z3);

z2=z2 * (1/z3);
z1=z1 * (1/z3);
Label17->Caption=z3;
z3=z3 * (1/z3);

Edit118->Text=x1;
Edit119->Text=x2;
Edit120->Text=x3;
Edit121->Text=y1;
Edit122->Text=y2;
Edit123->Text=y3;
Edit124->Text=z1;
Edit125->Text=z2;
Edit126->Text=z3;

Edit127->Text=a1;
Edit128->Text=a2;
Edit129->Text=a3;
Edit130->Text=b1;
Edit131->Text=b2;
Edit132->Text=b3;
Edit133->Text=c1;
Edit134->Text=c2;
Edit135->Text=c3;
}
//--------------Convertir a 0 los numeros arriba del 1.
a1=((-x3)*c1)+ a1;
a2=((-x3)*c2)+ a2;
a3=((-x3)*c3)+ a3;
x2=((-x3)*z2)+ x2;
x1=((-x3)*z1)+ x1;
Label20->Caption=x3;
x3=((-x3)*z3)+ x3;

b1=((-y3)*c1)+ b1;
b2=((-y3)*c2)+ b2;
b3=((-y3)*c3)+ b3;
y2=((-y3)*z2)+ y2;
y1=((-y3)*z1)+ y1;
Label21->Caption=y3;
y3=((-y3)*z3)+ y3;

Edit136->Text=x1;
Edit137->Text=x2;
Edit138->Text=x3;
Edit139->Text=y1;
Edit140->Text=y2;
Edit141->Text=y3;
Edit142->Text=z1;
Edit143->Text=z2;
Edit144->Text=z3;

Edit145->Text=a1;
Edit146->Text=a2;
Edit147->Text=a3;
Edit148->Text=b1;
Edit149->Text=b2;
Edit150->Text=b3;
Edit151->Text=c1;
Edit152->Text=c2;
Edit153->Text=c3;
//--------------Imprimir resultados.
Edit10->Text=x1;
Edit11->Text=x2;
Edit12->Text=x3;

Edit13->Text=y1;
Edit14->Text=y2;
Edit15->Text=y3;

Edit16->Text=z1;
Edit17->Text=z2;
Edit18->Text=z3;

Edit19->Text=a1;
Edit20->Text=a2;
Edit21->Text=a3;

Edit22->Text=b1;
Edit23->Text=b2;
Edit24->Text=b3;

Edit25->Text=c1;
Edit26->Text=c2;
Edit27->Text=c3;

Button1->Enabled=true;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Exit1Click(TObject *Sender)
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
Button1->Enabled=false;
Panel1->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
Panel1->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
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
Button1->Enabled=false;
Panel1->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Salir1Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Comofunciona1Click(TObject *Sender)
{
ShowMessage("Ingresar los datos de una matriz 3x3 que gustes resolver, a continuación darle al boton de resolver.");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Acercade1Click(TObject *Sender)
{
ShowMessage("Programa de solución de matrices inversas por G.A.B.I. Soft");
}
//---------------------------------------------------------------------------

