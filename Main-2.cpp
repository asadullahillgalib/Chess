#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
# include "iGraphics.h"

int mposx,  mposy;

//for move
int num=0;
int m_x,m_y;
int menu1=0,menu2=0;
int n=0,m=0,i=1;
int flag=1,flag2=1;
int j,k;
char s[10];
bool cmp=true;
int selectedIndex;
int bg=1;
//Methods

//For Initializeing.
void Initialize();

//For movement.
void Move();
void Click2();
void pawn();
void King();
void knight();
void rook();
void bishop();
void queen();

//For desining the bord.
void Board ();
void guti();

//For wiping a Reactangale.
void Menu1();
void Menu2();


//Structure for the Court.
struct Board{
	char letter[10];
	char colour;
	char gcolour ;
	int mx;
	int my;
	int index;
	bool valid;

}a[65];

struct Pawn{
	int index;
	char letter[10];
	char colour ;
	int mx;
	int my;
	bool valid;
}p[65];



int isSelectedX, isSelectedY;
int isSelectedX2, isSelectedY2;
int isn;
bool isSelected = false;

struct board
{
	int r;
	int g;
	int b;
    int xCordinate;
    int yCordinate;
    char letter[100];
    bool isChessPiece;
	int number;
} chessPiece[33];


void Initialize(){

	//printf("check\n");

	strcpy(a[0].letter,"");

	a[1].index=1;
	strcpy(a[1].letter,"Rook");
	a[1].colour='B';
	a[1].gcolour='w';
	a[1].mx=1;
	a[1].my=1;
	a[1].valid=true;

	a[2].index=2;
	strcpy(a[2].letter,"Knight");
	a[2].colour='w';
	a[2].gcolour='w';
	a[2].mx=81;
	a[2].my=1;
	a[2].valid=true;

	a[3].index=3;
	strcpy(a[3].letter,"Bishop");
	a[3].colour='B';
	a[3].gcolour='w';
	a[3].mx=161;
	a[3].my=1;
	a[3].valid=true;

    a[4].index=4;
	strcpy(a[4].letter,"Queen");
	a[4].colour='w';
	a[4].gcolour='w';
	a[4].mx=241;
	a[4].my=1;
	a[4].valid=true;

	a[5].index=5;
	strcpy(a[5].letter,"King");
	a[5].colour='B';
	a[5].gcolour='w';
	a[5].mx=321;
	a[5].my=1;
	a[5].valid=true;

	a[6].gcolour='w';
	a[7].gcolour='w';
	a[8].gcolour='w';
	a[9].gcolour='w';
	a[10].gcolour='w';
	a[11].gcolour='w';
	a[12].gcolour='w';
	a[13].gcolour='w';
	a[14].gcolour='w';
	a[15].gcolour='w';
	a[16].gcolour='w';
	
	a[49].gcolour='B';
	a[50].gcolour='B';
	a[51].gcolour='B';
	a[52].gcolour='B';
	a[53].gcolour='B';
	a[54].gcolour='B';
	a[55].gcolour='B';
	a[56].gcolour='B';
	a[57].gcolour='B';
	a[58].gcolour='B';
	a[59].gcolour='B';
	a[60].gcolour='B';
	a[61].gcolour='B';
	a[62].gcolour='B';
	a[63].gcolour='B';
	a[64].gcolour='B';
	
	
	
	





    a[6].index=6;
	strcpy(a[6].letter,"Bishop");
	a[6].colour='w';
	a[6].mx=401;
	a[6].my=1;
	a[6].valid=true;

	a[7].index=7;
	strcpy(a[7].letter,"Knight");
	a[7].colour='B';
	a[7].mx=481;
	a[7].my=1;
	a[7].valid=true;

    a[8].index=8;
	strcpy(a[8].letter,"Rook");
	a[8].colour='w';
	a[8].mx=561;
	a[8].my=1;
	a[8].valid=true;

    a[9].index=9;
	strcpy(a[9].letter,"Solder");
	a[9].colour='w';
	a[9].mx=1;
	a[9].my=81;
	a[9].valid=true;


    a[10].index=10;
	strcpy(a[10].letter,"Solder");
	a[10].colour='B';
	a[10].mx=81;
	a[10].my=81;
	a[10].valid=true;

    a[11].index=11;
	strcpy(a[11].letter,"Solder");
	a[11].colour='w';
	a[11].mx=161;
	a[11].my=81;
	a[11].valid=true;

    a[12].index=12;
	strcpy(a[12].letter,"Solder");
	a[12].colour='B';
	a[12].mx=241;
	a[12].my=81;
	a[12].valid=true;



        a[13].index=13;
	strcpy(a[13].letter,"Solder");
	a[13].colour='w';
	a[13].mx=321;
	a[13].my=81;
	a[13].valid=true;


         a[14].index=14;
	strcpy(a[14].letter,"Solder");
	a[14].colour='B';
	a[14].mx=401;
	a[14].my=81;
	a[14].valid=true;

          a[15].index=15;
	strcpy(a[15].letter,"Solder");
	a[15].colour='w';
	a[15].mx=481;
	a[15].my=81;
	a[15].valid=true;


         a[16].index=16;
	strcpy(a[16].letter,"Solder");
	a[16].colour='B';
	a[16].mx=561;
	a[16].my=81;
	a[16].valid=true;


    a[17].index=17;
	strcpy(a[17].letter," ");
	a[17].colour='B';
	a[17].mx=1;
	a[17].my=161;
	a[17].valid=false;

     a[18].index=1;
	strcpy(a[18].letter," ");
	a[18].colour='w';
	a[18].mx=81;
	a[18].my=161;
	a[18].valid=false;


        a[19].index=19;
	strcpy(a[19].letter," ");
	a[19].colour='B';
	a[19].mx=161;
	a[19].my=161;
	a[19].valid=false;

        a[20].index=20;
	strcpy(a[20].letter," ");
	a[20].colour='w';
	a[20].mx=241;
	a[20].my=161;
	a[20].valid=false;


         a[21].index=21;
	strcpy(a[21].letter," ");
	a[21].colour='B';
	a[21].mx=321;
	a[21].my=161;
	a[21].valid=false;

       a[22].index=22;
	strcpy(a[22].letter," ");
	a[22].colour='w';
	a[22].mx=401;
	a[22].my=161;
	a[22].valid=false;


          a[23].index=23;
	strcpy(a[23].letter," ");
	a[23].colour='B';
	a[23].mx=481;
	a[23].my=161;
	a[23].valid=false;

         a[24].index=24;
	strcpy(a[24].letter," ");
	a[24].colour='w';
	a[24].mx=561;
	a[24].my=161;
	a[24].valid=false;


        a[25].index=25;
	strcpy(a[25].letter," ");
	a[25].colour='w';
	a[25].mx=1;
	a[25].my=241;
	a[25].valid=false;

        a[26].index=26;
	strcpy(a[26].letter," ");
	a[26].colour='B';
	a[26].mx=81;
	a[26].my=241;
	a[26].valid=false;


        a[27].index=27;
	strcpy(a[27].letter," ");
	a[27].colour='w';
	a[27].mx=161;
	a[27].my=241;
	a[27].valid=false;

        a[28].index=28;
	strcpy(a[28].letter," ");
	a[28].colour='B';
	a[28].mx=241;
	a[28].my=241;
	a[28].valid=false;


         a[29].index=29;
	strcpy(a[29].letter," ");
	a[29].colour='w';
	a[29].mx=321;
	a[29].my=241;
	a[29].valid=false;

       a[30].index=30;
	strcpy(a[30].letter," ");
	a[30].colour='B';
	a[30].mx=401;
	a[30].my=241;
	a[30].valid=false;


          a[31].index=31;
	strcpy(a[31].letter," ");
	a[31].colour='w';
	a[31].mx=481;
	a[31].my=241;
	a[31].valid=false;

         a[32].index=32;
	strcpy(a[32].letter,"Solder");
	a[32].colour='B';
	a[32].mx=561;
	a[32].my=241;
	a[32].valid=false;

    a[33].index=33;
	strcpy(a[33].letter,"");
	a[33].colour='B';
	a[33].mx=1;
	a[33].my=321;
	a[33].valid=false;

        a[34].index=34;
	strcpy(a[34].letter," ");
	a[34].colour='w';
	a[34].mx=81;
	a[34].my=321;
	a[34].valid=false;


        a[35].index=35;
	strcpy(a[35].letter," ");
	a[35].colour='B';
	a[35].mx=161;
	a[35].my=321;
	a[35].valid=false;

        a[36].index=36;
	strcpy(a[36].letter," ");
	a[36].colour='w';
	a[36].mx=241;
	a[36].my=321;
	a[36].valid=false;


         a[37].index=37;
	strcpy(a[37].letter," ");
	a[37].colour='B';
	a[37].mx=321;
	a[37].my=321;
	a[37].valid=false;

       a[38].index=38;
	strcpy(a[38].letter," ");
	a[38].colour='w';
	a[38].mx=401;
	a[38].my=321;
	a[38].valid=false;


          a[39].index=39;
	strcpy(a[39].letter," " );
	a[39].colour='B';
	a[39].mx=481;
	a[39].my=321;
	a[39].valid=false;

         a[40].index=40;
	strcpy(a[40].letter," ");
	a[40].colour='w';
	a[40].mx=561;
	a[40].my=321;
	a[40].valid=false;




        a[41].index=41;
	strcpy(a[41].letter," ");
	a[41].colour='w';
	a[41].mx=1;
	a[41].my=401;
	a[41].valid=false;

        a[42].index=42;
	strcpy(a[42].letter," ");
	a[42].colour='B';
	a[42].mx=81;
	a[42].my=401;
	a[42].valid=false;


        a[43].index=43;
	strcpy(a[43].letter," ");
	a[43].colour='w';
	a[43].mx=161;
	a[43].my=401;
	a[43].valid=false;

        a[44].index=44;
	strcpy(a[44].letter," ");
	a[44].colour='B';
	a[44].mx=241;
	a[44].my=401;
	a[44].valid=false;


         a[45].index=45;
	strcpy(a[45].letter," ");
	a[45].colour='w';
	a[45].mx=321;
	a[45].my=401;
	a[45].valid=false;

       a[46].index=46;
	strcpy(a[46].letter," ");
	a[46].colour='B';
	a[46].mx=401;
	a[46].my=401;
	a[46].valid=false;


          a[47].index=47;
	strcpy(a[47].letter," ");
	a[47].colour='w';
	a[47].mx=481;
	a[47].my=401;
	a[47].valid=false;

         a[48].index=48;
	strcpy(a[48].letter," ");
	a[48].colour='B';
	a[48].mx=561;
	a[48].my=401;
	a[48].valid=false;

      a[49].index=49;
	strcpy(a[49].letter,"Solder");
	a[49].colour='B';
	a[49].mx=1;
	a[49].my=481;
	a[49].valid=true;

          a[50].index=50;
	strcpy(a[50].letter,"Solder");
	a[50].colour='w';
	a[50].mx=81;
	a[50].my=481;
	a[50].valid=true;

         a[51].index=51;
	strcpy(a[51].letter,"Solder");
	a[51].colour='B';
	a[51].mx=161;
	a[51].my=481;
	a[51].valid=true;

        a[52].index=52;
	strcpy(a[52].letter,"Solder");
	a[52].colour='w';
	a[52].mx=241;
	a[52].my=481;
	a[52].valid=true;



        a[53].index=53;
	strcpy(a[53].letter,"Solder");
	a[53].colour='B';
	a[53].mx=321;
	a[53].my=481;
	a[53].valid=true;


         a[54].index=54;
	strcpy(a[54].letter,"Solder");
	a[54].colour='w';
	a[54].mx=401;
	a[54].my=481;
	a[54].valid=true;

          a[55].index=55;
	strcpy(a[55].letter,"Solder");
	a[55].colour='B';
	a[55].mx=481;
	a[55].my=481;
	a[55].valid=true;

         a[56].index=56;
	strcpy(a[56].letter,"Solder");
	a[56].colour='w';
	a[56].mx=561;
	a[56].my=481;
	a[56].valid=true;


    a[57].index=57;
	strcpy(a[57].letter,"Rook");
	a[57].colour='w';
	a[57].mx=1;
	a[57].my=561;
	a[57].valid=true;

	a[58].index=58;
	strcpy(a[58].letter,"Knight");
	a[58].colour='B';
	a[58].mx=81;
	a[58].my=561;
	a[58].valid=true;

	a[59].index=59;
	strcpy(a[59].letter,"Bishop");
	a[59].colour='w';
	a[59].mx=161;
	a[59].my=561;
	a[59].valid=true;

    a[60].index=60;
	strcpy(a[60].letter,"Queen");
	a[60].colour='B';
	a[60].mx=241;
	a[60].my=561;
	a[60].valid=true;

	a[61].index=61;
	strcpy(a[61].letter,"King");
	a[61].colour='w';
	a[61].mx=321;
	a[61].my=561;
	a[61].valid=true;

    a[62].index=62;
	strcpy(a[62].letter,"Bishop");
	a[62].colour='B';
	a[62].mx=401;
	a[62].my=561;
	a[62].valid=true;

	a[63].index=63;
	strcpy(a[63].letter,"Knight");
	a[63].colour='w';
	a[63].mx=481;
	a[63].my=561;
	a[63].valid=true;

    a[64].index=64;
	strcpy(a[64].letter,"Rook");
	a[64].colour='B';
	a[64].mx=561;
	a[64].my=561;
	a[64].valid=true;


	//For Pawn

	p[1].index=1;
    strcpy(p[1].letter,"Rook");
    p[1].colour='w';
	p[1].mx=20;
	p[1].my=20;
	p[1].valid=true;

	p[2].index=2;
    strcpy(p[2].letter,"Knigt");
    p[2].colour='w';
	p[2].mx=100;
	p[2].my=20;
	p[2].valid=true;


    p[3].index=3;
    strcpy(p[3].letter,"Bishop");
    p[3].colour='w';
	p[3].mx=180;
	p[3].my=20;
	p[3].valid=true;


    p[4].index=4;
    strcpy(p[4].letter,"Queen");
    p[4].colour='w';
	p[4].mx=260;
	p[4].my=20;
	p[4].valid=true;

    p[5].index=5;
    strcpy(p[5].letter,"King");
    p[5].colour='w';
	p[5].mx=340;
	p[5].my=20;
	p[5].valid=true;


    p[6].index=6;
    strcpy(p[6].letter,"Bishop");
    p[6].colour='w';
	p[6].mx=420;
	p[6].my=20;
	p[6].valid=true;



    p[7].index=7;
    strcpy(p[7].letter,"Knight");
    p[7].colour='w';
	p[7].mx=500;
	p[7].my=20;
	p[7].valid=true;

    p[8].index=8;
    strcpy(p[8].letter,"Rook");
    p[8].colour='w';
	p[8].mx=580;
	p[8].my=20;
	p[8].valid=true;


   for(j=9,m_x=20;j<=17;j++,m_x+=80){
	p[j].index=j;
	strcpy(p[j].letter,"Solder");
	p[j].colour='w';
	p[j].mx=m_x;
	p[j].my=100;
	p[j].valid=true;

   }


   for(k=49,m_x=20;k<=56;k++,m_x+=80){
	p[k].index=k;
	strcpy(p[k].letter,"Solder");
	p[k].colour='B';
	p[k].mx=m_x;
	p[k].my=500;
	p[k].valid=true;

   }


   p[57].index=57;
   strcpy(p[57].letter,"Rook");
   p[57].colour='B';
   p[57].mx=20;
   p[57].my=580;
   p[57].valid=true;

    p[58].index=58;
    strcpy(p[58].letter,"Knight");
    p[58].colour='B';
	p[58].mx=100;
	p[58].my=580;
	p[58].valid=true;


    p[59].index=59;
    strcpy(p[59].letter,"Bishop");
    p[59].colour='B';
	p[59].mx=180;
	p[59].my=580;
	p[59].valid=true;


    p[60].index=60;
    strcpy(p[60].letter,"Queen");
    p[60].colour='B';
	p[60].mx=260;
	p[60].my=580;
	p[60].valid=true;

    p[61].index=61;
    strcpy(p[61].letter,"King");
    p[61].colour='B';
	p[61].mx=340;
	p[61].my=580;
	p[61].valid=true;


    p[62].index=61;
    strcpy(p[62].letter,"Bishop");
    p[62].colour='B';
	p[62].mx=420;
	p[62].my=580;
	p[62].valid=true;



    p[63].index=63;
    strcpy(p[63].letter,"Knight");
    p[63].colour='B';
	p[63].mx=500;
	p[63].my=580;
	p[63].valid=true;

    p[64].index=64;
    strcpy(p[64].letter,"Rook");
    p[64].colour='B';
	p[64].mx=580;
	p[64].my=580;
	p[64].valid=true;



  }

  
  void Menu1(int mx , int my){

	

if((m_x>=1&&m_x<=80)&&(m_y>=1&&m_y<=80))
		n=1;
	else if((m_x>=81&&m_x<=160)&&(m_y>=1&&m_y<=80))
		n=2;
	else if((m_x>=161&&m_x<=240)&&(m_y>=1&&m_y<=80))
		n=3;
         else if((m_x>=241&&m_x<=320)&&(m_y>=1&&m_y<=80))
		n=4;
	else if((m_x>=321&&m_x<=400)&&(m_y>=1&&m_y<=80))
		n=5;
	else if((m_x>=401&&m_x<=480)&&(m_y>=1&&m_y<=80))
		n=6;
        else if((m_x>=481&&m_x<=560)&&(m_y>=1&&m_y<=80))
		n=7;
	else if((m_x>=561&&m_x<=640)&&(m_y>=1&&m_y<=80))
		n=8;


         else if((m_x>=1&&m_x<=80)&&(m_y>=81&&m_y<=160))
		n=9;
	else if((m_x>=81&&m_x<=160)&&(m_y>=81&&m_y<=160))
		n=10;
	else if((m_x>=161&&m_x<=240)&&(m_y>=81&&m_y<=160))
		n=11;
         else if((m_x>=241&&m_x<=320)&&(m_y>=81&&m_y<=160))
		n=12;
	else if((m_x>=321&&m_x<=400)&&(m_y>=81&&m_y<=160))
		n=13;
	else if((m_x>=401&&m_x<=480)&&(m_y>=81&&m_y<=160))
		n=14;
        else if((m_x>=481&&m_x<=560)&&(m_y>=81&&m_y<=160))
		n=15;
	 else if((m_x>=561&&m_x<=640)&&(m_y>=81&&m_y<=160))
		n=16;


       else if((m_x>=1&&m_x<=80)&&(m_y>=161&&m_y<=240))
		n=17;
	   else if((m_x>=81&&m_x<=160)&&(m_y>=161&&m_y<=240))
		n=18;
	  else if((m_x>=161&&m_x<=240)&&(m_y>=161&&m_y<=240))
		n=19;
       else if((m_x>=241&&m_x<=320)&&(m_y>=161&&m_y<=240))
		n=20;
	  else if((m_x>=321&&m_x<=400)&&(m_y>=161&&m_y<=240))
		n=21;
	   else if((m_x>=401&&m_x<=480)&&(m_y>=161&&m_y<=240))
 		n=22;
        else if((m_x>=481&&m_x<=560)&&(m_y>=161&&m_y<=240))
		n=23;
	else if((m_x>=561&&m_x<=640)&&(m_y>=161&&m_y<=240))
		n=24;



        else if((m_x>=1&&m_x<=80)&&(m_y>=241&&m_y<=320))
		n=25;
	   else if((m_x>=81&&m_x<=160)&&(m_y>=241&&m_y<=320))
		n=26;
	else if((m_x>=161&&m_x<=240)&&(m_y>=241&&m_y<=320))
		n=27;
         else if((m_x>=241&&m_x<=320)&&(m_y>=241&&m_y<=320))
		n=28;
	else if((m_x>=321&&m_x<=400)&&(m_y>=241&&m_y<=320))
		n=29;
	else if((m_x>=401&&m_x<=480)&&(m_y>=241&&m_y<=320))
		n=30;
        else if((m_x>=481&&m_x<=560)&&(m_y>=241&&m_y<=320))
		n=31;
	else if((m_x>=561&&m_x<=640)&&(m_y>=241&&m_y<=320))
		n=32;


         else if((m_x>=1&&m_x<=80)&&(m_y>=321&&m_y<=400))
		n=33;
 	    else if((m_x>=81&&m_x<=160)&&(m_y>=321&&m_y<=400))
		n=34;
	  else if((m_x>=161&&m_x<=240)&&(m_y>=321&&m_y<=400))
		n=35;
         else if((m_x>=241&&m_x<=320)&&(m_y>=321&&m_y<=400))
		n=36;
	 else if((m_x>=321&&m_x<=400)&&(m_y>=321&&m_y<=400))
		n=37;
	 else if((m_x>=401&&m_x<=480)&&(m_y>=321&&m_y<=400))
		n=38;
        else if((m_x>=481&&m_x<=560)&&(m_y>=321&&m_y<=400))
		n=39;
	else if((m_x>=561&&m_x<=640&&m_y>=321&&m_y<=400))
		n=40;



         else if((m_x>=1&&m_x<=80)&&(m_y>=401&&m_y<=480))
		n=41;
	else if((m_x>=81&&m_x<=160)&&(m_y>=401&&m_y<=480))
		n=42;
	else if((m_x>=161&&m_x<=240)&&(m_y>=401&&m_y<=480))
		n=43;
         else if((m_x>=241&&m_x<=320)&&(m_y>=401&&m_y<=480))
		n=44;
	else if((m_x>=321&&m_x<=400)&&(m_y>=401&&m_y<=480))
		n=45;
	else if((m_x>=401&&m_x<=480)&&(m_y>=401&&m_y<=480))
		n=46;
        else if((m_x>=481&&m_x<=560)&&(m_y>=401&&m_y<=480))
		n=47;
	else if((m_x>=561&&m_x<=640)&&(m_y>=401&&m_y<=480))
		n=48;


         else if((m_x>=1&&m_x<=80)&&(m_y>=481&&m_y<=560))
		n=49;
	else if((m_x>=81&&m_x<=160)&&(m_y>=481&&m_y<=560))
		n=50;
	else if((m_x>=161&&m_x<=240)&&(m_y>=481&&m_y<=560))
		n=51;
         else if((m_x>=241&&m_x<=320)&&(m_y>=481&&m_y<=560))
		n=52;
	else if((m_x>=321&&m_x<=400)&&(m_y>=481&&m_y<=560))
		n=53;
	else if((m_x>=401&&m_x<=480)&&(m_y>=481&&m_y<=560))
		n=54;
        else if((m_x>=481&&m_x<=560)&&(m_y>=481&&m_y<=560))
		n=55;
	else if((m_x>=561&&m_x<=640)&&(m_y>=481&&m_y<=560))
		n=56;


         else if((m_x>=0&&m_x<=80)&&(m_y>=561&&m_y<=640))
		n=57;
	else if((m_x>=81&&m_x<=160)&&(m_y>=561&&m_y<=640))
		n=58;
	else if((m_x>=161&&m_x<=240)&&(m_y>=561&&m_y<=640))
		n=59;
         else if((m_x>=241&&m_x<=320)&&(m_y>=561&&m_y<=640))
		n=60;
	else if((m_x>=321&&m_x<=400)&&(m_y>=561&&m_y<=640))
		n=61;
	else if((m_x>=401&&m_x<=480)&&(m_y>=561&&m_y<=640))
		n=62;
        else if((m_x>=481&&m_x<=560)&&(m_y>=561&&m_y<=640))
		n=63;
	else if((m_x>=561&&m_x<=640)&&(m_y>=561&&m_y<=640))
		n=64;

		

}


