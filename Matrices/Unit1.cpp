//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
float x1,x2,x3,y1,y2,y3,z1,z2,z3,x,y,z;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
//---------------Valores de la matriz.
if((Edit1->Text=="")||(Edit2->Text=="")||(Edit3->Text=="")||(Edit4->Text=="")||(Edit5->Text=="")||(Edit6->Text=="")||(Edit7->Text=="")||(Edit8->Text=="")||(Edit9->Text=="")||(Edit10->Text=="")||(Edit11->Text=="")||(Edit12->Text==""))
{
ShowMessage("Faltan valores a ingresar");
}
else
{
Panel1->Visible=true;

x1=Edit1->Text.ToDouble();
x2=Edit2->Text.ToDouble();
x3=Edit3->Text.ToDouble();
y1=Edit4->Text.ToDouble();
y2=Edit5->Text.ToDouble();
y3=Edit6->Text.ToDouble();
z1=Edit7->Text.ToDouble();
z2=Edit8->Text.ToDouble();
z3=Edit9->Text.ToDouble();
x=Edit10->Text.ToDouble();
y=Edit11->Text.ToDouble();
z=Edit12->Text.ToDouble();

Edit25->Text=x1;
Edit26->Text=x2;
Edit27->Text=x3;
Edit28->Text=x;
Edit29->Text=y1;
Edit30->Text=y2;
Edit31->Text=y3;
Edit32->Text=y;
Edit33->Text=z1;
Edit34->Text=z2;
Edit35->Text=z3;
Edit36->Text=z;
//---------------Obtener el primer 1 de la matriz.
Label4->Caption=x1;

x=x * (1/x1);
x3=x3 * (1/x1);
x2=x2 * (1/x1);
x1=x1 * (1/x1);

Edit37->Text=x1;
Edit38->Text=x2;
Edit39->Text=x3;
Edit40->Text=x;
Edit41->Text=y1;
Edit42->Text=y2;
Edit43->Text=y3;
Edit44->Text=y;
Edit45->Text=z1;
Edit46->Text=z2;
Edit47->Text=z3;
Edit48->Text=z;
//--------------Convertir a 0 los numeros debajo del 1.
y=((-y1)*x)+ y;
y3=((-y1)*x3)+ y3;
y2=((-y1)*x2)+ y2;
Label6->Caption=y1;
y1=((-y1)*x1)+ y1;

z=((-z1)*x)+ z;
z3=((-z1)*x3)+ z3;
z2=((-z1)*x2)+ z2;
Label8->Caption=z1;
z1=((-z1)*x1)+ z1;

Edit49->Text=x1;
Edit50->Text=x2;
Edit51->Text=x3;
Edit52->Text=x;
Edit53->Text=y1;
Edit54->Text=y2;
Edit55->Text=y3;
Edit56->Text=y;
Edit57->Text=z1;
Edit58->Text=z2;
Edit59->Text=z3;
Edit60->Text=z;
//--------------Obtener el segundo 1 de la matriz.
Label10->Caption=y2;
y=y * (1/y2);
y3=y3 * (1/y2);
y1=y1 * (1/y2);
y2=y2 * (1/y2);

Edit61->Text=x1;
Edit62->Text=x2;
Edit63->Text=x3;
Edit64->Text=x;
Edit65->Text=y1;
Edit66->Text=y2;
Edit67->Text=y3;
Edit68->Text=y;
Edit69->Text=z1;
Edit70->Text=z2;
Edit71->Text=z3;
Edit72->Text=z;
//--------------Convertir a 0 los numeros abajo y arriba del 1.
x=((-x2)*(y))+ x;
x3=((-x2)*y3)+ x3;
x1=((-x2)*y1)+ x1;
Label12->Caption=x2;
x2=((-x2)*y2)+ x2;

z=((-z2)*(y))+ z;
z3=((-z2)*y3)+ z3;
z1=((-z2)*y1)+ z1;
Label14->Caption=z2;
z2=((-z2)*y2)+ z2;

Edit73->Text=x1;
Edit74->Text=x2;
Edit75->Text=x3;
Edit76->Text=x;
Edit77->Text=y1;
Edit78->Text=y2;
Edit79->Text=y3;
Edit80->Text=y;
Edit81->Text=z1;
Edit82->Text=z2;
Edit83->Text=z3;
Edit84->Text=z;
//--------------Obtener el tercer 1 de la matriz.
Label16->Caption=z3;
if(z3==0)
{
z=0;
z2=0;
z1=0;
z3=0;
}
else
{
z=z * (1/z3);
z2=z2 * (1/z3);
z1=z1 * (1/z3);
z3=z3 * (1/z3);
}

Edit85->Text=x1;
Edit86->Text=x2;
Edit87->Text=x3;
Edit88->Text=x;
Edit89->Text=y1;
Edit90->Text=y2;
Edit91->Text=y3;
Edit92->Text=y;
Edit93->Text=z1;
Edit94->Text=z2;
Edit95->Text=z3;
Edit96->Text=z;
//--------------Convertir a 0 los numeros arriba del 1.
x=((-x3)*(z))+ x;
x2=((-x3)*z2)+ x2;
x1=((-x3)*z1)+ x1;
Label18->Caption=x3;
x3=((-x3)*z3)+ x3;

y=((-y3)*(z))+ y;
y2=((-y3)*z2)+ y2;
y1=((-y3)*z1)+ y1;
Label20->Caption=y3;
y3=((-y3)*z3)+ y3;

Edit97->Text=x1;
Edit98->Text=x2;
Edit99->Text=x3;
Edit100->Text=x;
Edit101->Text=y1;
Edit102->Text=y2;
Edit103->Text=y3;
Edit104->Text=y;
Edit105->Text=z1;
Edit106->Text=z2;
Edit107->Text=z3;
Edit108->Text=z;
//--------------Resultados de la matriz.
Edit13->Text=x1;
Edit18->Text=x2;
Edit19->Text=x3;
Edit14->Text=y1;
Edit17->Text=y2;
Edit20->Text=y3;
Edit15->Text=z1;
Edit16->Text=z2;
Edit21->Text=z3;
Edit24->Text=x;
Edit23->Text=y;
Edit22->Text=z;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
//--------------Limpiar la matriz.
Panel1->Visible=false;

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
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Clear1Click(TObject *Sender)
{
//--------------Limpiar la matriz.
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
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Exit1Click(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Aboutto1Click(TObject *Sender)
{
ShowMessage("Programa reduccion de matriz por metodo Gauss-Jordan por G.A.B.I. Soft");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Comofunciona1Click(TObject *Sender)
{
ShowMessage("Ingresa los valores de un sistema de ecuaciones lineales y a continuación darle al boton de resolver.");        
}
//---------------------------------------------------------------------------

