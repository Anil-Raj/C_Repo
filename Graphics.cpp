
  /************************************************************************
  *************************************************************************
  **************************  Graphics.cpp  *******************************
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
 //-------------------------  Built-In  ----------------------------------//
 /*************************************************************************/

 # include <fstream.h>

 /*************************************************************************/
 //---------------------  User Defined  ----------------------------------//
 /*************************************************************************/

 # include "General.h"

 /*************************************************************************/
 /*************************************************************************/
 //----------------------  Class Function Definitions  -------------------//
 /*************************************************************************/
 /*************************************************************************/

 /*************************************************************************
  *************************************************************************
  *************************  Class Graphics  ******************************
  *************************************************************************
  ************************************************************************/

 /*************************************************************************/
 //-----------------------------  Graphics( ) ----------------------------//
 /*************************************************************************/

 Graphics::Graphics( )
    {
       score=0;
       game_speed=0;
       record_score=0;
       record_speed=0;
       column_counter=0;

       strset(Record_score,NULL);
       strset(Record_speed,NULL);
       strset(Player_name,NULL);
       strset(Record_player_name,NULL);

       for(int count_1=0;count_1<20;count_1++)
	  {
	     for(int count_2=0;count_2<10;count_2++)
		array[count_1][count_2]=0;
	  }
    }

 /*************************************************************************/
 //---------------  draw_brick(const int,const int,const int) ------------//
 /*************************************************************************/

 void Graphics::draw_brick(const int x,const int y,const int color)
    {
       setcolor(color);
	 rectangle(x,y,x+20,y+20);

       setfillstyle(1,color);
	 bar(x+3,y+3,x+17,y+17);
    }

 /*************************************************************************/
 //--------------------  draw_shape_0(const int,const int) ---------------//
 /*************************************************************************/

 void Graphics::draw_column_0(const int x,const int y)
    {
       setfillstyle(1,0);
	 bar((x-10),(y-10),(x+10),(y+10));
    }

 /*************************************************************************/
 //-------------------  draw_column_1(const int,const int) ---------------//
 /*************************************************************************/

 void Graphics::draw_column_1(const int x,const int y)
    {
       int column[18]={x-8,y-10,x+8,y-10,x+10,y-8,x+10,y+8,x+8,y+10,
				       x-8,y+10,x-10,y+8,x-10,y-8,x-8,y-10};

       setcolor(9);
       setfillstyle(1,1);
	 fillpoly(9,column);

       setcolor(0);
       line(x-10,y+10,x-9,y+10);
       line(x+9,y+10,x+10,y+10);
    }

 /*************************************************************************/
 //--------------------  draw_column_2(const int,const int) --------------//
 /*************************************************************************/

 void Graphics::draw_column_2(const int x,const int y)
    {
       int column[18]={x-6,y-10,x+6,y-10,x+10,y-6,x+10,y+6,x+6,y+10,
				       x-6,y+10,x-10,y+6,x-10,y-6,x-6,y-10};

       setcolor(10);
       setfillstyle(1,2);
	 fillpoly(9,column);

       int edge_1[8]={x-10,y-7,x-10,y-10,x-8,y-10,x-10,y-8};
       int edge_2[8]={x+10,y-7,x+10,y-10,x+8,y-10,x+10,y-8};
       int edge_3[8]={x+10,y+8,x+10,y+10,x+8,y+10,x+10,y+8};
       int edge_4[8]={x-10,y+8,x-10,y+10,x-8,y+10,x-10,y+8};

       setcolor(0);
       setfillstyle(1,0);
	 fillpoly(4,edge_1);
	 fillpoly(4,edge_2);
	 fillpoly(4,edge_3);
	 fillpoly(4,edge_4);

       line(x-10,y+10,x-7,y+10);
       line(x+7,y+10,x+10,y+10);
    }

 /*************************************************************************/
 //-------------------  draw_column_3(const int,const int) ---------------//
 /*************************************************************************/

 void Graphics::draw_column_3(const int x,const int y)
    {
       setcolor(3);
       setfillstyle(1,3);
	 pieslice(x,y,0,360,10);

       setcolor(11);
	 circle(x,y,10);

       int edge_1[8]={x-9,y-4,x-10,y-10,x-5,y-10,x-10,y-6};
       int edge_2[8]={x+10,y-4,x+10,y-10,x+5,y-10,x+10,y-6};
       int edge_3[8]={x+10,y+4,x+10,y+10,x+5,y+10,x+10,y+6};
       int edge_4[8]={x-10,y+4,x-10,y+10,x-5,y+10,x-10,y+6};

       setcolor(0);
       setfillstyle(1,0);
	 fillpoly(4,edge_1);
	 fillpoly(4,edge_2);
	 fillpoly(4,edge_3);
	 fillpoly(4,edge_4);

       line(x-10,y+10,x-5,y+10);
       line(x+5,y+10,x+10,y+10);
    }

 /*************************************************************************/
 //--------------------  draw_column_4(const int,const int) --------------//
 /*************************************************************************/

 void Graphics::draw_column_4(const int x,const int y)
    {
       setcolor(5);
       setfillstyle(1,5);
	 pieslice(x,y,0,360,10);

       setcolor(13);
	 circle(x,y,10);

       int edge_1[8]={x-9,y-4,x-10,y-10,x-5,y-10,x-10,y-6};
       int edge_2[8]={x+10,y-4,x+10,y-10,x+5,y-10,x+10,y-6};
       int edge_3[8]={x+10,y+4,x+10,y+10,x+5,y+10,x+10,y+6};
       int edge_4[8]={x-10,y+4,x-10,y+10,x-5,y+10,x-10,y+6};

       setcolor(0);
       setfillstyle(1,0);
	 fillpoly(4,edge_1);
	 fillpoly(4,edge_2);
	 fillpoly(4,edge_3);
	 fillpoly(4,edge_4);

       line(x-10,y+10,x-5,y+10);
       line(x+5,y+10,x+10,y+10);
    }

 /*************************************************************************/
 //-------------------  draw_column_5(const int,const int) ---------------//
 /*************************************************************************/

 void Graphics::draw_column_5(const int x,const int y)
    {
       int column[14]={x,y-10,x-10,y-5,x-10,y+5,x,y+10,x+10,y+5,
							    x+10,y-5,x,y-10};

       setcolor(12);
       setfillstyle(1,4);
	 fillpoly(7,column);

       int edge_1[8]={x-10,y-5,x-10,y-10,x-1,y-10,x-10,y-6};
       int edge_2[8]={x+10,y-5,x+10,y-10,x+1,y-10,x+10,y-6};
       int edge_3[8]={x+10,y+6,x+10,y+10,x+1,y+10,x+10,y+6};
       int edge_4[8]={x-10,y+6,x-10,y+10,x-1,y+10,x-10,y+6};

       setcolor(0);
       setfillstyle(1,0);
	 fillpoly(4,edge_1);
	 fillpoly(4,edge_2);
	 fillpoly(4,edge_3);
	 fillpoly(4,edge_4);

       line(x-10,y+10,x-2,y+10);
       line(x+2,y+10,x+10,y+10);
    }

 /*************************************************************************/
 //--------------------  draw_column_6(const int,const int) --------------//
 /*************************************************************************/

 void Graphics::draw_column_6(const int x,const int y)
    {
       int column[18]={x-2,y-10,x+2,y-10,x+10,y-2,x+10,y+2,x+2,y+10,
				       x-2,y+10,x-10,y+2,x-10,y-2,x-2,y-10};

       setcolor(15);
       setfillstyle(1,7);
	 fillpoly(9,column);

       int edge_1[8]={x-10,y-3,x-10,y-10,x-3,y-10,x-10,y-3};
       int edge_2[8]={x+10,y-3,x+10,y-10,x+3,y-10,x+10,y-3};
       int edge_3[8]={x+10,y+3,x+10,y+10,x+3,y+10,x+10,y+3};
       int edge_4[8]={x-10,y+3,x-10,y+10,x-3,y+10,x-10,y+3};

       setcolor(0);
       setfillstyle(1,0);
	 fillpoly(4,edge_1);
	 fillpoly(4,edge_2);
	 fillpoly(4,edge_3);
	 fillpoly(4,edge_4);

       line(x-10,y+10,x-3,y+10);
       line(x+3,y+10,x+10,y+10);
    }

 /*************************************************************************/
 //-----  write_bold_text(const int,const int,const char*,const int) -----//
 /*************************************************************************/

 void Graphics::write_bold_text(const int x,const int y,
					  const char* Text,const int color)
    {
       setcolor(0);
	 outtextxy(x-2,y+1,Text);
	 outtextxy(x-1,y+1,Text);
	 outtextxy(x-1,y,Text);

       setcolor(color);
	 outtextxy(x,y,Text);
	 outtextxy(x+1,y,Text);
	 outtextxy(x+2,y,Text);
    }

 /*************************************************************************/
 //--------------------  about_programmer(const int)  --------------------//
 /*************************************************************************/

 void Graphics::about_programmer(Button About,const int pressed_key)
    {
       Bevel About_programmer;

       About_programmer.init(40,315,275,445,THICK,0);
       About_programmer.show( );

       setcolor(14);
       settextstyle(3,0,4);
	 outtextxy(100,325,"Columns");
	 outtextxy(101,325,"Columns");

       hide_mouse( );

       setcolor(15);
       settextstyle(2,0,4);
	 outtextxy(55,370,"09 March, 2003");

	 outtextxy(55,392,"Copyright (C) 2000-03");
	 outtextxy(55,405,"Muhammad Tahir Shahzad");
	 outtextxy(55,422,"Government College University Lahore");

       show_mouse( );

       if(pressed_key==KEY_BOARD)
	  delay(1000);

       else if(pressed_key==LEFT_MOUSE_KEY)
	  while(About.hit( ) && left_mouse_key_pressed( ) && !kbhit( ));

       hide_mouse( );

       setfillstyle(1,1);
	 bar(37,312,277,447);

       show_mouse( );
    }

 /*************************************************************************/
 //-----------------------  show_selection_screen( )  --------------------//
 /*************************************************************************/

 void Graphics::show_selection_screen( )
    {
       cleardevice( );

       for(int count_1=0;count_1<26;count_1++)
	  {
	     draw_brick((8+(count_1*24)),1,7);
	     draw_brick((8+(count_1*24)),457,7);
	  }

       for(int count_2=1;count_2<=18;count_2++)
	  {
	     draw_brick(8,(1+(count_2*24)),7);
	     draw_brick(608,(1+(count_2*24)),7);
	  }

       Bevel Main_screen;

       Main_screen.init(31,24,605,454,THICK,1);
       Main_screen.show( );

       for(int count_3=0;count_3<10;count_3++)
	  {
	     for(int count_4=0;count_4<(10-count_3);count_4++)
		draw_brick((39+(count_4*22)),(32+(count_3*22)),9);
	  }

       for(int count_5=0;count_5<10;count_5++)
	  {
	     for(int count_6=0;count_6<(10-count_5);count_6++)
		draw_brick((576-(count_6*22)),(32+(count_5*22)),9);
	  }

       settextstyle(1,0,9);
	 write_bold_text(125,180,"Columns",8);
	 write_bold_text(127,182,"Columns",14);

	 draw_brick(128,285,0);

	 for(int count_6=2;count_6<17;count_6++)
	    draw_brick((103+(count_6*25)),285,count_6);

       Button Exit;
       Button Play;
       Button About;

       Play.init(510,355," Play  ",FLAT,0,0,0);
       Play.show( );

       About.init(510,385," About ",FLAT,0,0,0);
       About.show( );

       Exit.init(510,415," Exit  ",FLAT,0,0,0);
       Exit.show( );

       show_mouse( );

       int selected=0;
       int key_code_1=0;
       int key_code_2=0;

       char Key_1=NULL;
       char Key_2=NULL;

       do
	  {
	     if(Play.hit( ))
		Play.select_and_release( );

	     else if(About.hit( ))
		About.select_and_release( );

	     else if(Exit.hit( ))
		Exit.select_and_release( );

	     if(Play.hit( ) && left_mouse_key_pressed( ))
		{
		   Play.press_and_release(LEFT_MOUSE_KEY);

		   selected=1;
		}

	     else if(About.hit( ) && left_mouse_key_pressed( ))
		{
		   About.press( );
		   about_programmer(About,LEFT_MOUSE_KEY);
		   About.show( );
		}

	     else if(Exit.hit( ) && left_mouse_key_pressed( ))
		{
		   Exit.press_and_release(LEFT_MOUSE_KEY);

		   delay(500);
		   exit(0);
		}

	     if(kbhit( ))
		{
		   Key_1=getch( );

		   key_code_1=int(Key_1);

		   if(key_code_1==0)
		      {
			 Key_2=getch( );

			 key_code_2=int(Key_2);
		      }

		   if((key_code_1==0 && key_code_2==25) || key_code_1==13)
		      {
			       Play.press_and_release(KEY_BOARD);

			       selected=1;
		      }

		   else if(key_code_1==0 && key_code_2==30)
		      {
			       About.press_and_release(KEY_BOARD);

			       about_programmer(About,KEY_BOARD);
		      }

		   else if((key_code_1==0 && (key_code_2==107 ||
				    key_code_2==45 || key_code_2==18))
							   || key_code_1==27)
		      {
			 Exit.press_and_release(KEY_BOARD);

			 delay(500);
			 exit(0);
		      }
		}
	  }
       while(!selected);

       hide_mouse( );
       delay(1000);
    }
 /*************************************************************************/
 //--------------------------  how_to_play( )  ---------------------------//
 /*************************************************************************/

 void Graphics::how_to_play( )
    {
       setfillstyle(1,8);
	 bar(35,28,601,450);

       settextstyle(4,0,5);
	 write_bold_text(190,40,"How to Play",14);
	 write_bold_text(188,45,"_________",7);

       settextstyle(1,0,4);
	 write_bold_text(50,130,"Key Board :",12);

       settextstyle(2,0,6);
	 setcolor(7);
	   outtextxy(98,170,"Move Left :");
	   outtextxy(99,170,"Move Left :");

	   outtextxy(88,190,"Move Right :");
	   outtextxy(89,190,"Move Right :");

	 setcolor(15);
	   outtextxy(215,170,"Left Arrow Key");
	   outtextxy(216,170,"Left Arrow Key");

	   outtextxy(215,190,"Right Arrow Key");
	   outtextxy(216,190,"Right Arrow Key");

       settextstyle(2,0,6);
	 setcolor(7);
	   outtextxy(94,210,"Move Down :");
	   outtextxy(95,210,"Move Down :");

	   outtextxy(60,230,"Shuffle Shape :");
	   outtextxy(61,230,"Shuffle Shape :");

	   outtextxy(134,250,"Speed :");
	   outtextxy(135,250,"Speed :");

	   outtextxy(86,270,"Play/Pause :");
	   outtextxy(87,270,"Play/Pause :");

	 setcolor(15);
	   outtextxy(215,210,"Down Arrow Key");
	   outtextxy(216,210,"Down Arrow Key");

	   outtextxy(215,230,"Space Bar");
	   outtextxy(216,230,"Space Bar");

	   outtextxy(215,250,"Any Key (Keep Pressed)");
	   outtextxy(216,250,"Any Key (Keep Pressed)");

	   outtextxy(215,270,"P");
	   outtextxy(216,270,"P");

       settextstyle(1,0,4);
	 write_bold_text(50,300,"Object :",12);

       setcolor(15);
       settextstyle(2,0,6);
	 outtextxy(250,320,"Try to match (Vertically, Diagonally,");
	 outtextxy(251,320,"Try to match (Vertically, Diagonally,");

	 outtextxy(60,340,"or Horizontally) three or more bricks with similar color.");
	 outtextxy(61,340,"or Horizontally) three or more bricks with similar color.");

	 outtextxy(60,360,"The bricks will be disappear and your score will be");
	 outtextxy(61,360,"The bricks will be disappear and your score will be");

	 outtextxy(60,380,"increased. The more bricks you match at the same time,");
	 outtextxy(61,380,"increased. The more bricks you match at the same time,");

	 outtextxy(60,400,"the more score will be increased. The game will be over,");
	 outtextxy(61,400,"the more score will be increased. The game will be over,");

	 outtextxy(60,420,"if any of the brick meet the top of the window.");
	 outtextxy(61,420,"if any of the brick meet the top of the window.");

       for(int count=0;count<150;count++)
	  {
	     if(kbhit())
		{
		   if(int(getch( ))==13)
		      break;
		}

	     else
		delay(100);
	  }
    }

 /*************************************************************************/
 //-----------------------  show_main_screen( )  -------------------------//
 /*************************************************************************/

 void Graphics::show_main_screen( )
    {
       cleardevice( );

       Bevel Left_window;
       Bevel Main_window;
       Bevel Right_window;

       Left_window.init(0,75,204,getmaxy( ),THIN,8);
       Left_window.show( );

       Right_window.init(437,75,getmaxx( ),getmaxy( ),THIN,8);
       Right_window.show( );

       Main_window.init(205,29,435,479,THICK,0);
       Main_window.show( );

       Bevel Game_1;
       Bevel Menu;
       Bevel Game_2;

       Game_1.init(0,0,204,74,THIN,9);
       Game_1.show( );

       Menu.init(201,0,440,32,THIN,9);
       Menu.show( );

       Game_2.init(437,0,getmaxx( ),74,THIN,9);
       Game_2.show( );

       Play_pause.init(217,7,"Play/Pause",FLAT,2,-4,9);
       Play_pause.show( );

       Exit.init(325,7," Exit ",FLAT,34,-4,9);
       Exit.show( );

       settextstyle(3,0,4);
	 write_bold_text(15,95,"Name :",12);

       Bevel Name;
       Bevel Score;
       Bevel Speed;

       Name.init(15,135,175,165,THIN,0);
       Name.show( );

       settextstyle(3,0,4);
	 write_bold_text(15,185,"Score :",12);

       Score.init(15,225,175,255,THIN,0);
       Score.show( );

       settextstyle(3,0,4);
	 write_bold_text(15,283,"Speed :",12);

       Speed.init(15,325,175,355,THIN,0);
       Speed.show( );

       settextstyle(3,0,4);
	 write_bold_text(455,95,"Record :",12);

       Bevel Record;
       Bevel Next_window;

       Record.init(455,135,615,265,THIN,0);
       Record.show( );

       setcolor(9);
       settextstyle(2,0,7);
	 outtextxy(465,138,"Name :");
	 outtextxy(466,138,"Name :");

	 outtextxy(465,178,"Score :");
	 outtextxy(466,178,"Score :");

	 outtextxy(465,218,"Speed :");
	 outtextxy(466,218,"Speed :");

       settextstyle(3,0,4);
	 write_bold_text(455,285,"Next :",12);

       Next_window.init(455,325,615,455,THIN,0);
       Next_window.show( );

       settextstyle(1,0,5);
	 write_bold_text(15,10,"Columns",8);
	 write_bold_text(16,11,"Columns",14);

	 write_bold_text(452,10,"Columns",8);
	 write_bold_text(453,11,"Columns",14);
    }

 /*************************************************************************/
 //-------------------------  show_player_name( )  -----------------------//
 /*************************************************************************/

 void Graphics::show_player_name( )
    {
       setcolor(15);
       settextstyle(2,0,7);
	 outtextxy(24,138,Player_name);
	 outtextxy(25,138,Player_name);
    }

 /*************************************************************************/
 //------------------------  show_player_score( )  -----------------------//
 /*************************************************************************/

 void Graphics::show_player_score( )
    {
       char Score[15]={NULL};

       ultoa(score,Score,10);

       setfillstyle(1,0);
	 bar(19,229,171,251);

       setcolor(15);
       settextstyle(2,0,7);
	 outtextxy(27,228,Score);
	 outtextxy(28,228,Score);
    }

 /*************************************************************************/
 //------------------------  show_game_speed( )  -------------------------//
 /*************************************************************************/

 void Graphics::show_game_speed( )
    {
       char Speed[10]={NULL};

       itoa(game_speed,Speed,10);

       setfillstyle(1,0);
	 bar(19,329,171,351);

       setcolor(15);
       settextstyle(2,0,7);
	 outtextxy(27,328,Speed);
	 outtextxy(28,328,Speed);
    }

 /*************************************************************************/
 //--------------------------  show_record( )  ---------------------------//
 /*************************************************************************/

 void Graphics::show_record( )
    {
       fstream File("Columns.mts",ios::in|ios::nocreate);

       if(!File)
	  {
	     strcpy(Record_player_name,"NoName");
	     strcpy(Record_score,"0");
	     strcpy(Record_speed,"0");

	     record_speed=0;
	     record_score=0;
	  }

       else
	  {
	    char Name[20]={NULL};
	    char Score[15]={NULL};
	    char Speed[15]={NULL};

	     char String[90]={NULL};

	     File.getline(String,80);
	     File.close( );

	     int count_1=0;

	     for(int count_2=0;count_2<3;count_2++)
		{
		   int count_3=0;

		   do
		      {
			 if(count_2==0)
			    Name[count_3]=String[count_1];

			 else if(count_2==1)
			    Score[count_3]=String[count_1];

			 else if(count_2==2)
			    Speed[count_3]=String[count_1];

			 count_1++;
			 count_3++;
		      }
		   while(String[count_1]!=' ' && String[count_1+1]!='±');

		   count_1+=2;
		}

	     strcpy(Record_player_name,Name);
	     strcpy(Record_score,Score);
	     strcpy(Record_speed,Speed);

	     record_speed=atoi(Speed);

	     char *endptr;

	     record_score=strtoul(Score,&endptr,10);
	  }

       setcolor(15);
       settextstyle(2,0,6);
	 outtextxy(500,158,Record_player_name);
	 outtextxy(501,158,Record_player_name);

	 outtextxy(500,198,Record_score);
	 outtextxy(501,198,Record_score);

	 outtextxy(500,238,Record_speed);
	 outtextxy(501,238,Record_speed);
    }

 /*************************************************************************/
 //----------------------  check_and_replace_record( )  ------------------//
 /*************************************************************************/

 void Graphics::check_and_replace_record( )
    {
       if((score==record_score && game_speed>=record_speed)
						      || score>record_score)
	  {
	     strcpy(Record_player_name,NULL);
	     strcpy(Record_score,NULL);
	     strcpy(Record_speed,NULL);

	     char Score[15]={NULL};
	     char Speed[5]={NULL};

	     ultoa(score,Score,10);
	     itoa(game_speed,Speed,10);

	     strcpy(Record_player_name,Player_name);
	     strcpy(Record_score,Score);
	     strcpy(Record_speed,Speed);

	     record_score=score;
	     record_speed=game_speed;

	     setfillstyle(1,0);
		bar(495,160,600,177);
		bar(495,200,600,215);
		bar(495,240,600,255);

	     setcolor(15);
	     settextstyle(2,0,6);
	       outtextxy(500,158,Record_player_name);
	       outtextxy(501,158,Record_player_name);

	       outtextxy(500,198,Record_score);
	       outtextxy(501,198,Record_score);

	       outtextxy(500,238,Record_speed);
	       outtextxy(501,238,Record_speed);
	  }
    }

 /************************************************************************/
 /************************************************************************/
 //-----------------------------  The End  ------------------------------//
 /************************************************************************/
 /************************************************************************/
