
  /************************************************************************
  *************************************************************************
  ***************************  General.h  *********************************
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
 //-------------------------  HEADER FILES  ------------------------------//
 /*************************************************************************/
 /*************************************************************************/

 /*************************************************************************/
 //-----------------------------  Built-In  ------------------------------//
 /*************************************************************************/

 # include <time.h>

 /*************************************************************************/
 //------------------------  User Defined  ------------------------------//
 /*************************************************************************/

 # include   "Gui.h"
 # include "Mouse.h"

 /*************************************************************************/
 /*************************************************************************/
 //----------------------  Class Definitions  ----------------------------//
 /*************************************************************************/
 /*************************************************************************/

 /*************************************************************************/
 //------------------------  Class Graphics  -----------------------------//
 /*************************************************************************/

 class Graphics
       {
	  private:
		unsigned long record_score;

		int record_speed;

		char Record_score[20];
		char Record_speed[10];
		char Record_player_name[20];

	  protected:
		unsigned long score;

		int game_speed;
		int column_counter;

		int array[32][10];

		char Player_name[15];

		Button Play_pause;
		Button Exit;

	  public:
		Graphics( );
		~Graphics( )  {  }

		void show_selection_screen( );
		void about_programmer(Button,const int);
		void show_game_speed( );
		void show_main_screen( );
		void show_player_name( );
		void show_player_score( );
		void show_tetris_screen( );
		void how_to_play( );
		void show_record( );
		void check_and_replace_record( );
		void draw_brick(const int,const int,const int);
		void draw_column_0(const int,const int);
		void draw_column_1(const int,const int);
		void draw_column_2(const int,const int);
		void draw_column_3(const int,const int);
		void draw_column_4(const int,const int);
		void draw_column_5(const int,const int);
		void draw_column_6(const int,const int);
		void write_bold_text(const int,const int,const char *,
								 const int);
       };

 /*************************************************************************/
 //---------------------------  Class General  ---------------------------//
 /*************************************************************************/

 class General:public Graphics
       {
	  public:
		General( )  {  }
		~General( )  {  }

		const int get_delay( );
		const int delay_between_move( );
		const int check_end_condition( );

		void call_bell( );
		void show_opening( );
		void show_closing( );
		void swap_elements(int &,int &);
		void check_and_increase_speed( );
		void show_top_ten_players( );
       };

 /*************************************************************************/
 //---------------------------  Class Columns  ---------------------------//
 /*************************************************************************/

 class Columns:public General
       {
	  private:
		int columns_shape[3];

	  public:
		Columns( );
		~Columns( )  {  }

		const int check_left_move(const int []);
		const int check_down_move(const int []);
		const int check_right_move(const int []);

		void play_game( );
		void show_next( );
		void draw_columns( );
		void remove_columns( );
		void get_columns_shape(int *);
		void change_columns_shape(int *);
		void swap_left_move(const int []);
		void swap_down_move(const int []);
		void swap_right_move(const int []);
       };

 /************************************************************************/
 /************************************************************************/
 //----------------------------  THE  END  ------------------------------//
 /************************************************************************/
 /************************************************************************/

