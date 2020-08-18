//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "algebra.h"
#include "presentacion.h"
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
void __fastcall TForm3::Image2Click(TObject *Sender)
{
Form1->Show();
Close();
}
//---------------------------------------------------------------------------


void __fastcall TForm3::Image6Click(TObject *Sender)
{
SHELLEXECUTEINFO lpExecInfo;
memset(&lpExecInfo, 0,sizeof(SHELLEXECUTEINFO));
lpExecInfo.cbSize=sizeof(SHELLEXECUTEINFO);
lpExecInfo.lpFile="Project1.exe";
lpExecInfo.lpParameters="NULL";
lpExecInfo.lpDirectory="Matrices";
lpExecInfo.lpVerb="open";
lpExecInfo.nShow=SW_NORMAL;
lpExecInfo.fMask=0;
ShellExecuteEx(&lpExecInfo);
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Image7Click(TObject *Sender)
{
SHELLEXECUTEINFO lpExecInfo;
memset(&lpExecInfo, 0,sizeof(SHELLEXECUTEINFO));
lpExecInfo.cbSize=sizeof(SHELLEXECUTEINFO);
lpExecInfo.lpFile="Project1.exe";
lpExecInfo.lpParameters="NULL";
lpExecInfo.lpDirectory="MatrizInversa";
lpExecInfo.lpVerb="open";
lpExecInfo.nShow=SW_NORMAL;
lpExecInfo.fMask=0;
ShellExecuteEx(&lpExecInfo);
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Image8Click(TObject *Sender)
{
SHELLEXECUTEINFO lpExecInfo;
memset(&lpExecInfo, 0,sizeof(SHELLEXECUTEINFO));
lpExecInfo.cbSize=sizeof(SHELLEXECUTEINFO);
lpExecInfo.lpFile="Project1.exe";
lpExecInfo.lpParameters="NULL";
lpExecInfo.lpDirectory="MatrizSRM";
lpExecInfo.lpVerb="open";
lpExecInfo.nShow=SW_NORMAL;
lpExecInfo.fMask=0;
ShellExecuteEx(&lpExecInfo);
}
//---------------------------------------------------------------------------


