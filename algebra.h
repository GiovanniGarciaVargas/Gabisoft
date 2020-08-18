//---------------------------------------------------------------------------

#ifndef algebraH
#define algebraH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
        TPanel *Panel1;
        TImage *Image1;
        TPageControl *PageControl1;
        TTabSheet *TabSheet1;
        TTabSheet *TabSheet2;
        TRichEdit *RichEdit1;
        TTabSheet *TabSheet4;
        TTabSheet *TabSheet5;
        TImage *Image2;
        TRichEdit *RichEdit2;
        TRichEdit *RichEdit3;
        TRichEdit *RichEdit4;
        TRichEdit *RichEdit5;
        TImage *Image9;
        TLabel *Label20;
        TRichEdit *RichEdit6;
        TImage *Image10;
        TImage *Image12;
        TImage *Image6;
        TImage *Image7;
        TImage *Image8;
        TLabel *Label1;
        TImage *Image13;
        TImage *Image3;
        TImage *Image4;
        TImage *Image5;
        TLabel *Label2;
        TImage *Image14;
        TLabel *Label3;
        TImage *Image11;
        void __fastcall Image2Click(TObject *Sender);
        void __fastcall Image6Click(TObject *Sender);
        void __fastcall Image7Click(TObject *Sender);
        void __fastcall Image8Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
