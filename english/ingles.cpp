//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ingles.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
float punt_part1;
bool empezar;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image1Click(TObject *Sender)
{
punt_part1= 0;
Panel1->Visible=true;
Panel2->Visible=true;
Panel3->Visible=true;
Button1->Visible=true;
Edit1->Visible=true;
Panel4->Visible=false;
Panel5->Visible=false;
Panel6->Visible=false;
Button2->Visible=false;
Edit2->Visible=false;
Image3->Visible=false;
Image4->Visible=false;
Image5->Visible=false;
Image6->Visible=false;
Image7->Visible=false;
Image8->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image2Click(TObject *Sender)
{
punt_part1= 0;
Panel1->Visible=false;
Panel2->Visible=false;
Panel3->Visible=false;
Button1->Visible=false;
Edit1->Visible=false;
Image3->Visible=false;
Image4->Visible=false;
Image5->Visible=false;
Image6->Visible=false;
Image7->Visible=false;
Image8->Visible=false;
Panel4->Visible=true;
Panel5->Visible=true;
Panel6->Visible=true;
Button2->Visible=true;
Edit2->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
StatusBar1->Panels->Items[0]->Text=Now().DateTimeString();
StatusBar1->Panels->Items[1]->Text= "G.A.B.I.SOFT ?" ;
StatusBar1->Panels->Items[2]->Text="Modulo de Ingles, Listening y ejercicios";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
   if ((RadioButton5->Checked==true))
  {
   punt_part1=punt_part1 + 1;
   Image3->Visible=true;
   Panel1->Enabled=false;
    }
   else
   {
     Image4->Visible=true;
   Panel1->Enabled=false;
    punt_part1=punt_part1;
   }

      if ((RadioButton1->Checked==true))
  {
   punt_part1=punt_part1 + 1;
   Image7->Visible=true;
   Panel2->Enabled=false;
    }
   else
   {
     Image8->Visible=true;
   Panel2->Enabled=false;
    punt_part1=punt_part1;
   }

   if ((RadioButton12->Checked==true))
  {
   punt_part1=punt_part1 + 1;
   Image5->Visible=true;
   Panel3->Enabled=false;
    }
   else
   {
     Image6->Visible=true;
   Panel3->Enabled=false;
    punt_part1=punt_part1;
   }
   Edit1->Text=FloatToStr(punt_part1)+" de 3";
   Image1->Visible=False;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
   if ((RadioButton7->Checked==true))
  {
   punt_part1=punt_part1 + 1;
   Image3->Visible=true;
   Panel4->Enabled=false;
    }
   else
   {
     Image4->Visible=true;
   Panel4->Enabled=false;
    punt_part1=punt_part1;
   }

      if ((RadioButton19->Checked==true))
  {
   punt_part1=punt_part1 + 1;
   Image7->Visible=true;
   Panel5->Enabled=false;
    }
   else
   {
     Image8->Visible=true;
   Panel5->Enabled=false;
    punt_part1=punt_part1;
   }

   if ((RadioButton21->Checked==true))
  {
   punt_part1=punt_part1 + 1;
   Image5->Visible=true;
   Panel6->Enabled=false;
    }
   else
   {
     Image6->Visible=true;
   Panel6->Enabled=false;
    punt_part1=punt_part1;
   }
   Edit2->Text=FloatToStr(punt_part1)+" de 3";
   Image2->Visible=False;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image9Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FileListBox1DblClick(TObject *Sender)
{
        MediaPlayer1->FileName = FileListBox1->FileName;
        MediaPlayer1->Open();
        MediaPlayer1->Play();
        ProgressBar1->Position = 0;
        ProgressBar1->Max = MediaPlayer1->Length;
        empezar = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
if (empezar == true);
	{
		ProgressBar1->Position = MediaPlayer1->Position;
		if(ProgressBar1->Position == ProgressBar1->Max)
		{
			if(FileListBox1->ItemIndex<FileListBox1->Items->Count)
			{
				FileListBox1->ItemIndex = FileListBox1->ItemIndex +1;
				MediaPlayer1->FileName = FileListBox1->FileName;
				
	}
		}
			}        
}
//---------------------------------------------------------------------------