void Menu2(int mx , int my){


	if((m_x>=1&&m_x<=80)&&(m_y>=1&&m_y<=80))
		m=1;
	else if((m_x>=81&&m_x<=160)&&(m_y>=1&&m_y<=80))
		m=2;
	else if((m_x>=161&&m_x<=240)&&(m_y>=1&&m_y<=80))
		m=3;
         else if((m_x>=241&&m_x<=320)&&(m_y>=1&&m_y<=80))
		m=4;
	else if((m_x>=321&&m_x<=400)&&(m_y>=1&&m_y<=80))
		m=5;
	else if((m_x>=401&&m_x<=480)&&(m_y>=1&&m_y<=80))
		m=6;
        else if((m_x>=481&&m_x<=560)&&(m_y>=1&&m_y<=80))
		m=7;
	else if((m_x>=561&&m_x<=640)&&(m_y>=1&&m_y<=80))
		m=8;


         else if((m_x>=1&&m_x<=80)&&(m_y>=81&&m_y<=160))
		m=9;
	else if((m_x>=81&&m_x<=160)&&(m_y>=81&&m_y<=160))
		m=10;
	else if((m_x>=161&&m_x<=240)&&(m_y>=81&&m_y<=160))
		m=11;
         else if((m_x>=241&&m_x<=320)&&(m_y>=81&&m_y<=160))
		m=12;
	else if((m_x>=321&&m_x<=400)&&(m_y>=81&&m_y<=160))
		m=13;
	else if((m_x>=401&&m_x<=480)&&(m_y>=81&&m_y<=160))
		m=14;
        else if((m_x>=481&&m_x<=560)&&(m_y>=81&&m_y<=160))
		m=15;
	else if((m_x>=561&&m_x<=640)&&(m_y>=81&&m_y<=160))
		m=16;


         else if((m_x>=1&&m_x<=80)&&(m_y>=161&&m_y<=240))
		m=17;
	else if((m_x>=81&&m_x<=160)&&(m_y>=161&&m_y<=240))
		m=18;
	else if((m_x>=161&&m_x<=240)&&(m_y>=161&&m_y<=240))
		m=19;
         else if((m_x>=241&&m_x<=320)&&(m_y>=161&&m_y<=240))
		m=20;
	else if((m_x>=321&&m_x<=400)&&(m_y>=161&&m_y<=240))
		m=21;
	else if((m_x>=401&&m_x<=480)&&(m_y>=161&&m_y<=240))
		m=22;
        else if((m_x>=481&&m_x<=560)&&(m_y>=161&&m_y<=240))
		m=23;
	else if((m_x>=561&&m_x<=640)&&(m_y>=161&&m_y<=240))
		m=24;



         else if((m_x>=1&&m_x<=80)&&(m_y>=241&&m_y<=320))
		m=25;
	else if((m_x>=81&&m_x<=160)&&(m_y>=241&&m_y<=320))
		m=26;
	else if((m_x>=161&&m_x<=240)&&(m_y>=241&&m_y<=320))
		m=27;
         else if((m_x>=241&&m_x<=320)&&(m_y>=241&&m_y<=320))
		m=28;
	else if((m_x>=321&&m_x<=400)&&(m_y>=241&&m_y<=320))
		m=29;
	else if((m_x>=401&&m_x<=480)&&(m_y>=241&&m_y<=320))
		m=30;
        else if((m_x>=481&&m_x<=560)&&(m_y>=241&&m_y<=320))
		m=31;
	else if((m_x>=561&&m_x<=640)&&(m_y>=241&&m_y<=320))
		m=32;


         else if((m_x>=1&&m_x<=80)&&(m_y>=321&&m_y<=400))
		m=33;
	else if((m_x>=81&&m_x<=160)&&(m_y>=321&&m_y<=400))
		m=34;
	else if((m_x>=161&&m_x<=240)&&(m_y>=321&&m_y<=400))
		m=35;
         else if((m_x>=241&&m_x<=320)&&(m_y>=321&&m_y<=400))
		m=36;
	else if((m_x>=321&&m_x<=400)&&(m_y>=321&&m_y<=400))
		m=37;
	else if((m_x>=401&&m_x<=480)&&(m_y>=321&&m_y<=400))
		m=38;
        else if((m_x>=481&&m_x<=560)&&(m_y>=321&&m_y<=400))
		m=39;
	else if((m_x>=561&&m_x<=640&&m_y>=321&&m_y<=400))
		m=40;



         else if((m_x>=1&&m_x<=80)&&(m_y>=401&&m_y<=480))
		m=41;
	else if((m_x>=81&&m_x<=160)&&(m_y>=401&&m_y<=480))
		m=42;
	else if((m_x>=161&&m_x<=240)&&(m_y>=401&&m_y<=480))
		m=43;
         else if((m_x>=241&&m_x<=320)&&(m_y>=401&&m_y<=480))
		m=44;
	else if((m_x>=321&&m_x<=400)&&(m_y>=401&&m_y<=480))
		m=45;
	else if((m_x>=401&&m_x<=480)&&(m_y>=401&&m_y<=480))
		m=46;
        else if((m_x>=481&&m_x<=560)&&(m_y>=401&&m_y<=480))
		m=47;
	else if((m_x>=561&&m_x<=640)&&(m_y>=401&&m_y<=480))
		m=48;


         else if((m_x>=1&&m_x<=80)&&(m_y>=481&&m_y<=560))
		m=49;
	else if((m_x>=81&&m_x<=160)&&(m_y>=481&&m_y<=560))
		m=50;
	else if((m_x>=161&&m_x<=240)&&(m_y>=481&&m_y<=560))
		m=51;
         else if((m_x>=241&&m_x<=320)&&(m_y>=481&&m_y<=560))
		m=52;
	else if((m_x>=321&&m_x<=400)&&(m_y>=481&&m_y<=560))
		m=53;
	else if((m_x>=401&&m_x<=480)&&(m_y>=481&&m_y<=560))
		m=54;
        else if((m_x>=481&&m_x<=560)&&(m_y>=481&&m_y<=560))
		m=55;
	else if((m_x>=561&&m_x<=640)&&(m_y>=481&&m_y<=560))
		m=56;


         else if((m_x>=1&&m_x<=80)&&(m_y>=561&&m_y<=640))
		m=57;
	else if((m_x>=81&&m_x<=160)&&(m_y>=561&&m_y<=640))
		m=58;
	else if((m_x>=161&&m_x<=240)&&(m_y>=561&&m_y<=640))
		m=59;
         else if((m_x>=241&&m_x<=320)&&(m_y>=561&&m_y<=640))
		m=60;
	else if((m_x>=321&&m_x<=400)&&(m_y>=561&&m_y<=640))
		m=61;
	else if((m_x>=401&&m_x<=480)&&(m_y>=561&&m_y<=640))
		m=62;
        else if((m_x>=481&&m_x<=560)&&(m_y>=561&&m_y<=640))
		m=63;
	else if((m_x>=561&&m_x<=640)&&(m_y>=561&&m_y<=640))
		m=64;

	

}



