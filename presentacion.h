//---------------------------------------------------------------------------

#ifndef presentacionH
#define presentacionH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TPanel *Panel1;
        TImage *Image1;
        TImage *Image2;
        TImage *Image3;
        TImage *Image5;
        TImage *Image6;
        TImage *Image7;
        TImage *Image4;
        TImage *Image8;
        TImage *Image9;
        TImage *Image10;
        void __fastcall Image2Click(TObject *Sender);
        void __fastcall Image3Click(TObject *Sender);
        void __fastcall Image4Click(TObject *Sender);
        void __fastcall Image6Click(TObject *Sender);
        void __fastcall Image5Click(TObject *Sender);
        void __fastcall Image8Click(TObject *Sender);
        void __fastcall Image9Click(TObject *Sender);
        void __fastcall Image10Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
