
  /************************************************************************
  *************************************************************************
  ***************************  Column-2.cpp  ******************************
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
 //-----------------------------  Header Files  --------------------------//
 /*************************************************************************/
 /*************************************************************************/

 /*************************************************************************/
 //---------------------------  User Defined  ----------------------------//
 /*************************************************************************/

 # include "General.h"

 /*************************************************************************/
 /*************************************************************************/
 //----------------------  Class Function Definitions  -------------------//
 /*************************************************************************/
 /*************************************************************************/

 /*************************************************************************
  *************************************************************************
  **************************  Class Columns  ******************************
  *************************************************************************
  ************************************************************************/

 /************************************************************************/
 //----------------------------  play_game( )  --------------------------//
 /************************************************************************/

 void Columns::play_game( )
    {
       show_opening( );

       char Key_1=NULL;
       char Key_2=NULL;

       int key_code_1=0;
       int key_code_2=0;

       int pause=0;
       int left_right_down=0;

       int *shape_coordinates;

       int column=0;
       int selected=0;

       time_t t;

       srand((unsigned) time(&t));

       do
	  {
	     column=(rand( )%10);

	     if(column!=0 && column<7)
		{
		   columns_shape[selected]=column;

		   selected++;
		}
	  }
       while(selected!=3);

       do
	  {
	     selected=0;

	     for(int count=0;count<6;count++)
		shape_coordinates[count]=0;

	     if(!(pause%2))
		{
		   get_columns_shape(shape_coordinates);
		   show_game_speed( );
		   draw_columns( );
		}

	     do
		{
		   left_right_down=0;

		   if(kbhit( ))
		      {
			 Key_1=NULL;
			 Key_2=NULL;

			 Key_1=getch( );
			 key_code_1=int(Key_1);

			 if(key_code_1!=0)
			    {
			       if(key_code_1==112 || key_code_1==80)
				  {
				     Play_pause.press_and_release(KEY_BOARD);

				     if((pause%2)==1)
					Play_pause.init(217,7,"Play/Pause",
								FLAT,2,-4,9);

				     else
					Play_pause.init(217,7,"Play/Pause",
							      FLAT,2,-4,9,5);

				     Play_pause.show( );

				     pause++;
				  }

			       else if(key_code_1==32 && (pause%2)==0)
				  {
				     change_columns_shape(shape_coordinates);

				     left_right_down=3;

				     selected=
					  check_down_move(shape_coordinates);

				     delay_between_move( );
				  }

			       else if(key_code_1==27 || key_code_1==69 ||
							     key_code_1==101)
				  {
				     Exit.press_and_release(KEY_BOARD);

				     delay(500);
				     exit(1);
				  }

			       else
				  {
				     left_right_down=3;

				     selected=
					  check_down_move(shape_coordinates);

				     delay_between_move( );
				  }
			    }

			 else if(key_code_1==0)
			    {
			       Key_2=getch( );
			       key_code_2=int(Key_2);

			       if(key_code_2==25)
				  {
				     Play_pause.press_and_release(KEY_BOARD);

				     if((pause%2)==1)
					Play_pause.init(217,7,"Play/Pause",
								FLAT,2,-4,9);

				     else
					Play_pause.init(217,7,"Play/Pause",
							      FLAT,2,-4,9,5);

				     Play_pause.show( );

				     pause++;
				  }

			       else if(key_code_2==18 || key_code_2==107 ||
							      key_code_2==45)
				  {
				     Exit.press_and_release(KEY_BOARD);

				     delay(500);
				     exit(1);
				  }

			       else if( (key_code_2==80 || key_code_2==72)
							     && (pause%2)==0)
				  {
				     left_right_down=3;

				     selected=
					  check_down_move(shape_coordinates);
				  }

			       else if(key_code_2==75 && (pause%2)==0)
				  {
				     selected=
					  check_left_move(shape_coordinates);
				     left_right_down=1;

				     if(selected)
					{
					   selected=0;
					   left_right_down=3;

					   selected=check_down_move(
							  shape_coordinates);

					   delay_between_move( );
					}
				  }

			       else if(key_code_2==77 && (pause%2)==0)
				  {
				     selected=
					 check_right_move(shape_coordinates);
				     left_right_down=2;

				     if(selected)
					{
					   selected=0;
					   left_right_down=3;

					   selected=check_down_move(
							  shape_coordinates);

					   delay_between_move( );
					}
				  }

			       else
				  {
				     left_right_down=3;

				     selected=
					  check_down_move(shape_coordinates);

				     delay_between_move( );
				  }
			    }
		      }

		   else
		      {
			 if(delay_between_move( )==get_delay( ))
			    {
			       left_right_down=3;

			       selected=check_down_move(shape_coordinates);
			    }
		      }

		   if(!selected && !(pause%2) && left_right_down)
		      {
			 if(left_right_down==1)
			    {
			       swap_left_move(shape_coordinates);

			       shape_coordinates[1]-=1;
			       shape_coordinates[3]-=1;
			       shape_coordinates[5]-=1;
			    }

			 else if(left_right_down==2)
			    {
			       swap_right_move(shape_coordinates);

			       shape_coordinates[1]+=1;
			       shape_coordinates[3]+=1;
			       shape_coordinates[5]+=1;
			    }

			 else if(left_right_down==3)
			    {
			       swap_down_move(shape_coordinates);

			       shape_coordinates[0]-=1;
			       shape_coordinates[2]-=1;
			       shape_coordinates[4]-=1;
			    }

			 draw_columns( );
		      }
		}
	     while(!selected);

	     if(!(pause%2))
		{
		   sound(2500);
		   delay(30);
		   nosound( );
		}

	     remove_columns( );

	     if(check_end_condition( ))
		break;
	  }
       while(1);

       show_closing( );
    }

 /************************************************************************/
 /************************************************************************/
 //----------------------------  The  End  ------------------------------//
 /************************************************************************/
 /************************************************************************/