void initilizeChessPiece(){

	int xSize = 0;
	int ySize = 0;
	for(int i = 0,num=0 ; i < 32 ; i++){ 

    if(i<16){ 

    chessPiece[i].number = num+i;
    chessPiece[i].isChessPiece = true;
    chessPiece[i].xCordinate = xSize;
    chessPiece[i].yCordinate = ySize;
	chessPiece[i].r = 255;
	chessPiece[i].g = 255;
	chessPiece[i].b = 255;
	 xSize+=80;
		if(xSize > 560)
		{

			xSize = 0;
			ySize +=80;

		}
	
	/*
    chessPiece[0].isChessPiece = true;
    chessPiece[0].xCordinate = 0;
    chessPiece[0].yCordinate = 0;
	chessPiece[0].r = 255;
	chessPiece[0].g = 255;
	chessPiece[0].b = 255;
	*/
    strcpy_s(chessPiece[0].letter, "Rook");
	strcpy_s(chessPiece[1].letter, "Knight");
	strcpy_s(chessPiece[2].letter, "Bishop");	
	strcpy_s(chessPiece[3].letter, "Queen");
	strcpy_s(chessPiece[4].letter, "King");
	strcpy_s(chessPiece[5].letter, "Bishop");
	strcpy_s(chessPiece[6].letter, "Knight");
	strcpy_s(chessPiece[7].letter, "Rook");
	strcpy_s(chessPiece[8].letter, "Solder");
	strcpy_s(chessPiece[9].letter, "Solder");
	strcpy_s(chessPiece[10].letter, "Solder");
	strcpy_s(chessPiece[11].letter, "Solder");
	strcpy_s(chessPiece[12].letter, "Solder");
	strcpy_s(chessPiece[13].letter, "Solder");
	strcpy_s(chessPiece[14].letter, "Solder");
	strcpy_s(chessPiece[15].letter, "Solder");
	}
	


	else if(i>=16){ 
	   if(i>=16&&i<24)ySize =480;
	   else ySize =560;

    chessPiece[i].number = num+i;
    chessPiece[i].isChessPiece = true;
    chessPiece[i].xCordinate = xSize;
    chessPiece[i].yCordinate = ySize;
	chessPiece[i].r = 0;
	chessPiece[i].g = 0;
	chessPiece[i].b = 255;
	 xSize+=80;
		if(xSize > 560)
		{

			xSize = 0;
			ySize +=80;

		}
	
    strcpy_s(chessPiece[16].letter, "Solder");
	strcpy_s(chessPiece[17].letter, "Solder");
	strcpy_s(chessPiece[18].letter, "Solder");
	strcpy_s(chessPiece[19].letter, "Solder");
	strcpy_s(chessPiece[20].letter, "Solder");
	strcpy_s(chessPiece[21].letter, "Solder");
	strcpy_s(chessPiece[22].letter, "Solder");
	strcpy_s(chessPiece[23].letter, "Solder");
	strcpy_s(chessPiece[24].letter, "Rook");
	strcpy_s(chessPiece[25].letter, "Knight");
	strcpy_s(chessPiece[26].letter, "Bishop");
	strcpy_s(chessPiece[28].letter, "King");
	strcpy_s(chessPiece[27].letter, "Queen");	
	strcpy_s(chessPiece[29].letter, "Bishop");
	strcpy_s(chessPiece[30].letter, "Knight");
	strcpy_s(chessPiece[31].letter, "Rook");

	}


}

}





  void Board (){


 //1
	iSetColor(100,0,0);
	iFilledRectangle(1,1,79,79);
	iRectangle(1,1,79,79);



    //2
	iSetColor(150,150,150);
	iFilledRectangle(81,1,79,79);
	iRectangle(81,1,79,79);

	//3
	iSetColor(100,0,0);
	iFilledRectangle(161,1,79,79);
	iRectangle(161,1,79,79);


	//4
	iSetColor(150,150,150);
	iFilledRectangle(241,1,79,79);
	iRectangle(241,1,79,79);

	//5
	iSetColor(100,0,0);
	iFilledRectangle(321,1,79,79);
	iRectangle(321,1,79,79);

	//6
	iSetColor(150,150,150);
	iFilledRectangle(401,1,79,79);
	iRectangle(401,1,79,79);

	//7
	iSetColor(100,0,0);
	iFilledRectangle(481,1,79,79);
	iRectangle(481,1,79,79);

    //8
	iSetColor(150,150,150);
	iFilledRectangle(561,1,79,79);
	iRectangle(561,1,79,79);

	//9
	iSetColor(150,150,150);
	iFilledRectangle(1,81,79,79);
	iRectangle(1,81,79,79);

	//10
	iSetColor(100,0,0);
	iFilledRectangle(81,81,79,79);
	iRectangle(81,81,79,79);


	//11
	iSetColor(150,150,150);
	iFilledRectangle(161,81,79,79);
	iRectangle(161,81,79,79);


	//12
	iSetColor(100,0,0);
	iFilledRectangle(241,81,79,79);
	iRectangle(241,81,79,79);

	//13
	iSetColor(150,150,150);
	iFilledRectangle(321,81,79,79);
	iRectangle(321,81,79,79);

	//14
	iSetColor(100,0,0);
	iFilledRectangle(401,81,79,79);
	iRectangle(401,81,79,79);

	//15
	iSetColor(150,150,150);
	iFilledRectangle(481,81,79,79);
	iRectangle(481,81,79,79);

	//16
	iSetColor(100,0,0);
	iFilledRectangle(561,81,79,79);
	iRectangle(561,81,79,79);

	//17
	iSetColor(100,0,0);
	iFilledRectangle(1,161,79,79);
	iRectangle(1,161,79,79);
	//18
	iSetColor(150,150,150);
	iFilledRectangle(81,161,79,79);
	iRectangle(81,161,79,79);
	//19
	iSetColor(100,0,0);
	iFilledRectangle(161,161,79,79);
	iRectangle(161,161,79,79);
	//20
    iSetColor(150,150,150);
	iFilledRectangle(241,161,79,79);
	iRectangle(241,161,79,79);
	//21
	iSetColor(100,0,0);
	iFilledRectangle(321,161,79,79);
	iRectangle(321,161,79,79);
	//22
	iSetColor(150,150,150);
	iFilledRectangle(401,161,79,79);
	iRectangle(401,161,79,79);
	//23
    iSetColor(100,0,0);
	iFilledRectangle(481,161,79,79);
	iRectangle(481,161,79,79);
	//24
	iSetColor(150,150,150);
	iFilledRectangle(561,161,79,79);
	iRectangle(561,161,79,79);
    //25
	iSetColor(150,150,150);
	iFilledRectangle(1,241,79,79);
	iRectangle(1,241,79,79);
	//26
	iSetColor(100,0,0);
	iFilledRectangle(81,241,79,79);
	iRectangle(81,241,79,79);
	//27
	iSetColor(150,150,150);
	iFilledRectangle(161,241,79,79);
	iRectangle(161,241,79,79);
	//28
	iSetColor(100,0,0);
	iFilledRectangle(241,241,79,79);
	iRectangle(241,241,79,79);
	//29
	iSetColor(150,150,150);
	iFilledRectangle(321,241,79,79);
	iRectangle(321,241,79,79);
	//30
	iSetColor(100,0,0);
	iFilledRectangle(401,241,79,79);
	iRectangle(401,241,79,79);
	//31
	iSetColor(150,150,150);
	iFilledRectangle(481,241,79,79);
	iRectangle(481,241,79,79);
	//32
	iSetColor(100,0,0);
	iFilledRectangle(561,241,79,79);
	iRectangle(561,241,79,79);
	//33
	iSetColor(100,0,0);
	iFilledRectangle(1,321,79,79);
	iRectangle(1,321,79,79);
	//34
	iSetColor(150,150,150);
	iFilledRectangle(81,321,79,79);
	iRectangle(81,321,79,79);
	//35
	iSetColor(100,0,0);
	iFilledRectangle(161,321,79,79);
	iRectangle(161,321,79,79);
	//36
	iSetColor(150,150,150);
	iFilledRectangle(241,321,79,79);
	iRectangle(241,321,79,79);
	//37
	iSetColor(100,0,0);
	iFilledRectangle(321,321,79,79);
	iRectangle(321,321,79,79);
	//38
	iSetColor(150,150,150);
	iFilledRectangle(401,321,79,79);
	iRectangle(401,321,79,79);
	//39
	iSetColor(100,0,0);
	iFilledRectangle(481,321,79,79);
	iRectangle(481,321,79,79);
	//40
	iSetColor(150,150,150);
	iFilledRectangle(561,321,79,79);
	iRectangle(561,321,79,79);
	//41
	iSetColor(150,150,150);
	iFilledRectangle(1,401,79,79);
	iRectangle(1,401,79,79);
	//42
	iSetColor(100,0,0);
	iFilledRectangle(81,401,79,79);
	iRectangle(81,401,79,79);
	//43
	iSetColor(150,150,150);
	iFilledRectangle(161,401,79,79);
	iRectangle(161,401,79,79);
	//44
	iSetColor(100,0,0);
	iFilledRectangle(241,401,79,79);
	iRectangle(241,401,79,79);
	//45
	iSetColor(150,150,150);
	iFilledRectangle(321,401,79,79);
	iRectangle(321,401,79,79);
	//46
	iSetColor(100,0,0);
	iFilledRectangle(401,401,79,79);
	iRectangle(401,401,79,79);
	//47
	iSetColor(150,150,150);
	iFilledRectangle(481,401,79,79);
	iRectangle(481,401,79,79);
	//48
	iSetColor(100,0,0);
	iFilledRectangle(561,401,79,79);
	iRectangle(561,401,79,79);


	//49
	iSetColor(100,0,0);
	iFilledRectangle(1,481,79,79);
	iRectangle(1,481,79,79);


	//50
	iSetColor(150,150,150);
	iFilledRectangle(81,481,79,79);
	iRectangle(81,481,79,79);


	//51
	iSetColor(100,0,0);
	iFilledRectangle(161,481,79,79);
	iRectangle(161,481,79,79);

	//52
	iSetColor(150,150,150);
	iFilledRectangle(241,481,79,79);
	iRectangle(241,481,79,79);

	//53
	iSetColor(100,0,0);
	iFilledRectangle(321,481,79,79);
	iRectangle(321,481,79,79);

	//54
	iSetColor(150,150,150);
	iFilledRectangle(401,481,79,79);
	iRectangle(401,481,79,79);

	//55
	iSetColor(100,0,0);
	iFilledRectangle(481,481,79,79);
	iRectangle(481,481,79,79);

	//56
	iSetColor(150,150,150);
	iFilledRectangle(561,481,79,79);
	iRectangle(561,481,79,79);

	//57
	iSetColor(150,150,150);
	iFilledRectangle(1,561,79,79);
	iRectangle(1,561,79,79);


	//58
	iSetColor(100,0,0);
	iFilledRectangle(81,561,79,79);
	iRectangle(81,561,79,79);

	//59
	iSetColor(150,150,150);
	iFilledRectangle(161,561,79,79);
	iRectangle(161,561,79,79);

	//60
	iSetColor(100,0,0);
	iFilledRectangle(241,561,79,79);
	iRectangle(241,561,79,79);


	//61
	iSetColor(150,150,150);
	iFilledRectangle(321,561,79,79);
	iRectangle(321,561,79,79);

	//62
	iSetColor(100,0,0);
	iFilledRectangle(401,561,79,79);
	iRectangle(401,561,79,79);


    //63
	iSetColor(150,150,150);
	iFilledRectangle(481,561,79,79);
	iRectangle(481,561,79,79);

	//64
	iSetColor(100,0,0);
	iFilledRectangle(561,561,79,79);
	iRectangle(561,561,79,79);

}






void iDraw()
{
	 iClear();                                                         
	
	
    Board();
    guti();


	 
	 
}


void Click11(int mx , int my)
{
	for (int i = 0; i < 32; i++)
            {
                if (mx >= chessPiece[i].xCordinate && mx <= chessPiece[i].xCordinate + 80 && my >= chessPiece[i].yCordinate && my <= chessPiece[i].yCordinate + 80)
                {
					cout << chessPiece[i].xCordinate << " " << chessPiece[i].yCordinate << endl;
                    isSelected = true;
					chessPiece[i].r = 255;
					chessPiece[i].g = 0;
					chessPiece[i].b = 0;
                    isn = i;
                    break;
                }
            }

}

