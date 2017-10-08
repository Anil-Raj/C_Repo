
 /**************************************************************************
  **************************************************************************
  ******************************  Mouse.cpp  *******************************
  **************************************************************************
  *************************************************************************/

  /*************************************************************************

	  By :
		Muhammad Tahir Shahzad  [ MTS ]
		B.C.S Honours  [ 2000-04 ]
		Government College University Lahore
		Pakistan

      E-mail :  mtshome@wol.net.pk

    Web-Site :  www.mts-home.cjb.net  [ www.wol.net.pk/mtshome ]
		www.mtshome.cjb.net   [ www.geocities.com/mtahirshahzad ]

  *************************************************************************/

 /*************************************************************************/
 /*************************************************************************/
 //---------------------------  Header Files  ----------------------------//
 /*************************************************************************/
 /*************************************************************************/

 /*************************************************************************/
 //-------------------------  Built-In  ----------------------------------//
 /*************************************************************************/

 # include    <dos.h>
 # include  <stdio.h>
 # include <stdlib.h>
 # include  <conio.h>

 /*************************************************************************/
 //-------------------------  User Defined  ------------------------------//
 /*************************************************************************/

 # include "Mouse.h"

 /*************************************************************************/
 /*************************************************************************/
 //------------------------  Global Variables  ---------------------------//
 /*************************************************************************/
 /*************************************************************************/

  union REGS InRegs;
  union REGS OutRegs;

 /*************************************************************************/
 /*************************************************************************/
 //------------------------  Function Definitions  -----------------------//
 /*************************************************************************/
 /*************************************************************************/

 /*************************************************************************/
 //--------------------------  init_mouse( )  ----------------------------//
 /*************************************************************************/

 void init_mouse( )
    {
       InRegs.x.ax=0x0000;
       int86(0x33,&InRegs,&OutRegs);

       if(OutRegs.x.ax!=0xFFFF)
	  {
	     puts("\n\n\n\t *****  Error : Unable to detect the mouse driver  *****");
	     puts("\n\t  Press any key to exit and return.");

	     getch( );
	     exit(1);
	  }
    }

 /*************************************************************************/
 //-------------------------  show_mouse( )  -----------------------------//
 /*************************************************************************/

 void show_mouse( )
    {
       InRegs.x.ax=0x0001;
       int86(0x33,&InRegs,&OutRegs);
    }

 /*************************************************************************/
 //------------------  get_mouse_coordinates(int*,int*)  -----------------//
 /*************************************************************************/

 void get_mouse_coordinates(int *x,int *y)
    {
       InRegs.x.ax=0x03;
       int86(0x33,&InRegs,&OutRegs);

       *x=OutRegs.x.cx;
       *y=OutRegs.x.dx;
    }

 /*************************************************************************/
 //------------------------  mouse_key_pressed( )  -----------------------//
 /*************************************************************************/

 int mouse_key_pressed( )
    {
       InRegs.x.ax=0x05;
       InRegs.x.bx=0x00;
       int86(0x33,&InRegs,&OutRegs);

       int flag=0;

       if(OutRegs.x.ax==0x01)
	  flag=1;

       InRegs.x.bx=0x01;
       int86(0x33,&InRegs,&OutRegs);

       if(OutRegs.x.ax==0x02)
	  flag=2;

       InRegs.x.bx=0x02;
       int86(0x33,&InRegs,&OutRegs);

       return flag;
    }

 /*************************************************************************/
 //---------------------  left_mouse_key_pressed( )  ---------------------//
 /*************************************************************************/

 int left_mouse_key_pressed( )
    {
       int flag=mouse_key_pressed( );

       return ((flag==1)?1:0);
    }

 /*************************************************************************/
 //----------------------  right_mouse_key_pressed( )  -------------------//
 /*************************************************************************/

 int right_mouse_key_pressed( )
    {
       int flag=mouse_key_pressed( );

       return ((flag==2)?1:0);
    }

 /*************************************************************************/
 //---------------------------  hide_mouse( )  ---------------------------//
 /*************************************************************************/

 void hide_mouse( )
    {
       InRegs.x.ax=0x02;
       int86(0x33,&InRegs,&OutRegs);
    }

 /*************************************************************************/
 /*************************************************************************/
 //-----------------------------  The End  -------------------------------//
 /*************************************************************************/
 /*************************************************************************/