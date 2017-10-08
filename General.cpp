
  /************************************************************************
  *************************************************************************
  ***************************  General.cpp  *******************************
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
 //-----------------------------  Built-In  ------------------------------//
 /*************************************************************************/

 #include<fstream.h>

 /*************************************************************************/
 //------------------------  User Defined  ------------------------------//
 /*************************************************************************/

 # include "General.h"

 /*************************************************************************/
 /*************************************************************************/
 //----------------------  Class Function Definitions  -------------------//
 /*************************************************************************/
 /*************************************************************************/

 /*************************************************************************
  *************************************************************************
  **************************  Class General  ******************************
  *************************************************************************
  ************************************************************************/

 /*************************************************************************/
 //--------------------------  show_opening( )  --------------------------//
 /*************************************************************************/

 void General::show_opening( )
    {
       how_to_play( );
       show_main_screen( );

       for(int count_1=0;count_1<20;count_1++)
	  {
	     for(int count_2=0;count_2<10;count_2++)
		draw_brick((211+(count_2*22)),(453-(count_1*22)),8);
	  }

       int size=0;

       char *buffer=NULL;

       size=imagesize(210,195,430,285);
       buffer=new char[size];

       getimage(210,195,430,285,buffer);

       delay(500);

       Panel Message_box;
       Panel Title_bar;

       Message_box.init(215,200,424,280,OUT,THIN);
       Title_bar.init(215,200,424,220,OUT,THIN,9);

       do
	  {
	     strset(Player_name,NULL);

	     sound(2500);
	     delay(50);
	     nosound( );

	     Message_box.show( );
	     Title_bar.show( );

	     print3d(220,207,"Player Name");

	     setcolor(0);
	     settextstyle(2,0,4);
	       outtextxy(225,228,"Please enter your good name :");

	     strcpy(Player_name,get_input(273,250,10,15,8,ANYTHING));

	     putimage(210,195,buffer,0);

	     sound(2500);
	     delay(50);
	     nosound( );

	     delay(500);
	  }
       while(strcmp(Player_name,"")==0);

       show_record( );
       show_player_score( );
       show_game_speed( );
       show_player_name( );

       for(int count_3=0;count_3<20;count_3++)
	  {
	     for(int count_4=0;count_4<10;count_4++)
		{
		   draw_brick((211+(count_4*22)),(453-(count_3*22)),0);

		   setcolor(8);
		     rectangle((210+(count_4*22)),(452-(count_3*22)),
				      (232+(count_4*22)),(474-(count_3*22)));
		}

	     sound((300*count_3));
	     delay(150);
	     nosound( );
	  }
    }

 /*************************************************************************/
 //----------------------  swap_elements(int &,int &)  -------------------//
 /*************************************************************************/

 void General::swap_elements(int &element_1,int &element_2)
    {
       int temp=0;

       temp=element_1;
       element_1=element_2;
       element_2=temp;
    }

 /*************************************************************************/
 //-------------------------  show_closing( )  ---------------------------//
 /*************************************************************************/

 void General::show_closing( )
    {
       delay(500);

       for(int count_1=0;count_1<20;count_1++)
	  {
	     for(int count_2=0;count_2<10;count_2++)
		{
		   setfillstyle(1,0);
		     bar((211+(count_2*22)),(35+(count_1*22)),
				       (231+(count_2*22)),(55+(count_1*22)));

		   draw_brick((211+(count_2*22)),(35+(count_1*22)),8);

		   setcolor(0);
		     rectangle((210+(count_2*22)),(34+(count_1*22)),
				       (232+(count_2*22)),(56+(count_1*22)));
		}

	     sound((300*count_1));
	     delay(150);
	     nosound( );
	  }

       delay(500);
       cleardevice( );

       show_top_ten_players( );

       for(int count_3=0;count_3<5000;count_3++)
	  {
	     delay(1);

	     if(kbhit( ))
		{
		   if(int(getch( ))==13)
		      break;
		}
	  }
    }

 /*************************************************************************/
 //-----------------------  get_delay(const int )  -----------------------//
 /*************************************************************************/

 const int General::get_delay( )
    {
       return ((500-(game_speed*50)));
    }

 /*************************************************************************/
 //-------------------  delay_between_move(const int)  -------------------//
 /*************************************************************************/

 const int General::delay_between_move( )
    {
       int delay_count=0;

       delay_count=get_delay( );

       for(int count=0;count<delay_count;count++)
	  {
	     if(kbhit( ))
		break;

	     delay(1);
	  }

       return delay_count;
    }

 /*************************************************************************/
 //--------------------  check_and_increase_speed( )  --------------------//
 /*************************************************************************/

 void General::check_and_increase_speed( )
    {
       if(column_counter==30 || column_counter==60 ||
	     column_counter==90 || column_counter==115 ||
	      column_counter==140 || column_counter==165 ||
		 column_counter==185 || column_counter==205 ||
		     column_counter==220 || column_counter==230)
	  {
	     score+=5000;
	     game_speed++;

	     call_bell( );

	     for(int count_1=0;count_1<20;count_1++)
		{
		   for(int count_2=0;count_2<10;count_2++)
		      array[count_1][count_2]=0;
		}

	     show_game_speed( );
	     show_player_score( );
	     check_and_replace_record( );
	  }
    }

 /************************************************************************/
 //-----------------------------  call_bell( )  -------------------------//
 /************************************************************************/

 void General::call_bell( )
    {
       for(int count=0;count<15;count++)
	  {
	     sound(800*count);
	     delay(100);
	     nosound( );

	     sound(800*count);
	     delay(100);
	     nosound( );
	  }
    }

 /*************************************************************************/
 //----------------------  check_end_condition( )  -----------------------//
 /*************************************************************************/

 const int General::check_end_condition( )
    {
       int flag=0;

       for(int count=0;count<10;count++)
	  {
	     if(array[19][count])
		{
		   flag=1;

		   break;
		}
	  }

       return flag;
    }

 /*************************************************************************/
 //----------------------  show_top_ten_players( )  ----------------------//
 /*************************************************************************/

 void General::show_top_ten_players( )
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

       Bevel Top_ten_players;

       Top_ten_players.init(31,24,605,454,THICK,8);
       Top_ten_players.show( );

       settextstyle(4,0,5);
	 write_bold_text(150,30,"Top Ten Players",14);
	 write_bold_text(148,35,"____________",7);

       setfillstyle(1,9);
	  bar(50,113,590,115);
	  bar(50,120,590,155);

       for(int count_3=0;count_3<=10;count_3++)
	  bar(50,(160+(25*count_3)),590,(162+(25*count_3)));

	  bar(50,(138+(25*count_3)),590,(145+(25*count_3)));

       settextstyle(2,0,8);
	 write_bold_text(75,122,"Rank   Name      Score     Speed",10);

       fstream file("Columns.mts",ios::in|ios::nocreate);

       if(!file)
	  {
	     fstream File("Columns.mts",ios::out);

	     for(int count_4=0;count_4<10;count_4++)
		File<<"NoName ±0 ±0 ±"<<endl;

	     File.close( );
	  }

       file.close( );

       fstream File("Columns.mts",ios::in|ios::out);

       int x=75;
       int y=164;
       int flag=0;

       char Rank[10]={NULL};
       char Name[15]={NULL};
       char Score[15]={NULL};
       char Speed[10]={NULL};
       char String[80]={NULL};

       char Player_score[15]={NULL};
       char Game_speed[10]={NULL};

       fstream Temp_file("temp.mts",ios::out);

       for(int count_5=0;count_5<10;count_5++)
	  {
	     strset(String,NULL);
	     strset(Rank,NULL);
	     strset(Name,NULL);
	     strset(Score,NULL);
	     strset(Speed,NULL);
	     strset(Player_score,NULL);
	     strset(Game_speed,NULL);

	     File.getline(String,80);

	     int count_6=0;

	     for(int count_7=0;count_7<3;count_7++)
		{
		   int count_8=0;

		   do
		      {
			 if(count_7==0)
			    Name[count_8]=String[count_6];

			 else if(count_7==1)
			    Score[count_8]=String[count_6];

			 else if(count_7==2)
			    Speed[count_8]=String[count_6];

			 count_6++;
			 count_8++;
		      }
		   while(String[count_6]!=' ' && String[count_6+1]!='±');

		   count_6+=2;
		}

	     if(score>(atoi(Score)) && !flag && score>0)
		{
		   ultoa(score,Player_score,10);
		   itoa(game_speed,Game_speed,10);

		   Temp_file<<Player_name<<" ±"<<Player_score<<" ±"<<
						      Game_speed<<" ±"<<endl;
		   Temp_file<<String<<endl;

		   flag=1;

		   setfillstyle(1,12);
		     bar(50,(y+(25*count_5)),590,(y+19+(25*count_5)));

		   strset(Rank,NULL);
		   itoa((count_5+1),Rank,10);

		   setcolor(11);
		   settextstyle(2,0,6);
		     outtextxy(x,(y+(25*count_5)),Rank);
		     outtextxy(x+1,(y+(25*count_5)),Rank);

		     outtextxy((105+x),(y+(25*count_5)),Player_name);
		     outtextxy((106+x),(y+(25*count_5)),Player_name);

		     outtextxy((257+x),(y+(25*count_5)),Player_score);
		     outtextxy((258+x),(y+(25*count_5)),Player_score);

		     outtextxy((411+x),(y+(25*count_5)),Game_speed);
		     outtextxy((412+x),(y+(25*count_5)),Game_speed);

		   if(count_5<=8)
		      {
			 y+=25;

			 strset(Rank,NULL);
			 itoa((count_5+2),Rank,10);

			 outtextxy(x,(y+(25*count_5)),Rank);
			 outtextxy(x+1,(y+(25*count_5)),Rank);

			 outtextxy((105+x),(y+(25*count_5)),Name);
			 outtextxy((106+x),(y+(25*count_5)),Name);

			 outtextxy((257+x),(y+(25*count_5)),Score);
			 outtextxy((258+x),(y+(25*count_5)),Score);

			 outtextxy((411+x),(y+(25*count_5)),Speed);
			 outtextxy((412+x),(y+(25*count_5)),Speed);
		      }
		}

	     else if(score==(atoi(Score)) && !flag && score>0)
		{
		   if(game_speed>=(atoi(Speed)))
		      {
			 ultoa(score,Player_score,10);
			 itoa(game_speed,Game_speed,10);

			 strset(Rank,NULL);
			 itoa((count_5+1),Rank,10);

			 Temp_file<<Player_name<<" ±"<<Player_score
					      <<" ±"<<Game_speed<<" ±"<<endl;

			 Temp_file<<String<<endl;

			 setfillstyle(1,12);
			   bar(50,(y+(25*count_5)),590,(y+19+(25*count_5)));

			 setcolor(11);
			 settextstyle(2,0,6);
			   outtextxy(x,(y+(25*count_5)),Rank);
			   outtextxy(x+1,(y+(25*count_5)),Rank);

			   outtextxy((105+x),(y+(25*count_5)),Player_name);
			   outtextxy((106+x),(y+(25*count_5)),Player_name);

			   outtextxy((257+x),(y+(25*count_5)),Player_score);
			   outtextxy((258+x),(y+(25*count_5)),Player_score);

			   outtextxy((411+x),(y+(25*count_5)),Game_speed);
			   outtextxy((412+x),(y+(25*count_5)),Game_speed);

			 if(count_5<=8)
			    {
			       y+=25;

			       strset(Rank,NULL);
			       itoa((count_5+2),Rank,10);

			       outtextxy(x,(y+(25*count_5)),Rank);
			       outtextxy(x+1,(y+(25*count_5)),Rank);

			       outtextxy((105+x),(y+(25*count_5)),Name);
			       outtextxy((106+x),(y+(25*count_5)),Name);

			       outtextxy((257+x),(y+(25*count_5)),Score);
			       outtextxy((258+x),(y+(25*count_5)),Score);

			       outtextxy((411+x),(y+(25*count_5)),Speed);
			       outtextxy((412+x),(y+(25*count_5)),Speed);
			    }
		      }

		   else
		      {
			 Temp_file<<String<<endl;

			 ultoa(score,Player_score,10);
			 itoa(game_speed,Game_speed,10);

			 strset(Rank,NULL);
			 itoa((count_5+1),Rank,10);

			 Temp_file<<Player_name<<" ±"<<Player_score
					      <<" ±"<<Game_speed<<" ±"<<endl;

			 setcolor(11);
			 settextstyle(2,0,6);
			   outtextxy(x,(y+(25*count_5)),Rank);
			   outtextxy(x+1,(y+(25*count_5)),Rank);

			   outtextxy((105+x),(y+(25*count_5)),Name);
			   outtextxy((106+x),(y+(25*count_5)),Name);

			   outtextxy((257+x),(y+(25*count_5)),Score);
			   outtextxy((258+x),(y+(25*count_5)),Score);

			   outtextxy((411+x),(y+(25*count_5)),Speed);
			   outtextxy((412+x),(y+(25*count_5)),Speed);

			 if(count_5<=8)
			    {
			       y+=25;

			       strset(Rank,NULL);
			       itoa((count_5+2),Rank,10);

			       setfillstyle(1,12);
				 bar(50,(y+(25*count_5)),590,
							(y+19+(25*count_5)));

			       outtextxy(x,(y+(25*count_5)),Rank);
			       outtextxy(x+1,(y+(25*count_5)),Rank);

			       outtextxy((105+x),(y+(25*count_5)),
							       Player_name);
			       outtextxy((106+x),(y+(25*count_5)),
							       Player_name);

			       outtextxy((257+x),(y+(25*count_5)),
							       Player_score);
			       outtextxy((258+x),(y+(25*count_5)),
							       Player_score);

			       outtextxy((411+x),(y+(25*count_5)),Game_speed);
			       outtextxy((412+x),(y+(25*count_5)),Game_speed);
			    }
		      }

		   flag=1;
		}

	     else
		{
		   Temp_file<<String<<endl;

		   if(!flag)
		      {
			 strset(Rank,NULL);
			 itoa((count_5+1),Rank,10);
		      }

		   else
		      {
			 strset(Rank,NULL);
			 itoa((count_5+2),Rank,10);
		      }

		   setcolor(11);
		   settextstyle(2,0,6);
		     outtextxy(x,(y+(25*count_5)),Rank);
		     outtextxy(x+1,(y+(25*count_5)),Rank);

		     outtextxy((105+x),(y+(25*count_5)),Name);
		     outtextxy((106+x),(y+(25*count_5)),Name);

		     outtextxy((257+x),(y+(25*count_5)),Score);
		     outtextxy((258+x),(y+(25*count_5)),Score);

		     outtextxy((411+x),(y+(25*count_5)),Speed);
		     outtextxy((412+x),(y+(25*count_5)),Speed);
		}

	     if(flag && count_5==8)
		break;
	  }

       File.close( );
       Temp_file.close( );

       remove("Columns.mts");
       rename("temp.mts","Columns.mts");

       File.close( );
    }

 /************************************************************************/
 /************************************************************************/
 //-----------------------------  The End  ------------------------------//
 /************************************************************************/
 /************************************************************************/