void Click22(int mx , int my)
{    


	/*
	
	for (int i = 0; i <32; i++)
            {
                if (mx >= chessPiece[i].xCordinate && mx <= chessPiece[i].xCordinate + 80 && my >= chessPiece[i].yCordinate && my <= chessPiece[i].yCordinate + 80)
                {
					chessPiece[i].xCordinate = -100;
					chessPiece[i].yCordinate = -100;
                    break;
                }
            }
			
            isSelected = false;
            //printf("%d %d", isSelectedX, isSelectedY);
			cout << mx << " " << my << endl;
            isSelectedX = mx - mx % 80;
            isSelectedY = my - my % 80;
            chessPiece[isn].xCordinate = isSelectedX;
            chessPiece[isn].yCordinate = isSelectedY;
			cout << isSelectedX << " " << isSelectedY << endl;

					
			chessPiece[isn].r = 255;
			chessPiece[isn].g = 255;
			chessPiece[isn].b = 255;

			if(isn>=16){
				chessPiece[isn].r = 0;
			    chessPiece[isn].g = 0;
			    chessPiece[isn].b = 255;

			} */



	
//void pawn(){

	cmp=strcmp(a[n].letter,a[9].letter);
	if(cmp==0&&a[n].gcolour=='w'){


		if(a[m].valid==false){

			if(a[n].index==9||a[n].index==10||a[n].index==11||a[n].index==12||a[n].index==13||a[n].index==14||a[n].index==15||a[n].index==16){

				if((a[m].mx==a[n].mx)&&((a[m].my==a[n].my+80)||(a[m].my==a[n].my+160))){

					 



					for (int i = 0; i <32; i++)
            {
                if (mx >= chessPiece[i].xCordinate && mx <= chessPiece[i].xCordinate + 80 && my >= chessPiece[i].yCordinate && my <= chessPiece[i].yCordinate + 80)
                {
					chessPiece[i].xCordinate = -100;
					chessPiece[i].yCordinate = -100;
                    break;
                }
            }
			
            isSelected = false;
            //printf("%d %d", isSelectedX, isSelectedY);
			cout << mx << " " << my << endl;
            isSelectedX = mx - mx % 80;
            isSelectedY = my - my % 80;
            chessPiece[isn].xCordinate = isSelectedX;
            chessPiece[isn].yCordinate = isSelectedY;
			cout << isSelectedX << " " << isSelectedY << endl;

					
			chessPiece[isn].r = 255;
			chessPiece[isn].g = 255;
			chessPiece[isn].b = 255;

			if(isn>=16){
				chessPiece[isn].r = 0;
			    chessPiece[isn].g = 0;
			    chessPiece[isn].b = 255;

			}


						
			
						 strcpy(a[m].letter,"Solder");

	                       a[m].valid=true;
						    a[n].valid=false;
			 
			              a[m].gcolour='w';
			     		


			
			/*
			     			cout << mx << " " << my << endl;
                            isSelectedX2 = mx - mx % 80;
                            isSelectedY2 = my - my % 80;
                             a[n].mx=isSelectedX2;
	                         a[n].my=isSelectedY2;

           */
                      }
	                }




		 else if (a[n].index !=9||a[n].index !=10||a[n].index !=11||a[n].index !=12||a[n].index !=13||a[n].index !=14||a[n].index !=15||a[n].index !=16){

				if(a[m].mx==a[n].mx&&a[m].my==a[n].my+80){

				     
 


					for (int i = 0; i <32; i++)
            {
                if (mx >= chessPiece[i].xCordinate && mx <= chessPiece[i].xCordinate + 80 && my >= chessPiece[i].yCordinate && my <= chessPiece[i].yCordinate + 80)
                {
					chessPiece[i].xCordinate = -100;
					chessPiece[i].yCordinate = -100;
                    break;
                }
            }
			
            isSelected = false;
            //printf("%d %d", isSelectedX, isSelectedY);
			cout << mx << " " << my << endl;
            isSelectedX = mx - mx % 80;
            isSelectedY = my - my % 80;
            chessPiece[isn].xCordinate = isSelectedX;
            chessPiece[isn].yCordinate = isSelectedY;
			cout << isSelectedX << " " << isSelectedY << endl;

					
			chessPiece[isn].r = 255;
			chessPiece[isn].g = 255;
			chessPiece[isn].b = 255;

			if(isn>=16){
				chessPiece[isn].r = 0;
			    chessPiece[isn].g = 0;
			    chessPiece[isn].b = 255;

			}

			
								
				
			
						 strcpy(a[m].letter,"Solder");

	                        a[m].valid=true;
						    a[n].valid=false;
			 	            a[m].gcolour='w';
			     		



		         	}
		 }

		 }


		      else if((a[m].mx==a[n].mx+80||a[m].mx==a[n].mx-80)&&a[m].my==a[n].my+80&&a[m].gcolour=='B') {

		       if((strcmp(a[m].letter,a[5].letter))){

					//  printf("its working");
				 


					  for (int i = 0; i <32; i++)
            {
                if (mx >= chessPiece[i].xCordinate && mx <= chessPiece[i].xCordinate + 80 && my >= chessPiece[i].yCordinate && my <= chessPiece[i].yCordinate + 80)
                {
					chessPiece[i].xCordinate = -100;
					chessPiece[i].yCordinate = -100;
                    break;
                }
            }
			
            isSelected = false;
            //printf("%d %d", isSelectedX, isSelectedY);
			cout << mx << " " << my << endl;
            isSelectedX = mx - mx % 80;
            isSelectedY = my - my % 80;
            chessPiece[isn].xCordinate = isSelectedX;
            chessPiece[isn].yCordinate = isSelectedY;
			cout << isSelectedX << " " << isSelectedY << endl;

					
			chessPiece[isn].r = 255;
			chessPiece[isn].g = 255;
			chessPiece[isn].b = 255;

			if(isn>=16){
				chessPiece[isn].r = 0;
			    chessPiece[isn].g = 0;
			    chessPiece[isn].b = 255;

			}

			
						
			
						 strcpy(a[m].letter,"Solder");

	                      a[m].valid=true;

			              a[n].valid=false;

			              a[m].gcolour='w';
			     		

                 }

                  else if(!(strcmp(a[m].letter,a[5].letter))){

					  printf("\n!!Cheak!!\n");
				  }
			  }

      
   
   }
	 

	if(cmp==0&&a[n].gcolour=='B'){

	 if(a[m].valid==false){

			   if(a[n].index==49||a[n].index==50||a[n].index==51||a[n].index==52||a[n].index==53||a[n].index==54||a[n].index==55||a[n].index==56){

				if(a[m].mx==a[n].mx&&(a[m].my==a[n].my-80||a[m].my==a[n].my-160&&a[m].valid==false)){

					  

 


					for (int i = 0; i <32; i++)
            {
                if (mx >= chessPiece[i].xCordinate && mx <= chessPiece[i].xCordinate + 80 && my >= chessPiece[i].yCordinate && my <= chessPiece[i].yCordinate + 80)
                {
					chessPiece[i].xCordinate = -100;
					chessPiece[i].yCordinate = -100;
                    break;
                }
            }
			
            isSelected = false;
            //printf("%d %d", isSelectedX, isSelectedY);
			cout << mx << " " << my << endl;
            isSelectedX = mx - mx % 80;
            isSelectedY = my - my % 80;
            chessPiece[isn].xCordinate = isSelectedX;
            chessPiece[isn].yCordinate = isSelectedY;
			cout << isSelectedX << " " << isSelectedY << endl;

					
			chessPiece[isn].r = 255;
			chessPiece[isn].g = 255;
			chessPiece[isn].b = 255;

			if(isn>=16){
				chessPiece[isn].r = 0;
			    chessPiece[isn].g = 0;
			    chessPiece[isn].b = 255;

			}


			
								
			
						 strcpy(a[m].letter,"Solder");

	                       a[m].valid=true;
						    a[n].valid=false;
			 
			              a[m].gcolour='B';
			     		

                      }
	                }

			   else if (a[n].index!=49||a[n].index!=50||a[n].index!=51||a[n].index!=52||a[n].index!=53||a[n].index!=54||a[n].index!=55||a[n].index!=56){

				if(a[m].mx==a[n].mx&&a[m].my==a[n].my-80&&a[m].valid==false){

				     

					 


					for (int i = 0; i <32; i++)
            {
                if (mx >= chessPiece[i].xCordinate && mx <= chessPiece[i].xCordinate + 80 && my >= chessPiece[i].yCordinate && my <= chessPiece[i].yCordinate + 80)
                {
					chessPiece[i].xCordinate = -100;
					chessPiece[i].yCordinate = -100;
                    break;
                }
            }
			
            isSelected = false;
            //printf("%d %d", isSelectedX, isSelectedY);
			cout << mx << " " << my << endl;
            isSelectedX = mx - mx % 80;
            isSelectedY = my - my % 80;
            chessPiece[isn].xCordinate = isSelectedX;
            chessPiece[isn].yCordinate = isSelectedY;
			cout << isSelectedX << " " << isSelectedY << endl;

					
			chessPiece[isn].r = 255;
			chessPiece[isn].g = 255;
			chessPiece[isn].b = 255;

			if(isn>=16){
				chessPiece[isn].r = 0;
			    chessPiece[isn].g = 0;
			    chessPiece[isn].b = 255;

			}

						
						
			
						 strcpy(a[m].letter,"Solder");

	                       a[m].valid=true;
						    a[n].valid=false;
			 
			              a[m].gcolour='B';
			     		
			 



		         	}
			      }
			   }

		      if((a[m].mx==a[n].mx-80||a[m].mx==a[n].mx+80)&&a[m].my==a[n].my-80&&a[m].gcolour=='w'){

				  if((strcmp(a[m].letter,a[5].letter))){

					 

					  for (int i = 0; i <32; i++)
            {
                if (mx >= chessPiece[i].xCordinate && mx <= chessPiece[i].xCordinate + 80 && my >= chessPiece[i].yCordinate && my <= chessPiece[i].yCordinate + 80)
                {
					chessPiece[i].xCordinate = -100;
					chessPiece[i].yCordinate = -100;
                    break;
                }
            }
			
            isSelected = false;
            //printf("%d %d", isSelectedX, isSelectedY);
			cout << mx << " " << my << endl;
            isSelectedX = mx - mx % 80;
            isSelectedY = my - my % 80;
            chessPiece[isn].xCordinate = isSelectedX;
            chessPiece[isn].yCordinate = isSelectedY;
			cout << isSelectedX << " " << isSelectedY << endl;

					
			chessPiece[isn].r = 255;
			chessPiece[isn].g = 255;
			chessPiece[isn].b = 255;

			if(isn>=16){
				chessPiece[isn].r = 0;
			    chessPiece[isn].g = 0;
			    chessPiece[isn].b = 255;

			}

								
			
						 strcpy(a[m].letter,"Solder");

	                       a[m].valid=true;

						   a[n].valid=false;
			 
			              a[m].gcolour='B';
			     		







				  }

                 if(!(strcmp(a[m].letter,a[5].letter))){

					   printf("\n!!Cheak!!\n");
				  }
			    }

		  
     }
						 


//}
	 

//void Knight(){

	else if((!(strcmp(a[n].letter,a[2].letter))&&a[5].gcolour=='w')){
			

		if(a[m].valid==false||a[m].gcolour=='B'){

			 if(strcmp(a[m].letter,a[5].letter)){


				if( ((a[m].mx==a[n].mx+80)&&(a[m].my==a[n].my+160))||((a[m].mx==a[n].mx+80)&&(a[m].my==a[n].my-160))||((a[m].mx==a[n].mx-80)&&(a[m].my==a[n].my+160))||((a[m].mx==a[n].mx-80)&&(a[m].my==a[n].my-160))||((a[m].mx==a[n].mx+160)&&(a[m].my==a[n].my+80))||((a[m].mx==a[n].mx+160)&&(a[m].my==a[n].my-80))||((a[m].mx==a[n].mx-160)&&(a[m].my==a[n].my-80))||((a[m].mx==a[n].mx-160)&&(a[m].my==a[n].my+80)) ){



					
					  for (int i = 0; i <32; i++)
            {
                if (mx >= chessPiece[i].xCordinate && mx <= chessPiece[i].xCordinate + 80 && my >= chessPiece[i].yCordinate && my <= chessPiece[i].yCordinate + 80)
                {
					chessPiece[i].xCordinate = -100;
					chessPiece[i].yCordinate = -100;
                    break;
                }
            }
			
            isSelected = false;
            //printf("%d %d", isSelectedX, isSelectedY);
			cout << mx << " " << my << endl;
            isSelectedX = mx - mx % 80;
            isSelectedY = my - my % 80;
            chessPiece[isn].xCordinate = isSelectedX;
            chessPiece[isn].yCordinate = isSelectedY;
			cout << isSelectedX << " " << isSelectedY << endl;

					
			chessPiece[isn].r = 255;
			chessPiece[isn].g = 255;
			chessPiece[isn].b = 255;

			if(isn>=16){
				chessPiece[isn].r = 0;
			    chessPiece[isn].g = 0;
			    chessPiece[isn].b = 255;

			}


			
						 strcpy(a[m].letter,"Knight");

	                        a[m].valid=true;
						    a[n].valid=false;
			 	            a[m].gcolour='w';
			     		



                      }
	                }

			    else if(!(strcmp(a[m].letter,a[5].letter))){

				   printf("\n!!Cheak!!\n");

	        	  }
	    }
	}

	else if((!(strcmp(a[n].letter,a[58].letter))&&a[5].gcolour=='B')){

		if(a[m].valid==false||a[m].gcolour=='w'){

			 if(strcmp(a[m].letter,a[5].letter)){


				if(   ((a[m].mx==a[n].mx+80)&&(a[m].my==a[n].my+160))||((a[m].mx==a[n].mx+80)&&(a[m].my==a[n].my-160))||((a[m].mx==a[n].mx-80)&&(a[m].my==a[n].my+160))||((a[m].mx==a[n].mx-80)&&(a[m].my==a[n].my-160))||((a[m].mx==a[n].mx+160)&&(a[m].my==a[n].my+80))||((a[m].mx==a[n].mx+160)&&(a[m].my==a[n].my-80))||((a[m].mx==a[n].mx-160)&&(a[m].my==a[n].my-80))||((a[m].mx==a[n].mx-160)&&(a[m].my==a[n].my+80)) )
				{

					          

					
					  for (int i = 0; i <32; i++)
					  {
                if (mx >= chessPiece[i].xCordinate && mx <= chessPiece[i].xCordinate + 80 && my >= chessPiece[i].yCordinate && my <= chessPiece[i].yCordinate + 80)
                {
					chessPiece[i].xCordinate = -100;
					chessPiece[i].yCordinate = -100;
                    break;
                }
            }
			
            isSelected = false;
            //printf("%d %d", isSelectedX, isSelectedY);
			cout << mx << " " << my << endl;
            isSelectedX = mx - mx % 80;
            isSelectedY = my - my % 80;
            chessPiece[isn].xCordinate = isSelectedX;
            chessPiece[isn].yCordinate = isSelectedY;
			cout << isSelectedX << " " << isSelectedY << endl;

					
			chessPiece[isn].r = 255;
			chessPiece[isn].g = 255;
			chessPiece[isn].b = 255;

			if(isn>=16){
				chessPiece[isn].r = 0;
			    chessPiece[isn].g = 0;
			    chessPiece[isn].b = 255;

			}

			
						 strcpy(a[m].letter,"Knight");

	                        a[m].valid=true;
						    a[n].valid=false;
			 	            a[m].gcolour='B';
			     		


                      }
	                }
		           }

			    else if(!(strcmp(a[m].letter,a[5].letter))){

				   printf("\n!!Cheak!!\n");

	        	  }
	    }
	
	


	
	


//void king(){
	else if((!(strcmp(a[n].letter,a[5].letter))&&a[62].gcolour=='w')){

		if(a[m].valid==false||a[m].gcolour=='B'){

			 if((strcmp(a[m].letter,a[61].letter))){


				if((a[m].mx==a[n].mx&&((a[m].my==a[n].my+80)||a[m].my==a[n].my-80))||
					(a[m].my==a[n].my&&((a[m].mx==a[n].mx+80)||a[m].mx==a[n].mx-80))||
					(a[m].mx==a[n].mx+80&&a[m].my==a[n].my+80)||(a[m].mx==a[n].mx-80&&a[m].my==a[n].my-80)||
					(a[m].mx==a[n].mx-80&&a[m].my==a[n].my+80)||(a[m].mx==a[n].mx+80&&a[m].my==a[n].my-80) ){

					          




							   
					  for (int i = 0; i <32; i++)
            {
                if (mx >= chessPiece[i].xCordinate && mx <= chessPiece[i].xCordinate + 80 && my >= chessPiece[i].yCordinate && my <= chessPiece[i].yCordinate + 80)
                {
					chessPiece[i].xCordinate = -100;
					chessPiece[i].yCordinate = -100;
                    break;
                }
            }
			
            isSelected = false;
            //printf("%d %d", isSelectedX, isSelectedY);
			cout << mx << " " << my << endl;
            isSelectedX = mx - mx % 80;
            isSelectedY = my - my % 80;
            chessPiece[isn].xCordinate = isSelectedX;
            chessPiece[isn].yCordinate = isSelectedY;
			cout << isSelectedX << " " << isSelectedY << endl;

					
			chessPiece[isn].r = 255;
			chessPiece[isn].g = 255;
			chessPiece[isn].b = 255;

			if(isn>=16){
				chessPiece[isn].r = 0;
			    chessPiece[isn].g = 0;
			    chessPiece[isn].b = 255;

			}

			
						 strcpy(a[m].letter,"King");

	                        a[m].valid=true;

						    a[n].valid=false;

			 	            a[m].gcolour='w';
			    


                      }
	             
			 
			
			 }

	    	}


	 }


	else if((!(strcmp(a[n].letter,a[61].letter))&&a[61].gcolour=='B')){

		if(a[m].gcolour =='w'){

			 if((strcmp(a[m].letter,a[5].letter))){


				if((a[m].mx==a[n].mx&&((a[m].my==a[n].my+80)||a[m].my==a[n].my-80))||
					(a[m].my==a[n].my&&((a[m].mx==a[n].mx+80)||a[m].mx==a[n].mx-80))||
					(a[m].mx==a[n].mx+80&&a[m].my==a[n].my+80)||(a[m].mx==a[n].mx-80&&a[m].my==a[n].my-80)||
					(a[m].mx==a[n].mx-80&&a[m].my==a[n].my+80)||(a[m].mx==a[n].mx+80&&a[m].my==a[n].my-80) ){

					          




							   
					  for (int i = 0; i <32; i++)
            {
                if (mx >= chessPiece[i].xCordinate && mx <= chessPiece[i].xCordinate + 80 && my >= chessPiece[i].yCordinate && my <= chessPiece[i].yCordinate + 80)
                {
					chessPiece[i].xCordinate = -100;
					chessPiece[i].yCordinate = -100;
                    break;
                }
            }
			
            isSelected = false;
            //printf("%d %d", isSelectedX, isSelectedY);
			cout << mx << " " << my << endl;
            isSelectedX = mx - mx % 80;
            isSelectedY = my - my % 80;
            chessPiece[isn].xCordinate = isSelectedX;
            chessPiece[isn].yCordinate = isSelectedY;
			cout << isSelectedX << " " << isSelectedY << endl;

					
			chessPiece[isn].r = 255;
			chessPiece[isn].g = 255;
			chessPiece[isn].b = 255;

			if(isn>=16){
				chessPiece[isn].r = 0;
			    chessPiece[isn].g = 0;
			    chessPiece[isn].b = 255;

			}

			
						 strcpy(a[m].letter,"King");

	                        a[m].valid=true;

						    a[n].valid=false;

			 	            a[m].gcolour='B';
			     		


                      }
	               }
	    	}
         }

       





	

//void bishop(){

	else if((!(strcmp(a[n].letter,a[3].letter))&&a[3].gcolour=='w')){
		//printf("It's working");

		if(a[m].valid==false||a[m].gcolour=='B'){

			if(strcmp(a[m].letter,a[5].letter)){

				 

				     if( ((a[m].mx==a[n].mx+80)&&(a[m].my==a[n].my+80)&&(a[n+9].valid==false||a[n+9].gcolour=='B'))||
					 ((a[m].mx==a[n].mx+160)&&(a[m].my==a[n].my+160)&&((a[n+9].valid==false&&a[n+18].valid==false)||a[n+18].gcolour=='B'))||
					 ((a[m].mx==a[n].mx+240)&&(a[m].my==a[n].my+240)&&((a[n+9].valid==false&&a[n+18].valid==false&&a[n+27].valid==false)||a[n+27].gcolour=='B'))||
					 ((a[m].mx==a[n].mx+320)&&(a[m].my==a[n].my+320)&&((a[n+9].valid==false&&a[n+18].valid==false&&a[n+27].valid==false&&a[n+36].valid==false)||a[n+36].gcolour=='B'))||
					 ((a[m].mx==a[n].mx+400)&&(a[m].my==a[n].my+400)&&((a[n+9].valid==false&&a[n+18].valid==false&&a[n+27].valid==false&&a[n+36].valid==false&&a[n+45].valid==false)||a[n+45].gcolour=='B'))||
					 ((a[m].mx==a[n].mx+480)&&(a[m].my==a[n].my+480)&&((a[n+9].valid==false&&a[n+18].valid==false&&a[n+27].valid==false&&a[n+36].valid==false&&a[n+45].valid==false&&a[n+54].valid==false)||a[n+54].gcolour=='B'))||
					 ((a[m].mx==a[n].mx+560)&&(a[m].my==a[n].my+560)&&((a[n+9].valid==false&&a[n+18].valid==false&&a[n+27].valid==false&&a[n+36].valid==false&&a[n+45].valid==false&&a[n+54].valid==false&&a[n+63].valid==false)||a[n+63].gcolour=='B'))||

					 ((a[m].mx==a[n].mx-80)&&(a[m].my==a[n].my-80)&&(a[n-9].valid==false||a[n-9].gcolour=='B'))||
					 ((a[m].mx==a[n].mx-160)&&(a[m].my==a[n].my-160)&&((a[n-9].valid==false&&a[n-18].valid==false)||a[n-18].gcolour=='B'))||
					 ((a[m].mx==a[n].mx-240)&&(a[m].my==a[n].my-240)&&((a[n-9].valid==false&&a[n-18].valid==false&&a[n-27].valid==false)||a[n-27].gcolour=='B'))||
					 ((a[m].mx==a[n].mx-320)&&(a[m].my==a[n].my-320)&&((a[n-9].valid==false&&a[n-18].valid==false&&a[n-27].valid==false&&a[n-36].valid==false)||a[n-36].gcolour=='B'))||
					 ((a[m].mx==a[n].mx-400)&&(a[m].my==a[n].my-400)&&((a[n-9].valid==false&&a[n-18].valid==false&&a[n-27].valid==false&&a[n-36].valid==false&&a[n-45].valid==false)||a[n-45].gcolour=='B'))||
					 ((a[m].mx==a[n].mx-480)&&(a[m].my==a[n].my-480)&&((a[n-9].valid==false&&a[n-18].valid==false&&a[n-27].valid==false&&a[n-36].valid==false&&a[n-45].valid==false&&a[n-54].valid==false)||a[n-54].gcolour=='B'))||
					 ((a[m].mx==a[n].mx-560)&&(a[m].my==a[n].my-560)&&((a[n-9].valid==false&&a[n-18].valid==false&&a[n-27].valid==false&&a[n-36].valid==false&&a[n-45].valid==false&&a[n-54].valid==false&&a[n-63].valid==false)||a[n-63].gcolour=='B'))||


					((a[m].mx==a[n].mx-80)&&(a[m].my==a[n].my+80)&&(a[n+7].valid==false||a[n+7].gcolour=='B'))||
					((a[m].mx==a[n].mx-160)&&(a[m].my==a[n].my+160)&&((a[n+7].valid==false&&a[n+16].valid==false)||a[n+16].gcolour=='B'))||
					((a[m].mx==a[n].mx-240)&&(a[m].my==a[n].my+240)&&((a[n+7].valid==false&&a[n+16].valid==false&&a[n+25].valid==false)||a[n+25].gcolour=='B'))||
					((a[m].mx==a[n].mx-320)&&(a[m].my==a[n].my+320)&&((a[n+7].valid==false&&a[n+16].valid==false&&a[n+25].valid==false&&a[n+34].valid==false)||a[n+34].gcolour=='B'))||
					((a[m].mx==a[n].mx-400)&&(a[m].my==a[n].my+400)&&((a[n+7].valid==false&&a[n+16].valid==false&&a[n+25].valid==false&&a[n+34].valid==false&&a[n+43].valid==false)||a[n+43].gcolour=='B'))||
					((a[m].mx==a[n].mx-480)&&(a[m].my==a[n].my+480)&&((a[n+7].valid==false&&a[n+16].valid==false&&a[n+25].valid==false&&a[n+34].valid==false&&a[n+43].valid==false&&a[n+52].valid==false)||a[n+52].gcolour=='B'))||
					((a[m].mx==a[n].mx-560)&&(a[m].my==a[n].my+560)&&((a[n+9].valid==false&&a[n+16].valid==false&&a[n+25].valid==false&&a[n+34].valid==false&&a[n+43].valid==false&&a[n+52].valid==false&&a[n+61].valid==false)||a[n+61].gcolour=='B'))||


					((a[m].mx==a[n].mx+80)&&(a[m].my==a[n].my-80)&&(a[n-7].valid==false||a[n-7].gcolour=='B'))||
					((a[m].mx==a[n].mx+160)&&(a[m].my==a[n].my-160)&&((a[n-7].valid==false&&a[n-16].valid==false)||a[n-16].gcolour=='B'))||
					((a[m].mx==a[n].mx+240)&&(a[m].my==a[n].my-240)&&((a[n-7].valid==false&&a[n-16].valid==false&&a[n-25].valid==false)||a[n-25].gcolour=='B'))||
					((a[m].mx==a[n].mx+320)&&(a[m].my==a[n].my-320)&&((a[n-7].valid==false&&a[n-16].valid==false&&a[n-25].valid==false&&a[n-34].valid==false)||a[n-34].gcolour=='B'))||
					((a[m].mx==a[n].mx-400)&&(a[m].my==a[n].my-400)&&((a[n-7].valid==false&&a[n-16].valid==false&&a[n-25].valid==false&&a[n-34].valid==false&&a[n-43].valid==false)||a[n-43].gcolour=='B'))||
					((a[m].mx==a[n].mx+480)&&(a[m].my==a[n].my-480)&&((a[n-7].valid==false&&a[n-16].valid==false&&a[n-25].valid==false&&a[n-34].valid==false&&a[n-43].valid==false&&a[n-52].valid==false)||a[n-52].gcolour=='B'))||
					((a[m].mx==a[n].mx+560)&&(a[m].my==a[n].my-560)&&((a[n-7].valid==false&&a[n-16].valid==false&&a[n-25].valid==false&&a[n-34].valid==false&&a[n-43].valid==false&&a[n-52].valid==false&&a[n-61].valid==false)||a[n-61].gcolour=='B')) )
					
					        
				       {




						   
					  for (int i = 0; i <32; i++)
            {
                if (mx >= chessPiece[i].xCordinate && mx <= chessPiece[i].xCordinate + 80 && my >= chessPiece[i].yCordinate && my <= chessPiece[i].yCordinate + 80)
                {
					chessPiece[i].xCordinate = -100;
					chessPiece[i].yCordinate = -100;
                    break;
                }
            }
			
            isSelected = false;
            //printf("%d %d", isSelectedX, isSelectedY);
			cout << mx << " " << my << endl;
            isSelectedX = mx - mx % 80;
            isSelectedY = my - my % 80;
            chessPiece[isn].xCordinate = isSelectedX;
            chessPiece[isn].yCordinate = isSelectedY;
			cout << isSelectedX << " " << isSelectedY << endl;

					
			chessPiece[isn].r = 255;
			chessPiece[isn].g = 255;
			chessPiece[isn].b = 255;

			if(isn>=16){
				chessPiece[isn].r = 0;
			    chessPiece[isn].g = 0;
			    chessPiece[isn].b = 255;

			}

			
						 strcpy(a[m].letter,"Bishop");

	                        a[m].valid=true;
						    a[n].valid=false;
			 	            a[m].gcolour='w';
			     		



				 }
		   	 }

			   else if(!(strcmp(a[m].letter,a[5].letter))){

				   printf("\n\n!!Cheak!!\n\n");

	        	  }
	     }
	  }
	  

 if((!(strcmp(a[n].letter,a[59].letter))&&a[5].gcolour=='w')){

		if(a[m].valid==false||a[m].gcolour=='B'){

			 if(strcmp(a[m].letter,a[5].letter)){


				if( ((a[m].mx==a[n].mx+80)&&(a[m].my==a[n].my+80)&&(a[n+9].valid==false||a[n+9].gcolour=='w'))||
					 ((a[m].mx==a[n].mx+160)&&(a[m].my==a[n].my+160)&&((a[n+9].valid==false&&a[n+18].valid==false)||a[n+18].gcolour=='w'))||
					 ((a[m].mx==a[n].mx+240)&&(a[m].my==a[n].my+240)&&((a[n+9].valid==false&&a[n+18].valid==false&&a[n+27].valid==false)||a[n+27].gcolour=='w'))||
					 ((a[m].mx==a[n].mx+320)&&(a[m].my==a[n].my+320)&&((a[n+9].valid==false&&a[n+18].valid==false&&a[n+27].valid==false&&a[n+36].valid==false)||a[n+36].gcolour=='w'))||
					 ((a[m].mx==a[n].mx+400)&&(a[m].my==a[n].my+400)&&((a[n+9].valid==false&&a[n+18].valid==false&&a[n+27].valid==false&&a[n+36].valid==false&&a[n+45].valid==false)||a[n+45].gcolour=='w'))||
					 ((a[m].mx==a[n].mx+480)&&(a[m].my==a[n].my+480)&&((a[n+9].valid==false&&a[n+18].valid==false&&a[n+27].valid==false&&a[n+36].valid==false&&a[n+45].valid==false&&a[n+54].valid==false)||a[n+54].gcolour=='w'))||
					 ((a[m].mx==a[n].mx+560)&&(a[m].my==a[n].my+560)&&((a[n+9].valid==false&&a[n+18].valid==false&&a[n+27].valid==false&&a[n+36].valid==false&&a[n+45].valid==false&&a[n+54].valid==false&&a[n+63].valid==false)||a[n+63].gcolour=='w'))||

					 ((a[m].mx==a[n].mx-80)&&(a[m].my==a[n].my-80)&&(a[n-9].valid==false||a[n-9].gcolour=='w'))||
					 ((a[m].mx==a[n].mx-160)&&(a[m].my==a[n].my-160)&&((a[n-9].valid==false&&a[n-18].valid==false)||a[n-18].gcolour=='w'))||
					 ((a[m].mx==a[n].mx-240)&&(a[m].my==a[n].my-240)&&((a[n-9].valid==false&&a[n-18].valid==false&&a[n-27].valid==false)||a[n-27].gcolour=='w'))||
					 ((a[m].mx==a[n].mx-320)&&(a[m].my==a[n].my-320)&&((a[n-9].valid==false&&a[n-18].valid==false&&a[n-27].valid==false&&a[n-36].valid==false)||a[n-36].gcolour=='w'))||
					 ((a[m].mx==a[n].mx-400)&&(a[m].my==a[n].my-400)&&((a[n-9].valid==false&&a[n-18].valid==false&&a[n-27].valid==false&&a[n-36].valid==false&&a[n-45].valid==false)||a[n-45].gcolour=='w'))||
					 ((a[m].mx==a[n].mx-480)&&(a[m].my==a[n].my-480)&&((a[n-9].valid==false&&a[n-18].valid==false&&a[n-27].valid==false&&a[n-36].valid==false&&a[n-45].valid==false&&a[n-54].valid==false)||a[n-54].gcolour=='w'))||
					 ((a[m].mx==a[n].mx-560)&&(a[m].my==a[n].my-560)&&((a[n-9].valid==false&&a[n-18].valid==false&&a[n-27].valid==false&&a[n-36].valid==false&&a[n-45].valid==false&&a[n-54].valid==false&&a[n-63].valid==false)||a[n-63].gcolour=='w'))||


					((a[m].mx==a[n].mx-80)&&(a[m].my==a[n].my+80)&&(a[n+7].valid==false||a[n+7].gcolour=='w'))||
					((a[m].mx==a[n].mx-160)&&(a[m].my==a[n].my+160)&&((a[n+7].valid==false&&a[n+16].valid==false)||a[n+16].gcolour=='w'))||
					((a[m].mx==a[n].mx-240)&&(a[m].my==a[n].my+240)&&((a[n+7].valid==false&&a[n+16].valid==false&&a[n+25].valid==false)||a[n+25].gcolour=='w'))||
					((a[m].mx==a[n].mx-320)&&(a[m].my==a[n].my+320)&&((a[n+7].valid==false&&a[n+16].valid==false&&a[n+25].valid==false&&a[n+34].valid==false)||a[n+34].gcolour=='w'))||
					((a[m].mx==a[n].mx-400)&&(a[m].my==a[n].my+400)&&((a[n+7].valid==false&&a[n+16].valid==false&&a[n+25].valid==false&&a[n+34].valid==false&&a[n+43].valid==false)||a[n+43].gcolour=='w'))||
					((a[m].mx==a[n].mx-480)&&(a[m].my==a[n].my+480)&&((a[n+7].valid==false&&a[n+16].valid==false&&a[n+25].valid==false&&a[n+34].valid==false&&a[n+43].valid==false&&a[n+52].valid==false)||a[n+52].gcolour=='w'))||
					((a[m].mx==a[n].mx-560)&&(a[m].my==a[n].my+560)&&((a[n+9].valid==false&&a[n+16].valid==false&&a[n+25].valid==false&&a[n+34].valid==false&&a[n+43].valid==false&&a[n+52].valid==false&&a[n+61].valid==false)||a[n+61].gcolour=='w'))||


					((a[m].mx==a[n].mx+80)&&(a[m].my==a[n].my-80)&&(a[n-7].valid==false||a[n-7].gcolour=='w'))||
					((a[m].mx==a[n].mx+160)&&(a[m].my==a[n].my-160)&&((a[n-7].valid==false&&a[n-16].valid==false)||a[n-16].gcolour=='w'))||
					((a[m].mx==a[n].mx+240)&&(a[m].my==a[n].my-240)&&((a[n-7].valid==false&&a[n-16].valid==false&&a[n-25].valid==false)||a[n-25].gcolour=='w'))||
					((a[m].mx==a[n].mx+320)&&(a[m].my==a[n].my-320)&&((a[n-7].valid==false&&a[n-16].valid==false&&a[n-25].valid==false&&a[n-34].valid==false)||a[n-34].gcolour=='w'))||
					((a[m].mx==a[n].mx-400)&&(a[m].my==a[n].my-400)&&((a[n-7].valid==false&&a[n-16].valid==false&&a[n-25].valid==false&&a[n-34].valid==false&&a[n-43].valid==false)||a[n-43].gcolour=='w'))||
					((a[m].mx==a[n].mx+480)&&(a[m].my==a[n].my-480)&&((a[n-7].valid==false&&a[n-16].valid==false&&a[n-25].valid==false&&a[n-34].valid==false&&a[n-43].valid==false&&a[n-52].valid==false)||a[n-52].gcolour=='w'))||
					((a[m].mx==a[n].mx+560)&&(a[m].my==a[n].my-560)&&((a[n-7].valid==false&&a[n-16].valid==false&&a[n-25].valid==false&&a[n-34].valid==false&&a[n-43].valid==false&&a[n-52].valid==false&&a[n-61].valid==false)||a[n-61].gcolour=='w')))
				    {



						
					  for (int i = 0; i <32; i++)
            {
                if (mx >= chessPiece[i].xCordinate && mx <= chessPiece[i].xCordinate + 80 && my >= chessPiece[i].yCordinate && my <= chessPiece[i].yCordinate + 80)
                {
					chessPiece[i].xCordinate = -100;
					chessPiece[i].yCordinate = -100;
                    break;
                }
            }
			
            isSelected = false;
            //printf("%d %d", isSelectedX, isSelectedY);
			cout << mx << " " << my << endl;
            isSelectedX = mx - mx % 80;
            isSelectedY = my - my % 80;
            chessPiece[isn].xCordinate = isSelectedX;
            chessPiece[isn].yCordinate = isSelectedY;
			cout << isSelectedX << " " << isSelectedY << endl;

					
			chessPiece[isn].r = 255;
			chessPiece[isn].g = 255;
			chessPiece[isn].b = 255;

			if(isn>=16){
				chessPiece[isn].r = 0;
			    chessPiece[isn].g = 0;
			    chessPiece[isn].b = 255;

			}

			
					
						 strcpy(a[m].letter,"Bishop");

	                        a[m].valid=true;
						    a[n].valid=false;
			 	            a[m].gcolour='w';
	
					          
                      }

	                }

			    else if(!(strcmp(a[m].letter,a[5].letter))){

				   printf("\n\n!!Cheak!!\n\n");

				}


          }

		}



	//	void Rook(){

	if((!(strcmp(a[n].letter,a[1].letter))&&p[5].colour=='w')){

		if(a[m].valid==false||a[m].gcolour=='B'){

			 if(strcmp(a[m].letter,a[5].letter)){

		
				if( ((a[m].mx==a[n].mx+80)&&(a[m].my==a[n].my)&&((a[n+1].valid==false)||a[n+1].gcolour=='B'))||
					((a[m].mx==a[n].mx+160)&&(a[m].my==a[n].my)&&((a[n+1].valid==false&&a[n+2].valid==false)||a[n+2].gcolour=='B'))||
					((a[m].mx==a[n].mx+240)&&(a[m].my==a[n].my)&&((a[n+1].valid==false&&a[n+2].valid==false&&a[n+3].valid==false)||a[n+3].gcolour=='B'))||
					((a[m].mx==a[n].mx+320)&&(a[m].my==a[n].my)&&((a[n+1].valid==false&&a[n+2].valid==false&&a[n+3].valid==false&&a[n+4].valid==false)||a[n+4].gcolour=='B'))||
					((a[m].mx==a[n].mx+400)&&(a[m].my==a[n].my)&&((a[n+1].valid==false&&a[n+2].valid==false&&a[n+3].valid==false&&a[n+4].valid==false&&a[n+5].valid==false)||a[n+5].gcolour=='B'))||
					((a[m].mx==a[n].mx+480)&&(a[m].my==a[n].my)&&((a[n+1].valid==false&&a[n+2].valid==false&&a[n+3].valid==false&&a[n+4].valid==false&&a[n+5].valid==false&&a[n+6].valid==false)||a[n+6].gcolour=='B'))||
					((a[m].mx==a[n].mx+560)&&(a[m].my==a[n].my)&&((a[n+1].valid==false&&a[n+2].valid==false&&a[n+3].valid==false&&a[n+4].valid==false&&a[n+5].valid==false&&a[n+6].valid==false&&a[n+7].valid==false)||a[n+7].gcolour=='B'))||


		            ((a[m].mx==a[n].mx-80)&&(a[m].my==a[n].my)&&((a[n-1].valid==false)||a[n-1].gcolour=='B'))||
					((a[m].mx==a[n].mx-160)&&(a[m].my==a[n].my)&&((a[n-1].valid==false&&a[n-2].valid==false)||a[n-2].gcolour=='B'))||
					((a[m].mx==a[n].mx-240)&&(a[m].my==a[n].my)&&((a[n-1].valid==false&&a[n-2].valid==false&&a[n-3].valid==false)||a[n-3].gcolour=='B'))||
					((a[m].mx==a[n].mx-320)&&(a[m].my==a[n].my)&&((a[n-1].valid==false&&a[n-2].valid==false&&a[n-3].valid==false&&a[n-4].valid==false)||a[n-4].gcolour=='B'))||
					((a[m].mx==a[n].mx-400)&&(a[m].my==a[n].my)&&((a[n-1].valid==false&&a[n-2].valid==false&&a[n-3].valid==false&&a[n-4].valid==false&&a[n-5].valid==false)||a[n-5].gcolour=='B'))||
					((a[m].mx==a[n].mx-480)&&(a[m].my==a[n].my)&&((a[n-1].valid==false&&a[n-2].valid==false&&a[n-3].valid==false&&a[n-4].valid==false&&a[n-5].valid==false&&a[n-6].valid==false)||a[n-6].gcolour=='B'))||
					((a[m].mx==a[n].mx-560)&&(a[m].my==a[n].my)&&((a[n-1].valid==false&&a[n-2].valid==false&&a[n-3].valid==false&&a[n-4].valid==false&&a[n-5].valid==false&&a[n-6].valid==false&&a[n-7].valid==false)||a[n-7].gcolour=='B'))||

					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my+80)&&((a[n+8].valid==false)||a[n+8].gcolour=='B'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my+160)&&((a[n+8].valid==false&&a[n+16].valid==false)||a[n+16].gcolour=='B'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my+240)&&((a[n+8].valid==false&&a[n+16].valid==false&&a[n+24].valid==false)||a[n+24].gcolour=='B'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my+320)&&((a[n+8].valid==false&&a[n+16].valid==false&&a[n+24].valid==false&&a[n+32].valid==false)||a[n+32].gcolour=='B'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my+400)&&((a[n+8].valid==false&&a[n+16].valid==false&&a[n+24].valid==false&&a[n+32].valid==false&&a[n+40].valid==false)||a[n+40].gcolour=='B'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my+480)&&((a[n+8].valid==false&&a[n+16].valid==false&&a[n+24].valid==false&&a[n+32].valid==false&&a[n+40].valid==false&&a[n+48].valid==false)||a[n+48].gcolour=='B'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my+560)&&((a[n+8].valid==false&&a[n+16].valid==false&&a[n+24].valid==false&&a[n+32].valid==false&&a[n+40].valid==false&&a[n+48].valid==false&&a[n+56].valid==false)||a[n+56].gcolour=='B'))||


					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my-80)&&((a[n-8].valid==false)||a[n-8].gcolour=='B'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my-160)&&((a[n-8].valid==false&&a[n-16].valid==false)||a[n-16].gcolour=='B'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my-240)&&((a[n-8].valid==false&&a[n-16].valid==false&&a[n-24].valid==false)||a[n-24].gcolour=='B'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my-320)&&((a[n-8].valid==false&&a[n-16].valid==false&&a[n-24].valid==false&&a[n-32].valid==false)||a[n-32].gcolour=='B'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my-400)&&((a[n-8].valid==false&&a[n-16].valid==false&&a[n-24].valid==false&&a[n-32].valid==false&&a[n-40].valid==false)||a[n-40].gcolour=='B'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my-480)&&((a[n-8].valid==false&&a[n-16].valid==false&&a[n-24].valid==false&&a[n-32].valid==false&&a[n-40].valid==false&&a[n-48].valid==false)||a[n-48].gcolour=='B'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my-560)&&((a[n-8].valid==false&&a[n-16].valid==false&&a[n-24].valid==false&&a[n-32].valid==false&&a[n-40].valid==false&&a[n-48].valid==false&&a[n-56].valid==false)||a[n-56].gcolour=='B')))

				{
					for (int i = 0; i <32; i++)
					  {
                if (mx >= chessPiece[i].xCordinate && mx <= chessPiece[i].xCordinate + 80 && my >= chessPiece[i].yCordinate && my <= chessPiece[i].yCordinate + 80)
                {
					chessPiece[i].xCordinate = -100;
					chessPiece[i].yCordinate = -100;
                    break;
                }
            }
			
            isSelected = false;
            //printf("%d %d", isSelectedX, isSelectedY);
			cout << mx << " " << my << endl;
            isSelectedX = mx - mx % 80;
            isSelectedY = my - my % 80;
            chessPiece[isn].xCordinate = isSelectedX;
            chessPiece[isn].yCordinate = isSelectedY;
			cout << isSelectedX << " " << isSelectedY << endl;

					
			chessPiece[isn].r = 255;
			chessPiece[isn].g = 255;
			chessPiece[isn].b = 255;

			if(isn>=16){
				chessPiece[isn].r = 0;
			    chessPiece[isn].g = 0;
			    chessPiece[isn].b = 255;

			}

			
						 strcpy(a[m].letter,"Rook");

	                        a[m].valid=true;
						    a[n].valid=false;
			 	            a[m].gcolour='B';
					        
						 
                      }
			    
			 }

		 else if(!(strcmp(a[m].letter,a[5].letter))){
					
				   printf("Cheak");
		}
	}
	
	}
	


