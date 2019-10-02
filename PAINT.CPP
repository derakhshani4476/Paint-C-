
#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>

int f=0,x=12,y=40,p=125*256;
char c;
char S[2000];
int color=125;
int far *SCR=(int far*)0XB8000000;

void init ()
{
	int i,j;
	for(i=0;i<=19;i++)
	for (j=0;j<=79;j++)
	SCR [i*80+j] = 125 * 256;
	SCR [x*80+y] = 125 * 256 + '*' ;
	if(f==0){
	p=125*256;
	}
}

void TOOLBAR()
{
	int i,j,o=20;
	for (i=21;i<=25;i++)
	for (j=0;j<=79;j++)
	SCR [i*80+j] = 48 * 256;
	for (j=0;j<=79;j++)
	SCR [o*80+j] = 113 * 256 + '.';

		SCR [21*80+0] = 49 * 256 + 'c';
		SCR [21*80+1] = 49 * 256 + 'o';
		SCR [21*80+2] = 49 * 256 + 'l';
		SCR [21*80+3] = 49 * 256 + 'o';
		SCR [21*80+4] = 49 * 256 + 'r';
		SCR [21*80+5] = 49 * 256 + 's';

		    SCR [22*80+7] = 49 * 256 + '1';  SCR [22*80+9] = 0 * 256 ;
		    SCR [23*80+7] = 49 * 256 + '2';  SCR [23*80+9] = 16 * 256 ;

		    SCR [22*80+14] = 49 * 256 + '3';  SCR [22*80+16] = 32 * 256 ;
		    SCR [23*80+14] = 49 * 256 + '4';  SCR [23*80+16] = 102 * 256 ;

		    SCR [22*80+21] = 49 * 256 + '5';  SCR [22*80+23] = 80 * 256 ;
		    SCR [23*80+21] = 49 * 256 + '6';  SCR [23*80+23] = 64 * 256 ;


		SCR [21*80+29] = 49 * 256 + 'c';
		SCR [21*80+30] = 49 * 256 + 'o';
		SCR [21*80+31] = 49 * 256 + 'm';
		SCR [21*80+32] = 49 * 256 + 'm';
		SCR [21*80+33] = 49 * 256 + 'a';
		SCR [21*80+34] = 49 * 256 + 'n';
		SCR [21*80+35] = 49 * 256 + 'd';

		      SCR [22*80+38] = 49 * 256 + 'e';
		      SCR [22*80+39] = 49 * 256 + 'r';
		      SCR [22*80+40] = 49 * 256 + 'a';
		      SCR [22*80+41] = 49 * 256 + 's';
		      SCR [22*80+42] = 49 * 256 + 'e';
		      SCR [22*80+43] = 49 * 256 + 'r';
		      SCR [22*80+45] = 49 * 256 + '=';
		      SCR [22*80+47] = 49 * 256 + 'e';

		      SCR [23*80+38] = 49 * 256 + 'r';
		      SCR [23*80+39] = 49 * 256 + 'e';
		      SCR [23*80+40] = 49 * 256 + 's';
		      SCR [23*80+41] = 49 * 256 + 'e';
		      SCR [23*80+42] = 49 * 256 + 't';
		      SCR [23*80+45] = 49 * 256 + '=';
		      SCR [23*80+47] = 49 * 256 + 'r';

		      SCR [22*80+52] = 49 * 256 + 'p';
		      SCR [22*80+53] = 49 * 256 + 'a';
		      SCR [22*80+54] = 49 * 256 + 'i';
		      SCR [22*80+55] = 49 * 256 + 'n';
		      SCR [22*80+56] = 49 * 256 + 't';
		      SCR [22*80+58] = 49 * 256 + '=';
		      SCR [22*80+60] = 49 * 256 + 's';
		      SCR [22*80+61] = 49 * 256 + 'p';
		      SCR [22*80+62] = 49 * 256 + 'a';
		      SCR [22*80+63] = 49 * 256 + 'c';
		      SCR [22*80+64] = 49 * 256 + 'e';

		      SCR [23*80+52] = 49 * 256 + 'f';
		      SCR [23*80+53] = 49 * 256 + 'i';
		      SCR [23*80+54] = 49 * 256 + 'l';
		      SCR [23*80+55] = 49 * 256 + 'l';
		      SCR [23*80+58] = 49 * 256 + '=';
		      SCR [23*80+60] = 49 * 256 + 't';
		      SCR [23*80+61] = 49 * 256 + 'a';
		      SCR [23*80+62] = 49 * 256 + 'b';

		      SCR [22*80+69] = 49 * 256 + 's';
		      SCR [22*80+70] = 49 * 256 + 'a';
		      SCR [22*80+71] = 49 * 256 + 'v';
		      SCR [22*80+72] = 49 * 256 + 'e';
		      SCR [22*80+75] = 49 * 256 + '=';
		      SCR [22*80+78] = 49 * 256 + 's';

		      SCR [23*80+69] = 49 * 256 + 'l';
		      SCR [23*80+70] = 49 * 256 + 'o';
		      SCR [23*80+71] = 49 * 256 + 'a';
		      SCR [23*80+72] = 49 * 256 + 'd';
		      SCR [23*80+75] = 49 * 256 + '=';
		      SCR [23*80+78] = 49 * 256 + 'l';


}
int FUNCKEY (char &c)
{

	c = getch();
	if (c==0) {c=getch();return 0; }
	else return 1 ;

}



