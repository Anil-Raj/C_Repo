
  /************************************************************************
  *************************************************************************
  *****************************  Gui.cpp  *********************************
  *************************************************************************
  ************************************************************************/

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
 //---------------------------  User Defined  ----------------------------//
 /*************************************************************************/

 # include   "Gui.h"
 # include "Mouse.h"

 /*************************************************************************/
 /*************************************************************************/
 //------------------------  Global Variables  ---------------------------//
 /*************************************************************************/
 /*************************************************************************/

 int text_font=0;
 int text_direction=0;
 int text_size=0;
 int text_color=0;
 int fill_pattern=0;
 int fill_color=0;

 /************************************************************************
  ************************************************************************
  *********************  General Function Definitions ********************
  ************************************************************************
  ***********************************************************************/

 /************************************************************************/
 //---------------------  init_graphic_mode(char*)  ----------------------//
 /************************************************************************/

 void init_graphic_mode(char *Bgi_path)
    {
       int driver=VGA;
       int mode=VGAHI;
       int error_code;

       initgraph(&driver,&mode,Bgi_path);

       error_code=graphresult( );

       if(error_code!=grOk)
	  {
	     restorecrtmode( );
	     textmode(BW80);
	     clrscr( );

	     cout<<" \n Fatal Error  : Graphic Driver not initialized"<<endl;
	     cout<<" Error Reason : "<<grapherrormsg(error_code)<<endl;
	     cout<<" \n Press any key to exit...";

	     getch( );
	     exit(1);
	  }
    }

 /************************************************************************/
 //----------------------  set_background_color(int)  -------------------//
 /************************************************************************/

 void set_background_color(int color)
    {
       hide_mouse( );
       get_current_settings( );

       setfillstyle(1,color);
	 bar(0,0,getmaxx( ),getmaxy( ));

       show_mouse( );
       restore_previous_settings( );
    }

 /************************************************************************/
 //---------------------  get_current_settings( )  ----------------------//
 /************************************************************************/

 void get_current_settings( )
    {
       struct textsettingstype text_settings;
       struct fillsettingstype fill_settings;

       gettextsettings(&text_settings);
       getfillsettings(&fill_settings);

       text_font=text_settings.font;
       text_direction=text_settings.direction;
       text_size=text_settings.charsize;

       fill_pattern=fill_settings.pattern;
       fill_color=fill_settings.color;

       text_color=getcolor( );
    }

 /************************************************************************/
 //-------------------  restore_previous_settings( )  -------------------//
 /************************************************************************/

 void restore_previous_settings( )
    {
       setcolor(text_color);
       settextstyle(text_font,text_direction,text_size);

       setfillstyle(fill_pattern,fill_color);
    }

 /************************************************************************/
 //-----------------  get_input(int,int,int,int,int,int)  ---------------//
 /************************************************************************/

 const char* get_input(int x,int y,int max_size,int text_color,
				   int text_background_color,int input_type)
    {
       hide_mouse( );
       get_current_settings( );

       char Input_text[100]={NULL};

       if(max_size>=80)
	  max_size=80;

       int x1=x;
       int x2=x+(8*max_size)+15;
       int y1=y;
       int y2=y+16;

       setfillstyle(1,text_background_color);
	 bar(x1,y1,x2,y2);

       if(text_background_color!=15)
	  setcolor(15);

       else if(text_background_color==15)
	  setcolor(8);

       rectangle(x1+1,y1+1,x2-1,y2-1);

       int count=0;
       int key_code=0;

       char Key=NULL;

       do
	  {
	     if(kbhit( ))
		{
		   Key=NULL;
		   key_code=0;

		   Key=getch( );
		   key_code=int(Key);

		   if(key_code==13 || key_code==27)
		      break;

		   if(count<max_size && key_code!=8)
		      {
			 if(input_type==NUMBER && (isdigit(Key) || Key=='.' ))
			    {
			       Input_text[count]=Key;
			       count++;
			    }

			 else if(input_type==CHARACTER && !isdigit(Key))
			    {
			       Input_text[count]=Key;
			       count++;
			    }

			 else if(input_type==ANYTHING)
			    {
			       Input_text[count]=Key;
			       count++;
			    }
		      }

		   else if(key_code==8 && count>0)
		      {
			 setfillstyle(1,text_background_color);
			   bar(x1+3,y1+3,x2-3,y2-3);

			 count--;
			 Input_text[count]=NULL;
		      }
		}

	     settextstyle(0,0,1);
	     setcolor(text_color);

	     moveto(x+5,y+5);
	       outtext(Input_text);

	     int xx=getx( );
	     int yy=gety( )+4;

	     while(!kbhit( ))
		{
		   settextstyle(0,0,1);
		     setcolor(text_color);
		       moveto(xx,yy);
			 outtext("-");

		   delay(250);

		     setcolor(text_background_color);
		       moveto(xx,yy);
			 outtext("-");

		   delay(200);
	       }
	  }
       while(1);

       restore_previous_settings( );
       show_mouse( );

       return Input_text;
    }

 /************************************************************************/
 //-----------------  print3d(int,int,char*,int,int)  -------------------//
 /************************************************************************/

 void print3d(int x,int y,char* Text,int text_color,int direction)
    {
       hide_mouse( );
       get_current_settings( );

       settextstyle(0,direction,1);

       if(text_color==0)
	  setcolor(7);

       else
	 setcolor(0);

       outtextxy(x,y+1,Text);

	 setcolor(text_color);
	   outtextxy(x+1,y,Text);

       restore_previous_settings( );
       show_mouse( );
    }

 /************************************************************************/
 //-------------  print_char_by_char(int,int,char*,int,int)  ------------//
 /************************************************************************/

 void print_char_by_char(int x,int y,char* Text,int text_color,int interval)
    {
       hide_mouse( );
       get_current_settings( );

       char Temp[5]={NULL};

       int count=0;
       int text_size=strlen(Text);

       settextstyle(0,0,1);

       do
	  {
	     strset(Temp,NULL);

	     Temp[0]=Text[count];

	     setcolor(0);

	     moveto(x-1,y+1);
	       outtext(Temp);

	     setcolor(text_color);

	     moveto(x,y);
	       outtext(Temp);

	     x=getx( );
	     delay(interval);

	     count++;
	  }
       while(count<text_size);

       restore_previous_settings( );
       show_mouse( );
    }

 /*************************************************************************/
 /*************************************************************************/
 //----------------------  Class Function Definitions  -------------------//
 /*************************************************************************/
 /*************************************************************************/

 /*************************************************************************
  *************************************************************************
  *************************  Class Button  ********************************
  *************************************************************************
  ************************************************************************/

 /*************************************************************************/
 //----------------------------  Button( )  ------------------------------//
 /*************************************************************************/

 Button::Button( )
    {
       x1=0;
       y1=0;
       x2=0;
       y2=0;

       mid_x=0;
       mid_y=0;

       NORMAL_FLAT=NORMAL;
       red_char_position=0;

       button_color=7;

       strcpy(Label,NULL);
    }

 /************************************************************************/
 //--------------  init(int,int,char*,int,int,int,int,int)  -------------//
 /************************************************************************/

 void Button::init(int x,int y,char* Text,int button_type,int width,
					   int height,int color,int red_char)
    {
       x1=x;
       y1=y;

       NORMAL_FLAT=button_type;
       button_color=color;

       int i=0;

       while(Text[i]==' ')
	  i++;

       red_char_position=i;

       if(red_char!=0)
	  red_char_position=red_char;

       if(strlen(Text)<=50)
	  strcpy(Label,Text);

       else
	  strncpy(Label,Text,50);

       settextstyle(0,0,1);

       x2=textwidth(Label)+14+width+x1;
       y2=textheight(Label)+12+height+y1;

       mid_x=((x1+x2)/2)-(textwidth(Label)/2)+1;
       mid_y=((y1+y2)/2)-(textheight(Label)/2)+1;
    }

 /************************************************************************/
 //-------------  modify(int,int,char*,int,int,int,int,int)  ------------//
 /************************************************************************/

 void Button::modify(int x,int y,char* Text,int button_type,int width,
					   int height,int color,int red_char)
    {
       x1=x;
       y1=y;

       NORMAL_FLAT=button_type;
       button_color=color;

       int i=0;

       while(Text[i]==' ')
	  i++;

       red_char_position=i;

       if(red_char!=0)
	  red_char_position=red_char;

       if(strlen(Text)<=50)
	  strcpy(Label,Text);

       else
	  strncpy(Label,Text,50);

       settextstyle(0,0,1);

       x2=textwidth(Label)+14+width+x1;
       y2=textheight(Label)+12+height+y1;

       mid_x=((x1+x2)/2)-(textwidth(Label)/2)+1;
       mid_y=((y1+y2)/2)-(textheight(Label)/2)+1;
    }

 /*************************************************************************/
 //------------------------------  show( )  ------------------------------//
 /*************************************************************************/

 void Button::show( )
    {
       hide_mouse( );
       get_current_settings( );

       setfillstyle(1,button_color);
	 bar(x1,y1,x2,y2);

       if(NORMAL_FLAT==FLAT)
	  {
	     setcolor(0);
	       rectangle(x1,y1,x2-1,y2-1);

	     setcolor(15);
	       rectangle(x1+1,y1+1,x2,y2);
	  }

       else if(NORMAL_FLAT==NORMAL)
	  {
	     setcolor(15);
	       line(x1,y1,x2,y1);
	       line(x1,y1,x1,y2);

	     setcolor(8);
	       line(x1+1,y2-1,x2,y2-1);
	       line(x2-1,y2,x2-1,y1+1);

	     setcolor(0);
	       line(x2,y2,x2,y1);
	       line(x1,y2,x2,y2);

	     setcolor(button_color);
	       line(x1+1,y1+1,x1+1,y2-2);
	       line(x1+1,y1+1,x2-2,y1+1);
	  }

       int label_size=strlen(Label);

       char Title[55]={NULL};

       if(red_char_position)
	  {
	     for(int count_1=0;count_1<red_char_position;count_1++)
		strcat(Title," ");

	     strrev(Title);
	  }

       char Red_char[5]={NULL};

       Red_char[0]=Label[red_char_position];

       if(red_char_position)
	 strcat(Title,Red_char);

       else
	  Title[0]=Label[0];

       int size=(label_size-1-red_char_position);

       for(int count_2=0;count_2<size;count_2++)
	  strcat(Title," ");

       settextstyle(0,0,1);
	 setcolor(button_color);
	   outtextxy(mid_x+1,mid_y+1,Label);

       if(button_color==0)
	  setcolor(15);

       else
	  setcolor(0);

       outtextxy(mid_x,mid_y,Label);

       if(button_color==4)
	  setcolor(15);

       else
	  setcolor(4);

       if(red_char_position!=-1)
	  outtextxy(mid_x,mid_y,Title);

       restore_previous_settings( );
       show_mouse( );
    }

 /************************************************************************/
 //-----------------------------  press( )  -----------------------------//
 /************************************************************************/

 void Button::press( )
    {
       hide_mouse( );
       get_current_settings( );

       if(NORMAL_FLAT==FLAT)
	  {
	     setcolor(button_color);
	       line(x2-1,y2-1,x2-1,y1);
	       line(x1,y2-1,x2-1,y2-1);

	     setcolor(0);
	       line(x1,y1,x2,y1);
	       line(x1,y1,x1,y2);

	     setcolor(8);
	       line(x1+1,y1+1,x1+1,y2-1);
	       line(x1+1,y1+1,x2-1,y1+1);
	  }

       else if(NORMAL_FLAT==NORMAL)
	  {
	     setcolor(button_color);
	       line(x1+1,y2-1,x2,y2-1);
	       line(x1+1,y1+2,x2,y1+2);
	       line(x1+2,y1+2,x1+2,y2);
	       line(x2-1,y1+2,x2-1,y2-1);

	     setcolor(15);
	       line(x2,y2,x2,y1);
	       line(x1,y2,x2,y2);

	     setcolor(0);
	       line(x1,y1,x2,y1);
	       line(x1,y1,x1,y2);

	     setcolor(8);
	       line(x1+1,y1+1,x1+1,y2-1);
	       line(x1+1,y1+1,x2-1,y1+1);
	  }

       int label_size=strlen(Label);

       char Title[55]={NULL};

       if(red_char_position)
	  {
	     for(int count_1=0;count_1<red_char_position;count_1++)
		strcat(Title," ");

	     strrev(Title);
	  }

       char Red_char[5]={NULL};

       Red_char[0]=Label[red_char_position];

       if(red_char_position)
	  strcat(Title,Red_char);

       else
	  Title[0]=Label[0];

       int size=(label_size-1-red_char_position);

       for(int count_2=0;count_2<size;count_2++)
	  strcat(Title," ");

       settextstyle(0,0,1);
	 setcolor(button_color);
	   outtextxy(mid_x,mid_y,Label);

       if(button_color==0)
	  setcolor(15);

       else
	  setcolor(0);

       outtextxy(mid_x+1,mid_y+1,Label);

       if(button_color==4)
	  setcolor(15);

       else
	  setcolor(4);

       if(red_char_position!=-1)
	  outtextxy(mid_x+1,mid_y+1,Title);

       restore_previous_settings( );
       show_mouse( );
    }

 /************************************************************************/
 //-----------------------------  select( )  ----------------------------//
 /************************************************************************/

 void Button::select( )
    {
       hide_mouse( );
       get_current_settings( );

       setcolor(15);
	 line(x1,y1,x2,y1);
	 line(x1,y1,x1,y2);

       setcolor(button_color);
	 line(x1+1,y1+1,x1+1,y2-2);
	 line(x1+1,y1+1,x2-2,y1+1);

       setcolor(8);
	 line(x1+1,y2-1,x2,y2-1);
	 line(x2-1,y2,x2-1,y1+1);

       setcolor(0);
	 line(x2,y2,x2,y1);
	 line(x1,y2,x2,y2);

       restore_previous_settings( );
       show_mouse( );
    }

 /************************************************************************/
 //----------------------  press_and_release(int)  ----------------------//
 /************************************************************************/

 void Button::press_and_release(int flag)
    {
	 press( );

	 if(flag==KEY_BOARD)
	   delay(250);

	 else if(flag==LEFT_MOUSE_KEY)
	    while(hit( ) && left_mouse_key_pressed( ) && !kbhit( ));

	 else if(flag==RIGHT_MOUSE_KEY)
	    while(hit( ) && right_mouse_key_pressed( ) && !kbhit( ));

	 show( );
    }

 /************************************************************************/
 //---------------------  select_and_release(int)  ----------------------//
 /************************************************************************/

 void Button::select_and_release(int flag)
    {
	 select( );

	 if(flag==LEFT_MOUSE_KEY)
	    while(hit( ) && !left_mouse_key_pressed( ) && !kbhit( ));

	 else if(flag==RIGHT_MOUSE_KEY)
	    while(hit( ) && !right_mouse_key_pressed( ) && !kbhit( ));

	 show( );
    }

 /************************************************************************/
 //---------------------------  hit( )  ---------------------------------//
 /************************************************************************/

 int Button::hit( )
    {
	int x;
	int y;

	get_mouse_coordinates(&x,&y);

	return ((x>=x1 && x<=x2 && y>=y1 && y<=y2)?1:0);
    }

 /************************************************************************
  ************************************************************************
  ************************  Class Panel  *********************************
  ************************************************************************
  ***********************************************************************/

 /************************************************************************/
 //---------------------------  Panel( )  -------------------------------//
 /************************************************************************/

 Panel::Panel( )
    {
       x1=0;
       y1=0;
       x2=0;
       y2=0;
       in_out=IN;
       thick_thin=THIN;
    }

 /************************************************************************/
 //-----------------  init(int,int,int,int,int,int,int)  ----------------//
 /************************************************************************/

 void Panel::init(int left,int top,int right,int bottom,int IN_OUT,
						    int THICK_THIN,int color)
    {
       x1=left;
       y1=top;
       x2=right;
       y2=bottom;

       panel_color=color;

       in_out=IN_OUT;
       thick_thin=THICK_THIN;
    }

 /************************************************************************/
 //-----------------  modify(int,int,int,int,int,int,int)  --------------//
 /************************************************************************/

 void Panel::modify(int left,int top,int right,int bottom,int IN_OUT,
						    int THICK_THIN,int color)
    {
       x1=left;
       y1=top;
       x2=right;
       y2=bottom;

       panel_color=color;

       in_out=IN_OUT;
       thick_thin=THICK_THIN;
    }

 /************************************************************************/
 //------------------------------  show( )  -----------------------------//
 /************************************************************************/

 void Panel::show( )
   {
       hide_mouse( );
       get_current_settings( );

       if(panel_color==15)
	  panel_color=7;

       setfillstyle(1,panel_color);
	 bar(x1,y1,x2,y2);

       if(in_out==OUT)
	  setcolor(15);

       else
	  setcolor(8);

       line(x1,y1,x2-1,y1);
       line(x1,y1,x1,y2-1);

       if(thick_thin==THICK)
	  {
	     line(x1+1,y1+1,x2,y1+1);
	     line(x1+1,y1,x1+1,y2);
	  }

       if(in_out==OUT)
	  setcolor(8);

       else
	  setcolor(15);

       line(x1+1,y2,x2,y2);
       line(x2,y1+1,x2,y2);

       if(thick_thin==THICK)
	  {
	     line(x1+2,y2-1,x2,y2-1);
	     line(x2-1,y1+2,x2-1,y2);
	  }

       restore_previous_settings( );
       show_mouse( );
    }

 /************************************************************************
  ************************************************************************
  ************************  Class Bevel  *********************************
  ************************************************************************
  ***********************************************************************/

 /************************************************************************/
 //------------------  init(int,int,int.int,int,int)  -------------------//
 /************************************************************************/

 void Bevel::init(int left,int top,int right,int bottom,int THICK_THIN,
								  int color)
    {
	Outer_bevel.init(left,top,right,bottom,OUT,THICK_THIN);
	Inner_bevel.init(left+3,top+3,right-3,bottom-3,IN,THICK_THIN,color);
    }

 /************************************************************************/
 //-----------------  modify(int,int,int.int,int,int)  ------------------//
 /************************************************************************/

 void Bevel::modify(int left,int top,int right,int bottom,int THICK_THIN,
								int color)
    {
	Outer_bevel.modify(left,top,right,bottom,OUT,THICK_THIN);
	Inner_bevel.modify(left+3,top+3,right-3,bottom-3,IN,THICK_THIN,
                                                                   color);
    }

 /************************************************************************/
 //----------------------------  show( )  -------------------------------//
 /************************************************************************/

 void Bevel::show( )
    {
	hide_mouse( );

	Outer_bevel.show( );
	Inner_bevel.show( );

	show_mouse( );
    }

 /************************************************************************/
 /************************************************************************/
 //-----------------------------  The  End  -----------------------------//
 /************************************************************************/
 /************************************************************************/