if((!(strcmp(a[n].letter,a[57].letter))&&p[5].colour=='B')){

		if(a[m].valid==false||p[m].colour=='w'){

			 if(strcmp(a[m].letter,a[5].letter)){

		
				if(  ((a[m].mx==a[n].mx+80)&&(a[m].my==a[n].my)&&((a[n+1].valid==false)||a[n+1].gcolour=='w'))||
					((a[m].mx==a[n].mx+160)&&(a[m].my==a[n].my)&&((a[n+1].valid==false&&a[n+2].valid==false)||a[n+2].gcolour=='w'))||
					((a[m].mx==a[n].mx+240)&&(a[m].my==a[n].my)&&((a[n+1].valid==false&&a[n+2].valid==false&&a[n+3].valid==false)||a[n+3].gcolour=='w'))||
					((a[m].mx==a[n].mx+320)&&(a[m].my==a[n].my)&&((a[n+1].valid==false&&a[n+2].valid==false&&a[n+3].valid==false&&a[n+4].valid==false)||a[n+4].gcolour=='w'))||
					((a[m].mx==a[n].mx+400)&&(a[m].my==a[n].my)&&((a[n+1].valid==false&&a[n+2].valid==false&&a[n+3].valid==false&&a[n+4].valid==false&&a[n+5].valid==false)||a[n+5].gcolour=='w'))||
					((a[m].mx==a[n].mx+480)&&(a[m].my==a[n].my)&&((a[n+1].valid==false&&a[n+2].valid==false&&a[n+3].valid==false&&a[n+4].valid==false&&a[n+5].valid==false&&a[n+6].valid==false)||a[n+6].gcolour=='w'))||
					((a[m].mx==a[n].mx+560)&&(a[m].my==a[n].my)&&((a[n+1].valid==false&&a[n+2].valid==false&&a[n+3].valid==false&&a[n+4].valid==false&&a[n+5].valid==false&&a[n+6].valid==false&&a[n+7].valid==false)||a[n+7].gcolour=='w'))||


		            ((a[m].mx==a[n].mx-80)&&(a[m].my==a[n].my)&&((a[n-1].valid==false)||a[n-1].gcolour=='w'))||
					((a[m].mx==a[n].mx-160)&&(a[m].my==a[n].my)&&((a[n-1].valid==false&&a[n-2].valid==false)||a[n-2].gcolour=='w'))||
					((a[m].mx==a[n].mx-240)&&(a[m].my==a[n].my)&&((a[n-1].valid==false&&a[n-2].valid==false&&a[n-3].valid==false)||a[n-3].gcolour=='w'))||
					((a[m].mx==a[n].mx-320)&&(a[m].my==a[n].my)&&((a[n-1].valid==false&&a[n-2].valid==false&&a[n-3].valid==false&&a[n-4].valid==false)||a[n-4].gcolour=='w'))||
					((a[m].mx==a[n].mx-400)&&(a[m].my==a[n].my)&&((a[n-1].valid==false&&a[n-2].valid==false&&a[n-3].valid==false&&a[n-4].valid==false&&a[n-5].valid==false)||a[n-5].gcolour=='w'))||
					((a[m].mx==a[n].mx-480)&&(a[m].my==a[n].my)&&((a[n-1].valid==false&&a[n-2].valid==false&&a[n-3].valid==false&&a[n-4].valid==false&&a[n-5].valid==false&&a[n-6].valid==false)||a[n-6].gcolour=='w'))||
					((a[m].mx==a[n].mx-560)&&(a[m].my==a[n].my)&&((a[n-1].valid==false&&a[n-2].valid==false&&a[n-3].valid==false&&a[n-4].valid==false&&a[n-5].valid==false&&a[n-6].valid==false&&a[n-7].valid==false)||a[n-7].gcolour=='w'))||

					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my+80)&&((a[n+8].valid==false)||a[n+8].gcolour=='w'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my+160)&&((a[n+8].valid==false&&a[n+16].valid==false)||a[n+16].gcolour=='w'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my+240)&&((a[n+8].valid==false&&a[n+16].valid==false&&a[n+24].valid==false)||a[n+24].gcolour=='w'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my+320)&&((a[n+8].valid==false&&a[n+16].valid==false&&a[n+24].valid==false&&a[n+32].valid==false)||a[n+32].gcolour=='w'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my+400)&&((a[n+8].valid==false&&a[n+16].valid==false&&a[n+24].valid==false&&a[n+32].valid==false&&a[n+40].valid==false)||a[n+40].gcolour=='w'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my+480)&&((a[n+8].valid==false&&a[n+16].valid==false&&a[n+24].valid==false&&a[n+32].valid==false&&a[n+40].valid==false&&a[n+48].valid==false)||a[n+48].gcolour=='w'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my+560)&&((a[n+8].valid==false&&a[n+16].valid==false&&a[n+24].valid==false&&a[n+32].valid==false&&a[n+40].valid==false&&a[n+48].valid==false&&a[n+56].valid==false)||a[n+56].gcolour=='w'))||


					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my-80)&&((a[n-8].valid==false)||a[n-8].gcolour=='w'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my-160)&&((a[n-8].valid==false&&a[n-16].valid==false)||a[n-16].gcolour=='w'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my-240)&&((a[n-8].valid==false&&a[n-16].valid==false&&a[n-24].valid==false)||a[n-24].gcolour=='w'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my-320)&&((a[n-8].valid==false&&a[n-16].valid==false&&a[n-24].valid==false&&a[n-32].valid==false)||a[n-32].gcolour=='w'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my-400)&&((a[n-8].valid==false&&a[n-16].valid==false&&a[n-24].valid==false&&a[n-32].valid==false&&a[n-40].valid==false)||a[n-40].gcolour=='w'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my-480)&&((a[n-8].valid==false&&a[n-16].valid==false&&a[n-24].valid==false&&a[n-32].valid==false&&a[n-40].valid==false&&a[n-48].valid==false)||a[n-48].gcolour=='w'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my-560)&&((a[n-8].valid==false&&a[n-16].valid==false&&a[n-24].valid==false&&a[n-32].valid==false&&a[n-40].valid==false&&a[n-48].valid==false&&a[n-56].valid==false)||a[n-56].gcolour=='w')))
						  {
							  for (int i = 0; i <32; i++)
					  {
                if (mx >= chessPiece[i].xCordinate && mx <= chessPiece[i].xCordinate + 80 && my >= chessPiece[i].yCordinate && my <= chessPiece[i].yCordinate + 80)
                {
					chessPiece[i].xCordinate = -100;
					chessPiece[i].yCordinate = -100;
                    break;
                }
            }
			
            isSelected = false;
            //printf("%d %d", isSelectedX, isSelectedY);
			cout << mx << " " << my << endl;
            isSelectedX = mx - mx % 80;
            isSelectedY = my - my % 80;
            chessPiece[isn].xCordinate = isSelectedX;
            chessPiece[isn].yCordinate = isSelectedY;
			cout << isSelectedX << " " << isSelectedY << endl;

					
			chessPiece[isn].r = 255;
			chessPiece[isn].g = 255;
			chessPiece[isn].b = 255;

			if(isn>=16){
				chessPiece[isn].r = 0;
			    chessPiece[isn].g = 0;
			    chessPiece[isn].b = 255;

			}

			
						 strcpy(a[m].letter,"Rook");

	                        a[m].valid=true;
						    a[n].valid=false;
			 	            a[m].gcolour='w';
					        
						 
                      }

					         
                      
	                }

			    else if(!(strcmp(a[m].letter,a[5].letter))){

				   printf("Cheak");

				}
			

          }

        }
	

