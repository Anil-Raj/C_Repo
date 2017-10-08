
  /************************************************************************
  *************************************************************************
  ***************************  Column-1.cpp  ******************************
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

 /*************************************************************************/
 //--------------------------  Columns( )  -------------------------------//
 /*************************************************************************/

 Columns::Columns( )
    {
       for(int count=0;count<3;count++)
	  columns_shape[count]=0;
    }

 /*************************************************************************/
 //----------------------  get_columns_shape(int *)  ---------------------//
 /*************************************************************************/

 void Columns::get_columns_shape(int *shape_coordinates)
    {
       shape_coordinates[0]=19;
       shape_coordinates[1]=5;
       shape_coordinates[2]=18;
       shape_coordinates[3]=5;
       shape_coordinates[4]=17;
       shape_coordinates[5]=5;

       array[19][5]=columns_shape[0];
       array[18][5]=columns_shape[1];
       array[17][5]=columns_shape[2];

       for(int count=0;count<3;count++)
	  columns_shape[count]=0;

       int column=0;
       int selected=0;

       time_t t;

       srand((unsigned) time(&t));

       do
	  {
	     column=(rand( )%7);

	     if(column!=0)
		{
		   columns_shape[selected]=column;

		   selected++;
		}
	  }
       while(selected!=3);

       show_next( );
    }

 /*************************************************************************/
 //--------------------------  draw_columns( )  --------------------------//
 /*************************************************************************/

 void Columns::draw_columns( )
    {
       int x=0;
       int y=0;

       for(int count_1=0;count_1<20;count_1++)
	  {
	     for(int count_2=0;count_2<10;count_2++)
		{
		   x=(221+(count_2*22));
		   y=(463-(count_1*22));

		   switch(array[count_1][count_2])
		      {
			 case 0 :  draw_column_0(x,y);
				   break;

			 case 1 :  draw_column_1(x,y);
				   break;

			 case 2 :  draw_column_2(x,y);
				   break;

			 case 3 :  draw_column_3(x,y);
				   break;

			 case 4 :  draw_column_4(x,y);
				   break;

			 case 5 :  draw_column_5(x,y);
				   break;

			 case 6 : draw_column_6(x,y);
				   break;
		      }
		}
	  }
    }

 /*************************************************************************/
 //---------------------------  show_next( )  ----------------------------//
 /*************************************************************************/

 void Columns::show_next( )
    {
	setfillstyle(1,0);
	  bar(460,330,610,450);

       int x=520;
       int y=368;

       for(int count=0;count<3;count++)
	  {
	     switch(columns_shape[count])
		{
		   case 1 : draw_column_1(x,y);
			    break;

		   case 2 : draw_column_2(x,y);
			    break;

		   case 3 : draw_column_3(x,y);
			    break;

		   case 4 : draw_column_4(x,y);
			    break;

		   case 5 : draw_column_5(x,y);
			    break;

		   case 6 : draw_column_6(x,y);
			    break;
		}

	     y+=22;
	  }
    }

 /*************************************************************************/
 //-------------------  check_left_move(const int [])  -------------------//
 /*************************************************************************/

 const int Columns::check_left_move(const int column_shape[])
    {
       int flag=1;

       int x=column_shape[0];
       int y=column_shape[1];

       if(array[x][y-1]==0 && array[x-1][y-1]==0 &&
					       array[x-2][y-1]==0 && y>0)
	  flag=0;

       return flag;
    }

 /*************************************************************************/
 //------------------  check_right_move(const int [])  -------------------//
 /*************************************************************************/

 const int Columns::check_right_move(const int column_shape[])
    {
       int flag=1;

       int x=column_shape[0];
       int y=column_shape[1];

       if(array[x][y+1]==0 && array[x-1][y+1]==0 &&
						array[x-2][y+1]==0 && y<9)
	  flag=0;

       return flag;
    }

 /*************************************************************************/
 //-------------------  check_down_move(const int [])  -------------------//
 /*************************************************************************/

 const int Columns::check_down_move(const int column_shape[])
    {
       int flag=1;

       int x=column_shape[4];
       int y=column_shape[5];

       if(array[x-1][y]==0 && x>0)
	  flag=0;

       return flag;
    }

 /*************************************************************************/
 //---------------------  swap_left_move(const int [])  ------------------//
 /*************************************************************************/

 void Columns::swap_left_move(const int column_shape[])
    {
       int x_1=column_shape[0];
       int y_1=column_shape[1];

       int x_2=column_shape[2];
       int y_2=column_shape[3];

       int x_3=column_shape[4];
       int y_3=column_shape[5];

       swap_elements(array[x_1][y_1],array[x_1][y_1-1]);
       swap_elements(array[x_2][y_2],array[x_2][y_2-1]);
       swap_elements(array[x_3][y_3],array[x_3][y_3-1]);
    }

 /*************************************************************************/
 //--------------------  swap_right_move(const int [])  ------------------//
 /*************************************************************************/

 void Columns::swap_right_move(const int column_shape[])
    {
       int x_1=column_shape[0];
       int y_1=column_shape[1];

       int x_2=column_shape[2];
       int y_2=column_shape[3];

       int x_3=column_shape[4];
       int y_3=column_shape[5];

       swap_elements(array[x_1][y_1],array[x_1][y_1+1]);
       swap_elements(array[x_2][y_2],array[x_2][y_2+1]);
       swap_elements(array[x_3][y_3],array[x_3][y_3+1]);
    }

 /*************************************************************************/
 //---------------------  swap_down_move(const int [])  ------------------//
 /*************************************************************************/

 void Columns::swap_down_move(const int column_shape[])
    {
       int x_1=column_shape[0];
       int y_1=column_shape[1];

       int x_2=column_shape[2];
       int y_2=column_shape[3];

       int x_3=column_shape[4];
       int y_3=column_shape[5];

       swap_elements(array[x_3][y_3],array[x_3-1][y_3]);
       swap_elements(array[x_2][y_2],array[x_2-1][y_2]);
       swap_elements(array[x_1][y_1],array[x_1-1][y_1]);

       int x=(221+(y_1*22));
       int y=(463-(x_1*22));

       setfillstyle(1,0);
	 bar((x-10),(y-10),(x+10),(y+10));
	 bar((x-10),(y+12),(x+10),(y+32));
	 bar((x-10),(y+34),(x+10),(y+54));
    }

 /*************************************************************************/
 //--------------------  change_columns_shape(int *)  --------------------//
 /*************************************************************************/

 void Columns::change_columns_shape(int *column_shape)
    {
       int temp=0;

       int x_1=column_shape[0];
       int y_1=column_shape[1];

       int x_2=column_shape[2];
       int y_2=column_shape[3];

       int x_3=column_shape[4];
       int y_3=column_shape[5];

       temp=array[x_3][y_3];
       array[x_3][y_3]=array[x_2][y_2];
       array[x_2][y_2]=array[x_1][y_1];
       array[x_1][y_1]=temp;

       int x=(221+(y_1*22));
       int y=(463-(x_1*22));

       setfillstyle(1,0);
	 bar((x-10),(y-10),(x+10),(y+10));
	 bar((x-10),(y+12),(x+10),(y+32));
	 bar((x-10),(y+34),(x+10),(y+54));

       draw_columns( );
    }

 /*************************************************************************/
 //------------------------  remove_columns( )  --------------------------//
 /*************************************************************************/

 void Columns::remove_columns( )
    {
       int flag=0;
       int count_1=0;

       int position[10][3]={NULL};

       do
	  {
	     flag=0;
	     count_1=0;

	     for(int count_2=0;count_2<10;count_2++)
		{
		   for(int count_3=0;count_3<3;count_3++)
		      position[count_2][count_3]=0;
		}

	     for(int count_4=0;count_4<20;count_4++)
		{
		   for(int count_5=0;count_5<8;count_5++)
		      {
			 if(array[count_4][count_5]==
					       array[count_4][count_5+1] &&
			    array[count_4][count_5+1]==
					       array[count_4][count_5+2] &&
						  array[count_4][count_5]!=0)
			    {
			       position[count_1][0]=1;
			       position[count_1][1]=count_4;
			       position[count_1][2]=count_5;

			       count_1++;
			    }
		      }
		}

	     for(int count_6=0;count_6<18;count_6++)
		{
		   for(int count_7=0;count_7<10;count_7++)
		      {
			 if(array[count_6][count_7]==
					      array[count_6+1][count_7] &&
			    array[count_6+1][count_7]==
					      array[count_6+2][count_7] &&
						 array[count_6][count_7]!=0)
			    {
			       position[count_1][0]=2;
			       position[count_1][1]=count_6;
			       position[count_1][2]=count_7;

			       count_1++;
			    }
		      }
		}

	     for(int count_8=0;count_8<18;count_8++)
		{
		   for(int count_9=0;count_9<8;count_9++)
		      {
			 if(array[count_8][count_9]==
					     array[count_8+1][count_9+1] &&
			    array[count_8+1][count_9+1]==
					     array[count_8+2][count_9+2] &&
						 array[count_8][count_9]!=0)
			    {
			       position[count_1][0]=3;
			       position[count_1][1]=count_8;
			       position[count_1][2]=count_9;

			       count_1++;
			    }

			 if(array[count_8+2][count_9]==
					     array[count_8+1][count_9+1] &&
			    array[count_8+1][count_9+1]==
					       array[count_8][count_9+2] &&
						array[count_8][count_9+2]!=0)
			    {
			       position[count_1][0]=4;
			       position[count_1][1]=count_8;
			       position[count_1][2]=count_9+2;

			       count_1++;
			    }
		      }
		}

	     if(position[0][0]!=0)
		flag=1;

	     int count_10=0;

	     while(position[count_10][0]!=0)
		{
		   int direction=position[count_10][0];
		   int x=position[count_10][1];
		   int y=position[count_10][2];

		   if(direction==1)
		      {
			 array[x][y]=0;
			 array[x][y+1]=0;
			 array[x][y+2]=0;
		      }

		   else if(direction==2)
		      {
			 array[x][y]=0;
			 array[x+1][y]=0;
			 array[x+2][y]=0;
		      }

		   else if(direction==3)
		      {
			 array[x][y]=0;
			 array[x+1][y+1]=0;
			 array[x+2][y+2]=0;
		      }

		   else if(direction==4)
		      {
			 array[x][y]=0;
			 array[x+1][y-1]=0;
			 array[x+2][y-2]=0;
		      }

		   score+=200;
		   count_10++;
		   column_counter++;
		}

	     if(position[0][0]!=0)
		{
		   sound(2500);
		   delay(300);
		   nosound( );

		   draw_columns( );
		   show_player_score( );
		   check_and_increase_speed( );
		   check_and_replace_record( );

		   delay(100);
		}

	     for(int count_11=0;count_11<19;count_11++)
		{
		   for(int count_12=0;count_12<19;count_12++)
		      {
			 for(int count_13=0;count_13<10;count_13++)
			    {
			       if(array[count_12][count_13]==0)
				  {
				      for(int count_14=count_12;
						      count_14<19;count_14++)
					 swap_elements(
					     array[count_14][count_13],
						array[count_14+1][count_13]);
				  }
			    }
		      }
		}

	     draw_columns( );
	  }
       while(flag);
    }

 /************************************************************************/
 /************************************************************************/
 //----------------------------  The  End  ------------------------------//
 /************************************************************************/
 /************************************************************************/
