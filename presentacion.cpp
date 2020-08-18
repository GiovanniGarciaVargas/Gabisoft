//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "presentacion.h"
#include "fisica.h"
#include "algebra.h"
#include "calculo.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Image2Click(TObject *Sender)
{
//--- Llamar la forma 2 Fisica
Form2->Show();
Form1->Hide();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image3Click(TObject *Sender)
{
//--- Llamar la forma 3 Algebra
Form3->Show();
Form1->Hide();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image4Click(TObject *Sender)
{
//--- Llamar a la forma 4 Calculo
Form4->Show();
Form1->Hide();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image6Click(TObject *Sender)
{
//--- Cerrar programa
Close();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image5Click(TObject *Sender)
{
SHELLEXECUTEINFO lpExecInfo;
memset(&lpExecInfo, 0,sizeof(SHELLEXECUTEINFO));
lpExecInfo.cbSize=sizeof(SHELLEXECUTEINFO);
lpExecInfo.lpFile="Project1.exe";
lpExecInfo.lpParameters="NULL";
lpExecInfo.lpDirectory="english";
lpExecInfo.lpVerb="open";
lpExecInfo.nShow=SW_NORMAL;
lpExecInfo.fMask=0;
ShellExecuteEx(&lpExecInfo);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image8Click(TObject *Sender)
{
SHELLEXECUTEINFO lpExecInfo;
memset(&lpExecInfo, 0,sizeof(SHELLEXECUTEINFO));
lpExecInfo.cbSize=sizeof(SHELLEXECUTEINFO);
lpExecInfo.lpFile="Examen.exe";
lpExecInfo.lpParameters="NULL";
lpExecInfo.lpDirectory="Evaluacion";
lpExecInfo.lpVerb="open";
lpExecInfo.nShow=SW_NORMAL;
lpExecInfo.fMask=0;
ShellExecuteEx(&lpExecInfo);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image9Click(TObject *Sender)
{
SHELLEXECUTEINFO lpExecInfo;
memset(&lpExecInfo, 0,sizeof(SHELLEXECUTEINFO));
lpExecInfo.cbSize=sizeof(SHELLEXECUTEINFO);
lpExecInfo.lpFile="ProjectReferencias.exe";
lpExecInfo.lpParameters="NULL";
lpExecInfo.lpDirectory="Referencias";
lpExecInfo.lpVerb="open";
lpExecInfo.nShow=SW_NORMAL;
lpExecInfo.fMask=0;
ShellExecuteEx(&lpExecInfo);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image10Click(TObject *Sender)
{
SHELLEXECUTEINFO lpExecInfo;
memset(&lpExecInfo, 0,sizeof(SHELLEXECUTEINFO));
lpExecInfo.cbSize=sizeof(SHELLEXECUTEINFO);
lpExecInfo.lpFile="Project1.exe";
lpExecInfo.lpParameters="NULL";
lpExecInfo.lpDirectory="MP";
lpExecInfo.lpVerb="open";
lpExecInfo.nShow=SW_NORMAL;
lpExecInfo.fMask=0;
ShellExecuteEx(&lpExecInfo);
}
//---------------------------------------------------------------------------