void load ()
{
 FILE *MY;
 MY =fopen("C:\\u.txt","r");
 if(!MY) cout<<"file not found";
 else {
	int z;
	for(int i=0;i<=19;i++)
	 for (int j=0;j<=79;j++){
		fscanf(MY,"%d",&z);
		SCR[i*80+j]=z;
	 }
  }
  fclose(MY);
}

void save ()
{
	FILE*MY;
	MY=fopen("C:\\u.txt","w");
	if(!MY) cout<<"file not created";
	else {
		for(int i=0;i<=19;i++)
			for (int j=0;j<=79;j++)

			fprintf( MY,"%d ",SCR[i*80+j]);
	}
	fclose(MY);
}


void FILL(int x,int y,int color ,int p)
{

	 if((SCR [x*80+y]) == color *256 );
	 else
	 {
	   SCR[x*80+y] = color *256 ;

	 if(x>0   && (SCR [(x-1)*80+y])== p ) FILL(x-1,y,color,p);
	 if(x<24  && (SCR [(x+1)*80+y])== p ) FILL(x+1,y,color,p);
	 if(y>0   && (SCR [x*80+(y+1)])== p ) FILL(x,y+1,color,p);
	 if(y<79  && (SCR [x*80+(y-1)])== p ) FILL(x,y-1,color,p);

	 }

}
void DOCOMMAND (int t,char c){

	       if(f==0)

			SCR[x*80+y]=p;


	       else
			 SCR[x*80+y]=color*256;


	       if(t == 0){
		switch (c){

			case 'H': if (x>0)
				x=x-1 ;
				break;
			case 'P': if (x<19)
				 x=x+1;
				 break;
			case 'M': if (y<79)
				y=y+1 ;
				break;

			case 'K': if (y>0)
				y=y-1 ;
				break;


			   }

			   p=SCR[x*80+y];
			   SCR[x*80+y]=color*256+'*';
		    }


	else {

		switch (c){
			case '1' : color = 13	; break;
			case '2' : color = 29 	; break;
			case '3' : color = 45	; break;
			case '4' : color = 109	; break;
			case '5' : color = 93	; break;
			case '6' : color = 77	; break;
			case 'e' : color = 125	; break;
			case 'r' : init()	; break;  //reset
			case 32  : f=!f         ; break;  //PAINT
			case 9   : FILL (x,y,color,p); p=SCR[x*80+y];SCR[80*x+y]=p;  break;
			case 's' : save()       ; break;
			case 'l' : load() ; p=SCR[x*80+y]	; break;
			   }

			 SCR[x*80+y]= color*256+'*';

	      }


}

void main (void){
	clrscr();
	init();
	TOOLBAR ();
	gotoxy(80,25);
	char t=FUNCKEY (c);
		while ( c!=27 || t!=1)
		{
		DOCOMMAND (t,c);
		t=FUNCKEY(c);
		}
	}