//void Queen(){

	if((!(strcmp(a[n].letter,a[4].letter))&&p[4].colour=='w')){

		if(a[m].valid==false||p[m].colour=='B'){

			 if((strcmp(a[m].letter,a[61].letter))){

		
				if( ((a[m].mx==a[n].mx+80)&&(a[m].my==a[n].my)&&((a[n+1].valid==false)||a[n+1].gcolour=='B'))||
					((a[m].mx==a[n].mx+160)&&(a[m].my==a[n].my)&&((a[n+1].valid==false&&a[n+2].valid==false)||a[n+2].gcolour=='B'))||
					((a[m].mx==a[n].mx+240)&&(a[m].my==a[n].my)&&((a[n+1].valid==false&&a[n+2].valid==false&&a[n+3].valid==false)||a[n+3].gcolour=='B'))||
					((a[m].mx==a[n].mx+320)&&(a[m].my==a[n].my)&&((a[n+1].valid==false&&a[n+2].valid==false&&a[n+3].valid==false&&a[n+4].valid==false)||a[n+4].gcolour=='B'))||
					((a[m].mx==a[n].mx+400)&&(a[m].my==a[n].my)&&((a[n+1].valid==false&&a[n+2].valid==false&&a[n+3].valid==false&&a[n+4].valid==false&&a[n+5].valid==false)||a[n+5].gcolour=='B'))||
					((a[m].mx==a[n].mx+480)&&(a[m].my==a[n].my)&&((a[n+1].valid==false&&a[n+2].valid==false&&a[n+3].valid==false&&a[n+4].valid==false&&a[n+5].valid==false&&a[n+6].valid==false)||a[n+6].gcolour=='B'))||
					((a[m].mx==a[n].mx+560)&&(a[m].my==a[n].my)&&((a[n+1].valid==false&&a[n+2].valid==false&&a[n+3].valid==false&&a[n+4].valid==false&&a[n+5].valid==false&&a[n+6].valid==false&&a[n+7].valid==false)||a[n+7].gcolour=='B'))||


		            ((a[m].mx==a[n].mx-80)&&(a[m].my==a[n].my)&&((a[n-1].valid==false)||a[n-1].gcolour=='B'))||
					((a[m].mx==a[n].mx-160)&&(a[m].my==a[n].my)&&((a[n-1].valid==false&&a[n-2].valid==false)||a[n-2].gcolour=='B'))||
					((a[m].mx==a[n].mx-240)&&(a[m].my==a[n].my)&&((a[n-1].valid==false&&a[n-2].valid==false&&a[n-3].valid==false)||a[n-3].gcolour=='B'))||
					((a[m].mx==a[n].mx-320)&&(a[m].my==a[n].my)&&((a[n-1].valid==false&&a[n-2].valid==false&&a[n-3].valid==false&&a[n-4].valid==false)||a[n-4].gcolour=='B'))||
					((a[m].mx==a[n].mx-400)&&(a[m].my==a[n].my)&&((a[n-1].valid==false&&a[n-2].valid==false&&a[n-3].valid==false&&a[n-4].valid==false&&a[n-5].valid==false)||a[n-5].gcolour=='B'))||
					((a[m].mx==a[n].mx-480)&&(a[m].my==a[n].my)&&((a[n-1].valid==false&&a[n-2].valid==false&&a[n-3].valid==false&&a[n-4].valid==false&&a[n-5].valid==false&&a[n-6].valid==false)||a[n-6].gcolour=='B'))||
					((a[m].mx==a[n].mx-560)&&(a[m].my==a[n].my)&&((a[n-1].valid==false&&a[n-2].valid==false&&a[n-3].valid==false&&a[n-4].valid==false&&a[n-5].valid==false&&a[n-6].valid==false&&a[n-7].valid==false)||a[n-7].gcolour=='B'))||

					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my+80)&&((a[n+8].valid==false)||a[n+8].gcolour=='B'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my+160)&&((a[n+8].valid==false&&a[n+16].valid==false)||a[n+16].gcolour=='B'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my+240)&&((a[n+8].valid==false&&a[n+16].valid==false&&a[n+24].valid==false)||a[n+24].gcolour=='B'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my+320)&&((a[n+8].valid==false&&a[n+16].valid==false&&a[n+24].valid==false&&a[n+32].valid==false)||a[n+32].gcolour=='B'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my+400)&&((a[n+8].valid==false&&a[n+16].valid==false&&a[n+24].valid==false&&a[n+32].valid==false&&a[n+40].valid==false)||a[n+40].gcolour=='B'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my+480)&&((a[n+8].valid==false&&a[n+16].valid==false&&a[n+24].valid==false&&a[n+32].valid==false&&a[n+40].valid==false&&a[n+48].valid==false)||a[n+48].gcolour=='B'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my+560)&&((a[n+8].valid==false&&a[n+16].valid==false&&a[n+24].valid==false&&a[n+32].valid==false&&a[n+40].valid==false&&a[n+48].valid==false&&a[n+56].valid==false)||a[n+56].gcolour=='B'))||


					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my-80)&&((a[n-8].valid==false)||a[n-8].gcolour=='B'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my-160)&&((a[n-8].valid==false&&a[n-16].valid==false)||a[n-16].gcolour=='B'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my-240)&&((a[n-8].valid==false&&a[n-16].valid==false&&a[n-24].valid==false)||a[n-24].gcolour=='B'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my-320)&&((a[n-8].valid==false&&a[n-16].valid==false&&a[n-24].valid==false&&a[n-32].valid==false)||a[n-32].gcolour=='B'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my-400)&&((a[n-8].valid==false&&a[n-16].valid==false&&a[n-24].valid==false&&a[n-32].valid==false&&a[n-40].valid==false)||a[n-40].gcolour=='B'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my-480)&&((a[n-8].valid==false&&a[n-16].valid==false&&a[n-24].valid==false&&a[n-32].valid==false&&a[n-40].valid==false&&a[n-48].valid==false)||a[n-48].gcolour=='B'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my-560)&&((a[n-8].valid==false&&a[n-16].valid==false&&a[n-24].valid==false&&a[n-32].valid==false&&a[n-40].valid==false&&a[n-48].valid==false&&a[n-56].valid==false)||a[n-56].gcolour=='B'))||
					  
					  ((a[m].mx==a[n].mx+80)&&(a[m].my==a[n].my+80)&&(a[n+9].valid==false||a[n+9].gcolour=='B'))||
					 ((a[m].mx==a[n].mx+160)&&(a[m].my==a[n].my+160)&&((a[n+9].valid==false&&a[n+18].valid==false)||a[n+18].gcolour=='B'))||
					 ((a[m].mx==a[n].mx+240)&&(a[m].my==a[n].my+240)&&((a[n+9].valid==false&&a[n+18].valid==false&&a[n+27].valid==false)||a[n+27].gcolour=='B'))||
					 ((a[m].mx==a[n].mx+320)&&(a[m].my==a[n].my+320)&&((a[n+9].valid==false&&a[n+18].valid==false&&a[n+27].valid==false&&a[n+36].valid==false)||a[n+36].gcolour=='B'))||
					 ((a[m].mx==a[n].mx+400)&&(a[m].my==a[n].my+400)&&((a[n+9].valid==false&&a[n+18].valid==false&&a[n+27].valid==false&&a[n+36].valid==false&&a[n+45].valid==false)||a[n+45].gcolour=='B'))||
					 ((a[m].mx==a[n].mx+480)&&(a[m].my==a[n].my+480)&&((a[n+9].valid==false&&a[n+18].valid==false&&a[n+27].valid==false&&a[n+36].valid==false&&a[n+45].valid==false&&a[n+54].valid==false)||a[n+54].gcolour=='B'))||
					 ((a[m].mx==a[n].mx+560)&&(a[m].my==a[n].my+560)&&((a[n+9].valid==false&&a[n+18].valid==false&&a[n+27].valid==false&&a[n+36].valid==false&&a[n+45].valid==false&&a[n+54].valid==false&&a[n+63].valid==false)||a[n+63].gcolour=='B'))||

					 ((a[m].mx==a[n].mx-80)&&(a[m].my==a[n].my-80)&&(a[n-9].valid==false||a[n-9].gcolour=='B'))||
					 ((a[m].mx==a[n].mx-160)&&(a[m].my==a[n].my-160)&&((a[n-9].valid==false&&a[n-18].valid==false)||a[n-18].gcolour=='B'))||
					 ((a[m].mx==a[n].mx-240)&&(a[m].my==a[n].my-240)&&((a[n-9].valid==false&&a[n-18].valid==false&&a[n-27].valid==false)||a[n-27].gcolour=='B'))||
					 ((a[m].mx==a[n].mx-320)&&(a[m].my==a[n].my-320)&&((a[n-9].valid==false&&a[n-18].valid==false&&a[n-27].valid==false&&a[n-36].valid==false)||a[n-36].gcolour=='B'))||
					 ((a[m].mx==a[n].mx-400)&&(a[m].my==a[n].my-400)&&((a[n-9].valid==false&&a[n-18].valid==false&&a[n-27].valid==false&&a[n-36].valid==false&&a[n-45].valid==false)||a[n-45].gcolour=='B'))||
					 ((a[m].mx==a[n].mx-480)&&(a[m].my==a[n].my-480)&&((a[n-9].valid==false&&a[n-18].valid==false&&a[n-27].valid==false&&a[n-36].valid==false&&a[n-45].valid==false&&a[n-54].valid==false)||a[n-54].gcolour=='B'))||
					 ((a[m].mx==a[n].mx-560)&&(a[m].my==a[n].my-560)&&((a[n-9].valid==false&&a[n-18].valid==false&&a[n-27].valid==false&&a[n-36].valid==false&&a[n-45].valid==false&&a[n-54].valid==false&&a[n-63].valid==false)||a[n-63].gcolour=='B'))||


					((a[m].mx==a[n].mx-80)&&(a[m].my==a[n].my+80)&&(a[n+7].valid==false||a[n+7].gcolour=='B'))||
					((a[m].mx==a[n].mx-160)&&(a[m].my==a[n].my+160)&&((a[n+7].valid==false&&a[n+16].valid==false)||a[n+16].gcolour=='B'))||
					((a[m].mx==a[n].mx-240)&&(a[m].my==a[n].my+240)&&((a[n+7].valid==false&&a[n+16].valid==false&&a[n+25].valid==false)||a[n+25].gcolour=='B'))||
					((a[m].mx==a[n].mx-320)&&(a[m].my==a[n].my+320)&&((a[n+7].valid==false&&a[n+16].valid==false&&a[n+25].valid==false&&a[n+34].valid==false)||a[n+34].gcolour=='B'))||
					((a[m].mx==a[n].mx-400)&&(a[m].my==a[n].my+400)&&((a[n+7].valid==false&&a[n+16].valid==false&&a[n+25].valid==false&&a[n+34].valid==false&&a[n+43].valid==false)||a[n+43].gcolour=='B'))||
					((a[m].mx==a[n].mx-480)&&(a[m].my==a[n].my+480)&&((a[n+7].valid==false&&a[n+16].valid==false&&a[n+25].valid==false&&a[n+34].valid==false&&a[n+43].valid==false&&a[n+52].valid==false)||a[n+52].gcolour=='B'))||
					((a[m].mx==a[n].mx-560)&&(a[m].my==a[n].my+560)&&((a[n+9].valid==false&&a[n+16].valid==false&&a[n+25].valid==false&&a[n+34].valid==false&&a[n+43].valid==false&&a[n+52].valid==false&&a[n+61].valid==false)||a[n+61].gcolour=='B'))||


					((a[m].mx==a[n].mx+80)&&(a[m].my==a[n].my-80)&&(a[n-7].valid==false||a[n-7].gcolour=='B'))||
					((a[m].mx==a[n].mx+160)&&(a[m].my==a[n].my-160)&&((a[n-7].valid==false&&a[n-16].valid==false)||a[n-16].gcolour=='B'))||
					((a[m].mx==a[n].mx+240)&&(a[m].my==a[n].my-240)&&((a[n-7].valid==false&&a[n-16].valid==false&&a[n-25].valid==false)||a[n-25].gcolour=='B'))||
					((a[m].mx==a[n].mx+320)&&(a[m].my==a[n].my-320)&&((a[n-7].valid==false&&a[n-16].valid==false&&a[n-25].valid==false&&a[n-34].valid==false)||a[n-34].gcolour=='B'))||
					((a[m].mx==a[n].mx-400)&&(a[m].my==a[n].my-400)&&((a[n-7].valid==false&&a[n-16].valid==false&&a[n-25].valid==false&&a[n-34].valid==false&&a[n-43].valid==false)||a[n-43].gcolour=='B'))||
					((a[m].mx==a[n].mx+480)&&(a[m].my==a[n].my-480)&&((a[n-7].valid==false&&a[n-16].valid==false&&a[n-25].valid==false&&a[n-34].valid==false&&a[n-43].valid==false&&a[n-52].valid==false)||a[n-52].gcolour=='B'))||
					((a[m].mx==a[n].mx+560)&&(a[m].my==a[n].my-560)&&((a[n-7].valid==false&&a[n-16].valid==false&&a[n-25].valid==false&&a[n-34].valid==false&&a[n-43].valid==false&&a[n-52].valid==false&&a[n-61].valid==false)||a[n-61].gcolour=='B'))){

					    for (int i = 0; i <32; i++)
					  {
                if (mx >= chessPiece[i].xCordinate && mx <= chessPiece[i].xCordinate + 80 && my >= chessPiece[i].yCordinate && my <= chessPiece[i].yCordinate + 80)
                {
					chessPiece[i].xCordinate = -100;
					chessPiece[i].yCordinate = -100;
                    break;
                }
            }
			
            isSelected = false;
            //printf("%d %d", isSelectedX, isSelectedY);
			cout << mx << " " << my << endl;
            isSelectedX = mx - mx % 80;
            isSelectedY = my - my % 80;
            chessPiece[isn].xCordinate = isSelectedX;
            chessPiece[isn].yCordinate = isSelectedY;
			cout << isSelectedX << " " << isSelectedY << endl;

					
			chessPiece[isn].r = 255;
			chessPiece[isn].g = 255;
			chessPiece[isn].b = 255;

			if(isn>=16){
				chessPiece[isn].r = 0;
			    chessPiece[isn].g = 0;
			    chessPiece[isn].b = 255;

			}

			
						 strcpy(a[m].letter,"Queen");

	                        a[m].valid=true;
						    a[n].valid=false;
			 	            a[m].gcolour='B';
					        
						 
                      }      
                      }
	                }
	    	}

	    
       
		
	else if((!(strcmp(a[n].letter,a[60].letter))&&p[60].colour=='B')){

		if(a[m].valid==false||p[m].colour == 'w'){

			 if((strcmp(a[m].letter,a[5].letter))){

		
				if( ((a[m].mx==a[n].mx+80)&&(a[m].my==a[n].my)&&((a[n+1].valid==false)||a[n+1].gcolour=='w'))||
					((a[m].mx==a[n].mx+160)&&(a[m].my==a[n].my)&&((a[n+1].valid==false&&a[n+2].valid==false)||a[n+2].gcolour=='w'))||
					((a[m].mx==a[n].mx+240)&&(a[m].my==a[n].my)&&((a[n+1].valid==false&&a[n+2].valid==false&&a[n+3].valid==false)||a[n+3].gcolour=='w'))||
					((a[m].mx==a[n].mx+320)&&(a[m].my==a[n].my)&&((a[n+1].valid==false&&a[n+2].valid==false&&a[n+3].valid==false&&a[n+4].valid==false)||a[n+4].gcolour=='w'))||
					((a[m].mx==a[n].mx+400)&&(a[m].my==a[n].my)&&((a[n+1].valid==false&&a[n+2].valid==false&&a[n+3].valid==false&&a[n+4].valid==false&&a[n+5].valid==false)||a[n+5].gcolour=='w'))||
					((a[m].mx==a[n].mx+480)&&(a[m].my==a[n].my)&&((a[n+1].valid==false&&a[n+2].valid==false&&a[n+3].valid==false&&a[n+4].valid==false&&a[n+5].valid==false&&a[n+6].valid==false)||a[n+6].gcolour=='w'))||
					((a[m].mx==a[n].mx+560)&&(a[m].my==a[n].my)&&((a[n+1].valid==false&&a[n+2].valid==false&&a[n+3].valid==false&&a[n+4].valid==false&&a[n+5].valid==false&&a[n+6].valid==false&&a[n+7].valid==false)||a[n+7].gcolour=='w'))||


		            ((a[m].mx==a[n].mx-80)&&(a[m].my==a[n].my)&&((a[n-1].valid==false)||a[n-1].gcolour=='w'))||
					((a[m].mx==a[n].mx-160)&&(a[m].my==a[n].my)&&((a[n-1].valid==false&&a[n-2].valid==false)||a[n-2].gcolour=='w'))||
					((a[m].mx==a[n].mx-240)&&(a[m].my==a[n].my)&&((a[n-1].valid==false&&a[n-2].valid==false&&a[n-3].valid==false)||a[n-3].gcolour=='w'))||
					((a[m].mx==a[n].mx-320)&&(a[m].my==a[n].my)&&((a[n-1].valid==false&&a[n-2].valid==false&&a[n-3].valid==false&&a[n-4].valid==false)||a[n-4].gcolour=='w'))||
					((a[m].mx==a[n].mx-400)&&(a[m].my==a[n].my)&&((a[n-1].valid==false&&a[n-2].valid==false&&a[n-3].valid==false&&a[n-4].valid==false&&a[n-5].valid==false)||a[n-5].gcolour=='w'))||
					((a[m].mx==a[n].mx-480)&&(a[m].my==a[n].my)&&((a[n-1].valid==false&&a[n-2].valid==false&&a[n-3].valid==false&&a[n-4].valid==false&&a[n-5].valid==false&&a[n-6].valid==false)||a[n-6].gcolour=='w'))||
					((a[m].mx==a[n].mx-560)&&(a[m].my==a[n].my)&&((a[n-1].valid==false&&a[n-2].valid==false&&a[n-3].valid==false&&a[n-4].valid==false&&a[n-5].valid==false&&a[n-6].valid==false&&a[n-7].valid==false)||a[n-7].gcolour=='w'))||

					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my+80)&&((a[n+8].valid==false)||a[n+8].gcolour=='w'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my+160)&&((a[n+8].valid==false&&a[n+16].valid==false)||a[n+16].gcolour=='w'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my+240)&&((a[n+8].valid==false&&a[n+16].valid==false&&a[n+24].valid==false)||a[n+24].gcolour=='w'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my+320)&&((a[n+8].valid==false&&a[n+16].valid==false&&a[n+24].valid==false&&a[n+32].valid==false)||a[n+32].gcolour=='w'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my+400)&&((a[n+8].valid==false&&a[n+16].valid==false&&a[n+24].valid==false&&a[n+32].valid==false&&a[n+40].valid==false)||a[n+40].gcolour=='w'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my+480)&&((a[n+8].valid==false&&a[n+16].valid==false&&a[n+24].valid==false&&a[n+32].valid==false&&a[n+40].valid==false&&a[n+48].valid==false)||a[n+48].gcolour=='w'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my+560)&&((a[n+8].valid==false&&a[n+16].valid==false&&a[n+24].valid==false&&a[n+32].valid==false&&a[n+40].valid==false&&a[n+48].valid==false&&a[n+56].valid==false)||a[n+56].gcolour=='w'))||


					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my-80)&&((a[n-8].valid==false)||a[n-8].gcolour=='w'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my-160)&&((a[n-8].valid==false&&a[n-16].valid==false)||a[n-16].gcolour=='w'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my-240)&&((a[n-8].valid==false&&a[n-16].valid==false&&a[n-24].valid==false)||a[n-24].gcolour=='w'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my-320)&&((a[n-8].valid==false&&a[n-16].valid==false&&a[n-24].valid==false&&a[n-32].valid==false)||a[n-32].gcolour=='w'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my-400)&&((a[n-8].valid==false&&a[n-16].valid==false&&a[n-24].valid==false&&a[n-32].valid==false&&a[n-40].valid==false)||a[n-40].gcolour=='w'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my-480)&&((a[n-8].valid==false&&a[n-16].valid==false&&a[n-24].valid==false&&a[n-32].valid==false&&a[n-40].valid==false&&a[n-48].valid==false)||a[n-48].gcolour=='w'))||
					  ((a[m].mx==a[n].mx)&&(a[m].my==a[n].my-560)&&((a[n-8].valid==false&&a[n-16].valid==false&&a[n-24].valid==false&&a[n-32].valid==false&&a[n-40].valid==false&&a[n-48].valid==false&&a[n-56].valid==false)||a[n-56].gcolour=='w'))||
					  
					  
					   ((a[m].mx==a[n].mx+80)&&(a[m].my==a[n].my+80)&&(a[n+9].valid==false||a[n+9].gcolour=='w'))||
					 ((a[m].mx==a[n].mx+160)&&(a[m].my==a[n].my+160)&&((a[n+9].valid==false&&a[n+18].valid==false)||a[n+18].gcolour=='w'))||
					 ((a[m].mx==a[n].mx+240)&&(a[m].my==a[n].my+240)&&((a[n+9].valid==false&&a[n+18].valid==false&&a[n+27].valid==false)||a[n+27].gcolour=='w'))||
					 ((a[m].mx==a[n].mx+320)&&(a[m].my==a[n].my+320)&&((a[n+9].valid==false&&a[n+18].valid==false&&a[n+27].valid==false&&a[n+36].valid==false)||a[n+36].gcolour=='w'))||
					 ((a[m].mx==a[n].mx+400)&&(a[m].my==a[n].my+400)&&((a[n+9].valid==false&&a[n+18].valid==false&&a[n+27].valid==false&&a[n+36].valid==false&&a[n+45].valid==false)||a[n+45].gcolour=='w'))||
					 ((a[m].mx==a[n].mx+480)&&(a[m].my==a[n].my+480)&&((a[n+9].valid==false&&a[n+18].valid==false&&a[n+27].valid==false&&a[n+36].valid==false&&a[n+45].valid==false&&a[n+54].valid==false)||a[n+54].gcolour=='w'))||
					 ((a[m].mx==a[n].mx+560)&&(a[m].my==a[n].my+560)&&((a[n+9].valid==false&&a[n+18].valid==false&&a[n+27].valid==false&&a[n+36].valid==false&&a[n+45].valid==false&&a[n+54].valid==false&&a[n+63].valid==false)||a[n+63].gcolour=='w'))||

					 ((a[m].mx==a[n].mx-80)&&(a[m].my==a[n].my-80)&&(a[n-9].valid==false||a[n-9].gcolour=='w'))||
					 ((a[m].mx==a[n].mx-160)&&(a[m].my==a[n].my-160)&&((a[n-9].valid==false&&a[n-18].valid==false)||a[n-18].gcolour=='w'))||
					 ((a[m].mx==a[n].mx-240)&&(a[m].my==a[n].my-240)&&((a[n-9].valid==false&&a[n-18].valid==false&&a[n-27].valid==false)||a[n-27].gcolour=='w'))||
					 ((a[m].mx==a[n].mx-320)&&(a[m].my==a[n].my-320)&&((a[n-9].valid==false&&a[n-18].valid==false&&a[n-27].valid==false&&a[n-36].valid==false)||a[n-36].gcolour=='w'))||
					 ((a[m].mx==a[n].mx-400)&&(a[m].my==a[n].my-400)&&((a[n-9].valid==false&&a[n-18].valid==false&&a[n-27].valid==false&&a[n-36].valid==false&&a[n-45].valid==false)||a[n-45].gcolour=='w'))||
					 ((a[m].mx==a[n].mx-480)&&(a[m].my==a[n].my-480)&&((a[n-9].valid==false&&a[n-18].valid==false&&a[n-27].valid==false&&a[n-36].valid==false&&a[n-45].valid==false&&a[n-54].valid==false)||a[n-54].gcolour=='w'))||
					 ((a[m].mx==a[n].mx-560)&&(a[m].my==a[n].my-560)&&((a[n-9].valid==false&&a[n-18].valid==false&&a[n-27].valid==false&&a[n-36].valid==false&&a[n-45].valid==false&&a[n-54].valid==false&&a[n-63].valid==false)||a[n-63].gcolour=='w'))||


					((a[m].mx==a[n].mx-80)&&(a[m].my==a[n].my+80)&&(a[n+7].valid==false||a[n+7].gcolour=='w'))||
					((a[m].mx==a[n].mx-160)&&(a[m].my==a[n].my+160)&&((a[n+7].valid==false&&a[n+16].valid==false)||a[n+16].gcolour=='w'))||
					((a[m].mx==a[n].mx-240)&&(a[m].my==a[n].my+240)&&((a[n+7].valid==false&&a[n+16].valid==false&&a[n+25].valid==false)||a[n+25].gcolour=='w'))||
					((a[m].mx==a[n].mx-320)&&(a[m].my==a[n].my+320)&&((a[n+7].valid==false&&a[n+16].valid==false&&a[n+25].valid==false&&a[n+34].valid==false)||a[n+34].gcolour=='w'))||
					((a[m].mx==a[n].mx-400)&&(a[m].my==a[n].my+400)&&((a[n+7].valid==false&&a[n+16].valid==false&&a[n+25].valid==false&&a[n+34].valid==false&&a[n+43].valid==false)||a[n+43].gcolour=='w'))||
					((a[m].mx==a[n].mx-480)&&(a[m].my==a[n].my+480)&&((a[n+7].valid==false&&a[n+16].valid==false&&a[n+25].valid==false&&a[n+34].valid==false&&a[n+43].valid==false&&a[n+52].valid==false)||a[n+52].gcolour=='w'))||
					((a[m].mx==a[n].mx-560)&&(a[m].my==a[n].my+560)&&((a[n+9].valid==false&&a[n+16].valid==false&&a[n+25].valid==false&&a[n+34].valid==false&&a[n+43].valid==false&&a[n+52].valid==false&&a[n+61].valid==false)||a[n+61].gcolour=='w'))||


					((a[m].mx==a[n].mx+80)&&(a[m].my==a[n].my-80)&&(a[n-7].valid==false||a[n-7].gcolour=='w'))||
					((a[m].mx==a[n].mx+160)&&(a[m].my==a[n].my-160)&&((a[n-7].valid==false&&a[n-16].valid==false)||a[n-16].gcolour=='w'))||
					((a[m].mx==a[n].mx+240)&&(a[m].my==a[n].my-240)&&((a[n-7].valid==false&&a[n-16].valid==false&&a[n-25].valid==false)||a[n-25].gcolour=='w'))||
					((a[m].mx==a[n].mx+320)&&(a[m].my==a[n].my-320)&&((a[n-7].valid==false&&a[n-16].valid==false&&a[n-25].valid==false&&a[n-34].valid==false)||a[n-34].gcolour=='w'))||
					((a[m].mx==a[n].mx-400)&&(a[m].my==a[n].my-400)&&((a[n-7].valid==false&&a[n-16].valid==false&&a[n-25].valid==false&&a[n-34].valid==false&&a[n-43].valid==false)||a[n-43].gcolour=='w'))||
					((a[m].mx==a[n].mx+480)&&(a[m].my==a[n].my-480)&&((a[n-7].valid==false&&a[n-16].valid==false&&a[n-25].valid==false&&a[n-34].valid==false&&a[n-43].valid==false&&a[n-52].valid==false)||a[n-52].gcolour=='w'))||
					((a[m].mx==a[n].mx+560)&&(a[m].my==a[n].my-560)&&((a[n-7].valid==false&&a[n-16].valid==false&&a[n-25].valid==false&&a[n-34].valid==false&&a[n-43].valid==false&&a[n-52].valid==false&&a[n-61].valid==false)||a[n-61].gcolour=='w'))){

					      for (int i = 0; i <32; i++)
					  {
                if (mx >= chessPiece[i].xCordinate && mx <= chessPiece[i].xCordinate + 80 && my >= chessPiece[i].yCordinate && my <= chessPiece[i].yCordinate + 80)
                {
					chessPiece[i].xCordinate = -100;
					chessPiece[i].yCordinate = -100;
                    break;
                }
            }
			
            isSelected = false;
            //printf("%d %d", isSelectedX, isSelectedY);
			cout << mx << " " << my << endl;
            isSelectedX = mx - mx % 80;
            isSelectedY = my - my % 80;
            chessPiece[isn].xCordinate = isSelectedX;
            chessPiece[isn].yCordinate = isSelectedY;
			cout << isSelectedX << " " << isSelectedY << endl;

					
			chessPiece[isn].r = 255;
			chessPiece[isn].g = 255;
			chessPiece[isn].b = 255;

			if(isn>=16){
				chessPiece[isn].r = 0;
			    chessPiece[isn].g = 0;
			    chessPiece[isn].b = 255;

			}

			
						 strcpy(a[m].letter,"Queen");

	                        a[m].valid=true;
						    a[n].valid=false;
			 	            a[m].gcolour='w';
					        
						 
                      }
  
                      }
	                }
	    	}
         }




