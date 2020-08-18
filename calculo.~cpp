//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "calculo.h"
#include "presentacion.h"
#include "math.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
int ide;
float rx1,rx2,ry1,ry2,m,yr;
float rb1,rb2,rb3,rb4,rb5;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Image6Click(TObject *Sender)
{
Form1->Show();
Close();
}
//---------------------------------------------------------------------------


void __fastcall TForm4::FormCreate(TObject *Sender)
{
Image7->Canvas->Brush->Color=clWhite;
Image7->Canvas->FillRect(Image7->Canvas->ClipRect);
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button1Click(TObject *Sender)
{
//-----------------------------------Variables de la gráfica----------------
float dx,fy;   //---coordenadas X,Y
int iniX,iniY,X,Y;   //---Calculo de coordenadas
int alto=Image7->Height; //---Plano x (500px)
int ancho=Image7->Width; //---Plano y (200px)

int centrox= ancho/2; //---obtener el centro de la grafica X
int centroy= alto/2;  //---obtener el centro de la grafica Y
int xf=20;   //---Escalar X
int yf=18;   //---Escalar Y
int scale= (float)(ancho/2)/xf;

Image7->Canvas->MoveTo(0,centroy);
Image7->Canvas->LineTo(ancho,centroy);

Image7->Canvas->MoveTo(centrox,0);
Image7->Canvas->LineTo(centrox,alto);

for (int x=0;x<=ancho;x+=scale)  //---Dibujar recta de la X
{
   Image7->Canvas->MoveTo(x,centroy-5);
   Image7->Canvas->LineTo(x,centroy+5);
   Image7->Canvas->TextOut(x,centroy-15,-xf+x/scale);
}
for (int y=0;y<=alto;y+=scale)   //---Dibujar recta de la Y
{
   Image7->Canvas->MoveTo(centrox-5,y);
   Image7->Canvas->LineTo(centrox+5,y);
   Image7->Canvas->TextOut(centrox-15,y,+yf-y/scale);
}
//---Dibujar la recta por medio de la función definida
for (dx=-xf;dx<xf;dx=dx+0.01)
{
   if(ide==1)
   {
   fy=sin(dx);
   if (dx==-xf)Image7->Canvas->MoveTo(dx*scale+centrox,-fy*scale+centroy);
   Image7->Canvas->LineTo(dx*scale+centrox,-fy*scale+centroy);
   }

   else if(ide==2)
   {
   fy=cos(dx);
   if (dx==-xf)Image7->Canvas->MoveTo(dx*scale+centrox,-fy*scale+centroy);
   Image7->Canvas->LineTo(dx*scale+centrox,-fy*scale+centroy);
   }

   else if(ide==3)
   {
   fy=tan(dx);
   if (dx==-xf)Image7->Canvas->MoveTo(dx*scale+centrox,-fy*scale+centroy);
   Image7->Canvas->LineTo(dx*scale+centrox,-fy*scale+centroy);
   }

   else if(ide==4)
   {
   fy=pow((5*dx+2),2);
   if (dx==-xf)Image7->Canvas->MoveTo(dx*scale+centrox,-fy*scale+centroy);
   Image7->Canvas->LineTo(dx*scale+centrox,-fy*scale+centroy);
   }

   else if(ide==5)
   {
   fy=((10*dx-2)*(6*dx+3));
   if (dx==-xf)Image7->Canvas->MoveTo(dx*scale+centrox,-fy*scale+centroy);
   Image7->Canvas->LineTo(dx*scale+centrox,-fy*scale+centroy);
   }

   else if(ide==6)
   {
   fy=5;
   if (dx==-xf)Image7->Canvas->MoveTo(dx*scale+centrox,-fy*scale+centroy);
   Image7->Canvas->LineTo(dx*scale+centrox,-fy*scale+centroy);
   }

   else if(ide==7)
   {
   fy=((dx+3)/6);
   if (dx==-xf)Image7->Canvas->MoveTo(dx*scale+centrox,-fy*scale+centroy);
   Image7->Canvas->LineTo(dx*scale+centrox,-fy*scale+centroy);
   }

   else if(ide==8)
   {
   fy=5/dx;
   if (dx==-xf)Image7->Canvas->MoveTo(dx*scale+centrox,-fy*scale+centroy);
   Image7->Canvas->LineTo(dx*scale+centrox,-fy*scale+centroy);
   }
}
//----Colocar limite y derivada de la función definida
if (ide==1)
{
   Memo3->Lines->Add("dy/dx= COS X");
}
else if (ide==2)
{
   Memo3->Lines->Add("dy/dx= -SEN (X)");
}
else if (ide==3)
{
   Memo3->Lines->Add("dy/dx= SEC^2 (X)");
}
else if (ide==4)
{
   Memo3->Lines->Add("dy/dx= 50x+20");
}
else if (ide==5)
{
   Memo3->Lines->Add("dy/dx= 120x+18");
}
else if (ide==6)
{
   Memo3->Lines->Add("dy/dx= 0");
   Memo4->Lines->Add("Lim 5 cuando x->1 = 5");
}
else if (ide==7)
{
   Memo3->Lines->Add("dy/dx= 1/6");
}
else if (ide==8)
{
   Memo3->Lines->Add("dy/dx= -5/x^2");
}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button2Click(TObject *Sender)
{
ide=1;
Button1->Enabled=true;
Memo3->Lines->Add("");
Memo4->Lines->Add("");
Image7->Canvas->Brush->Color=clWhite;
Image7->Canvas->FillRect(Image7->Canvas->ClipRect);
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button3Click(TObject *Sender)
{
ide=2;
Button1->Enabled=true;
Memo3->Lines->Add("");
Memo4->Lines->Add("");
Image7->Canvas->Brush->Color=clWhite;
Image7->Canvas->FillRect(Image7->Canvas->ClipRect);
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button4Click(TObject *Sender)
{
ide=3;
Button1->Enabled=true;
Memo3->Lines->Add("");
Memo4->Lines->Add("");
Image7->Canvas->Brush->Color=clWhite;
Image7->Canvas->FillRect(Image7->Canvas->ClipRect);
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button5Click(TObject *Sender)
{
ide=4;
Button1->Enabled=true;
Memo3->Lines->Add("");
Memo4->Lines->Add("");
Image7->Canvas->Brush->Color=clWhite;
Image7->Canvas->FillRect(Image7->Canvas->ClipRect);
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button6Click(TObject *Sender)
{
ide=5;
Button1->Enabled=true;
Memo3->Lines->Add("");
Memo4->Lines->Add("");
Image7->Canvas->Brush->Color=clWhite;
Image7->Canvas->FillRect(Image7->Canvas->ClipRect);
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button7Click(TObject *Sender)
{
ide=6;
Button1->Enabled=true;
Memo3->Lines->Add("");
Memo4->Lines->Add("");
Image7->Canvas->Brush->Color=clWhite;
Image7->Canvas->FillRect(Image7->Canvas->ClipRect);
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button8Click(TObject *Sender)
{
ide=7;
Button1->Enabled=true;
Memo3->Lines->Add("");
Memo4->Lines->Add("");
Image7->Canvas->Brush->Color=clWhite;
Image7->Canvas->FillRect(Image7->Canvas->ClipRect);
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button9Click(TObject *Sender)
{
ide=8;
Button1->Enabled=true;
Memo3->Lines->Add("");
Memo4->Lines->Add("");
Image7->Canvas->Brush->Color=clWhite;
Image7->Canvas->FillRect(Image7->Canvas->ClipRect);
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Image9Click(TObject *Sender)
{
GroupBox1->Visible=true;
GroupBox2->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Image8Click(TObject *Sender)
{
GroupBox2->Visible=true;
GroupBox1->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button10Click(TObject *Sender)
{
if ( (Edit1->Text=="")||(Edit2->Text=="")||(Edit3->Text=="")||(Edit4->Text=="") )
{
ShowMessage("Faltan datos por ingresar");
}
else
{
//---float rx1,rx2,ry1,ry2,m,yr;
rx1=Edit1->Text.ToDouble();
ry1=Edit2->Text.ToDouble();

rx2=Edit3->Text.ToDouble();
ry2=Edit4->Text.ToDouble();

//---Formula pendiente m=(y2-y1) / (x2-x1)
m=(ry2-ry1) / (rx2-rx1);
Edit5->Text=m;

//---Formula ecuación de la recta y-y1=m(x-x1)
yr=(m*(-rx1))+ry1;
if (yr==yr)
{
Edit6->Text="Y= "+FloatToStr(m)+"x"+"+"+FloatToStr(yr);
}
else if (yr==-yr)
{
Edit6->Text="Y= "+FloatToStr(m)+"x"+FloatToStr(yr);
}
Button11->Enabled=true;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button11Click(TObject *Sender)
{
//----Limpiar gráfica
Image10->Canvas->Brush->Color=clWhite;
Image10->Canvas->FillRect(Image7->Canvas->ClipRect);
//-----------------------------------Variables de la gráfica----------------
float dx,fy;   //---coordenadas X,Y
int iniX,iniY,X,Y;   //---Calculo de coordenadas
int alto=Image10->Height; //---Plano x (500px)
int ancho=Image10->Width; //---Plano y (200px)

int centrox= ancho/2; //---obtener el centro de la grafica X
int centroy= alto/2;  //---obtener el centro de la grafica Y
int xf=20;   //---Escalar X
int yf=18;   //---Escalar Y
int scale= (float)(ancho/2)/xf;

Image10->Canvas->MoveTo(0,centroy);
Image10->Canvas->LineTo(ancho,centroy);

Image10->Canvas->MoveTo(centrox,0);
Image10->Canvas->LineTo(centrox,alto);

for (int x=0;x<=ancho;x+=scale)  //---Dibujar recta de la X
{
   Image10->Canvas->MoveTo(x,centroy-5);
   Image10->Canvas->LineTo(x,centroy+5);
   Image10->Canvas->TextOut(x,centroy-15,-xf+x/scale);
}
for (int y=0;y<=alto;y+=scale)   //---Dibujar recta de la Y
{
   Image10->Canvas->MoveTo(centrox-5,y);
   Image10->Canvas->LineTo(centrox+5,y);
   Image10->Canvas->TextOut(centrox-15,y,+yf-y/scale);
}
//---Dibujar la recta por medio de la función definida
for (dx=-xf;dx<xf;dx=dx+0.01)
{
   fy=(m*dx)-(-yr);
   if (dx==-xf)Image10->Canvas->MoveTo(dx*scale+centrox,-fy*scale+centroy);
   Image10->Canvas->LineTo(dx*scale+centrox,-fy*scale+centroy);
}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button12Click(TObject *Sender)
{
//----Limpiar Edits
Edit1->Text="";
Edit2->Text="";
Edit3->Text="";
Edit4->Text="";
Edit5->Text="";
Edit6->Text="";
//-----Deshabilitar boton Gráficar
Button11->Enabled=false;
//----Limpiar gráfica
Image10->Canvas->Brush->Color=clWhite;
Image10->Canvas->FillRect(Image7->Canvas->ClipRect);
}
//---------------------------------------------------------------------------


void __fastcall TForm4::RadioButton1Click(TObject *Sender)
{
   if(ide==1)
   {
   rb1=RadioButton1->Caption.ToDouble();
   Memo4->Lines->Add("Lim SEN(X) cuando x-> "+FloatToStr(rb1)+" = "+FloatToStr( sin(rb1*3.14159/180)) );
   }
   else if(ide==2)
   {
   rb1=RadioButton1->Caption.ToDouble();
   Memo4->Lines->Add("Lim COS(X) cuando x-> "+FloatToStr(rb1)+" = "+FloatToStr( cos(rb1*3.14159/180)) );
   }
   else if(ide==3)
   {
   rb1=RadioButton1->Caption.ToDouble();
   Memo4->Lines->Add("Lim TAN(X) cuando x-> "+FloatToStr(rb1)+" = "+FloatToStr( tan(rb1*3.14159/180)) );
   }
   else if(ide==4)
   {
   rb1=RadioButton1->Caption.ToDouble();
   Memo4->Lines->Add("Lim (5x+2)^2 cuando x-> "+FloatToStr(rb1)+" = "+FloatToStr( pow((5*rb1)+2,2)) );
   }
   else if(ide==5)
   {
   rb1=RadioButton1->Caption.ToDouble();
   Memo4->Lines->Add("Lim (10x-2)(6x+3) cuando x-> "+FloatToStr(rb1)+" = "+FloatToStr( ((10*rb1)-2)*((6*rb1)+3)) );
   }
   else if(ide==7)
   {
   rb1=RadioButton1->Caption.ToDouble();
   Memo4->Lines->Add("Lim (x+3)/6 cuando x-> "+FloatToStr(rb1)+" = "+FloatToStr( (rb1+3)/6) );
   }
   else if(ide==8)
   {
   rb1=RadioButton1->Caption.ToDouble();
   Memo4->Lines->Add("Lim 5/x cuando x-> "+FloatToStr(rb1)+" = "+FloatToStr( 5/rb1) );
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm4::RadioButton2Click(TObject *Sender)
{
   if (ide==1)
   {
   rb2=RadioButton2->Caption.ToDouble();
   Memo4->Lines->Add("Lim SEN(X) cuando x->"+FloatToStr(rb2)+"="+FloatToStr( sin(rb2*3.14159/180)) );
   }
   else if(ide==2)
   {
   rb2=RadioButton2->Caption.ToDouble();
   Memo4->Lines->Add("Lim COS(X) cuando x-> "+FloatToStr(rb2)+" = "+FloatToStr( cos(rb2*3.14159/180)) );
   }
   else if(ide==3)
   {
   rb2=RadioButton2->Caption.ToDouble();
   Memo4->Lines->Add("Lim TAN(X) cuando x-> "+FloatToStr(rb2)+" = "+FloatToStr( tan(rb2*3.14159/180)) );
   }
   else if(ide==4)
   {
   rb2=RadioButton2->Caption.ToDouble();
   Memo4->Lines->Add("Lim (5x+2)^2 cuando x-> "+FloatToStr(rb2)+" = "+FloatToStr( pow((5*rb2)+2,2)) );
   }
   else if(ide==5)
   {
   rb2=RadioButton2->Caption.ToDouble();
   Memo4->Lines->Add("Lim (10x-2)(6x+3) cuando x-> "+FloatToStr(rb2)+" = "+FloatToStr( ((10*rb2)-2)*((6*rb2)+3)) );
   }
   else if(ide==7)
   {
   rb2=RadioButton2->Caption.ToDouble();
   Memo4->Lines->Add("Lim (x+3)/6 cuando x-> "+FloatToStr(rb2)+" = "+FloatToStr( (rb2+3)/6) );
   }
   else if(ide==8)
   {
   rb2=RadioButton2->Caption.ToDouble();
   Memo4->Lines->Add("Lim 5/x cuando x-> "+FloatToStr(rb2)+" = "+FloatToStr( 5/rb2) );
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm4::RadioButton3Click(TObject *Sender)
{
   if (ide==1)
   {
   rb3=RadioButton3->Caption.ToDouble();
   Memo4->Lines->Add("Lim SEN(X) cuando x->"+FloatToStr(rb3)+"="+FloatToStr( sin(rb3*3.14159/180)) );
   }
   else if(ide==2)
   {
   rb3=RadioButton3->Caption.ToDouble();
   Memo4->Lines->Add("Lim COS(X) cuando x-> "+FloatToStr(rb3)+" = "+FloatToStr( cos(rb3*3.14159/180)) );
   }
   else if(ide==3)
   {
   rb3=RadioButton3->Caption.ToDouble();
   Memo4->Lines->Add("Lim TAN(X) cuando x-> "+FloatToStr(rb3)+" = "+FloatToStr( tan(rb3*3.14159/180)) );
   }
   else if(ide==4)
   {
   rb3=RadioButton3->Caption.ToDouble();
   Memo4->Lines->Add("Lim (5x+2)^2 cuando x-> "+FloatToStr(rb3)+" = "+FloatToStr( pow((5*rb3)+2,2)) );
   }
   else if(ide==5)
   {
   rb3=RadioButton3->Caption.ToDouble();
   Memo4->Lines->Add("Lim (10x-2)(6x+3) cuando x-> "+FloatToStr(rb3)+" = "+FloatToStr( ((10*rb3)-2)*((6*rb3)+3)) );
   }
   else if(ide==7)
   {
   rb3=RadioButton3->Caption.ToDouble();
   Memo4->Lines->Add("Lim (x+3)/6 cuando x-> "+FloatToStr(rb3)+" = "+FloatToStr( (rb3+3)/6) );
   }
   else if(ide==8)
   {
   rb3=RadioButton3->Caption.ToDouble();
   Memo4->Lines->Add("Lim 5/x cuando x-> "+FloatToStr(rb3)+" = "+"Infinito");
   }
}

//---------------------------------------------------------------------------

void __fastcall TForm4::RadioButton4Click(TObject *Sender)
{
   if (ide==1)
   {
   rb4=RadioButton4->Caption.ToDouble();
   Memo4->Lines->Add("Lim SEN(X) cuando x->"+FloatToStr(rb4)+"="+FloatToStr( sin(rb4*3.14159/180)) );
   }
   else if(ide==2)
   {
   rb4=RadioButton4->Caption.ToDouble();
   Memo4->Lines->Add("Lim COS(X) cuando x-> "+FloatToStr(rb4)+" = "+FloatToStr( cos(rb4*3.14159/180)) );
   }
   else if(ide==3)
   {
   rb4=RadioButton4->Caption.ToDouble();
   Memo4->Lines->Add("Lim TAN(X) cuando x-> "+FloatToStr(rb4)+" = "+FloatToStr( tan(rb4*3.14159/180)) );
   }
   else if(ide==4)
   {
   rb4=RadioButton4->Caption.ToDouble();
   Memo4->Lines->Add("Lim (5x+2)^2 cuando x-> "+FloatToStr(rb4)+" = "+FloatToStr( pow((5*rb4)+2,2)) );
   }
   else if(ide==5)
   {
   rb4=RadioButton4->Caption.ToDouble();
   Memo4->Lines->Add("Lim (10x-2)(6x+3) cuando x-> "+FloatToStr(rb4)+" = "+FloatToStr( ((10*rb4)-2)*((6*rb4)+3)) );
   }
   else if(ide==7)
   {
   rb4=RadioButton4->Caption.ToDouble();
   Memo4->Lines->Add("Lim (x+3)/6 cuando x-> "+FloatToStr(rb4)+" = "+FloatToStr( (rb4+3)/6) );
   }
   else if(ide==8)
   {
   rb4=RadioButton4->Caption.ToDouble();
   Memo4->Lines->Add("Lim 5/x cuando x-> "+FloatToStr(rb4)+" = "+FloatToStr( 5/rb4) );
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm4::RadioButton5Click(TObject *Sender)
{
   if (ide==1)
   {
   rb5=RadioButton5->Caption.ToDouble();
   Memo4->Lines->Add("Lim SEN(X) cuando x->"+FloatToStr(rb5)+"="+FloatToStr( sin(rb5*3.14159/180)) );
   }
   else if(ide==2)
   {
   rb5=RadioButton5->Caption.ToDouble();
   Memo4->Lines->Add("Lim COS(X) cuando x-> "+FloatToStr(rb5)+" = "+FloatToStr( cos(rb5*3.14159/180)) );
   }
   else if(ide==3)
   {
   rb5=RadioButton5->Caption.ToDouble();
   Memo4->Lines->Add("Lim TAN(X) cuando x-> "+FloatToStr(rb5)+" = "+FloatToStr( tan(rb5*3.14159/180)) );
   }
   else if(ide==4)
   {
   rb5=RadioButton5->Caption.ToDouble();
   Memo4->Lines->Add("Lim (5x+2)^2 cuando x-> "+FloatToStr(rb5)+" = "+FloatToStr( pow((5*rb5)+2,2)) );
   }
   else if(ide==5)
   {
   rb5=RadioButton5->Caption.ToDouble();
   Memo4->Lines->Add("Lim (10x-2)(6x+3) cuando x-> "+FloatToStr(rb5)+" = "+FloatToStr( ((10*rb5)-2)*((6*rb5)+3)) );
   }
   else if(ide==7)
   {
   rb5=RadioButton5->Caption.ToDouble();
   Memo4->Lines->Add("Lim (x+3)/6 cuando x-> "+FloatToStr(rb5)+" = "+FloatToStr( (rb5+3)/6) );
   }
   else if(ide==8)
   {
   rb5=RadioButton5->Caption.ToDouble();
   Memo4->Lines->Add("Lim 5/x cuando x-> "+FloatToStr(rb5)+" = "+FloatToStr( 5/rb5) );
   }
}
//---------------------------------------------------------------------------