void guti()
{
	/*
	iSetColor(chessPiece[0].r , chessPiece[0].g , chessPiece[0].b);
    iText(chessPiece[0].xCordinate, chessPiece[0].yCordinate + 40, chessPiece[0].letter, GLUT_BITMAP_TIMES_ROMAN_24);
    */



	for(int i = 0 ; i < 32 ; i++)
	{
		iSetColor(chessPiece[i].r , chessPiece[i].g , chessPiece[i].b);
		iText(chessPiece[i].xCordinate, chessPiece[i].yCordinate + 20, chessPiece[i].letter, GLUT_BITMAP_TIMES_ROMAN_24);
	}


}



void iMouseMove(int mx, int my)
{

}


void iMouse(int button, int state, int mx, int my)
{  
	m_x=mx;
	m_y=my;

    if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {

		printf("%d  %d\n\n", m_x, m_y);

       if (!isSelected) // selects the piece
        {
			Menu1(m_x,m_y);

            Click11(mx , my);

			
			printf("\n\n1st Select Index :%d\n\n",n);
        }

	   else if (isSelected) // places the piece
        {  

			Menu2(m_x,m_y);

			Click22(mx , my);

			//Move(mx,my);

			

			printf("\n\n2nd select Index: %d\n\n",m);
			
        }

     

	}
    if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
    {
		iDraw();
    }
}


void iPassiveMouseMove(int mx,int my)
{
    //place your code here

    mposx = mx;
    mposy = my;
    if(mx== 2) {}       /*Something to do with mx*/
    else if(my== 2) {}  /*Something to do with my*/

}


void iKeyboard(unsigned char key)
{
     if(key == 'q')
    {
        
    }
     
}
   

void iSpecialKeyboard(unsigned char key)
{

    if(key == GLUT_KEY_END)
    {
        exit(0);
    }
    //place your codes for other keys here
}
  


int main()

{    Initialize();
    initilizeChessPiece();
    //place your own initialization codes here.
    iInitialize(650, 650, "demooo");
    return 0;
}
