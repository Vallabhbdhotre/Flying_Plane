#include<graphics.h>
#include<conio.h>
#include<time.h>
using namespace std;
int main()
{
	
		     setfillstyle(SOLID_FILL, BLACK);
             bar(0,0,800,600); // clear the screen with white color
initwindow(800,600,"Flying Plane!");
   settextstyle(0,0,1);
 outtextxy(340,200,"<---FLYING PLANE--->");
   outtextxy(250,230,"* KEEP PLANE FLYING BY PRESSING SPACEBAR!");
   outtextxy(250,260,"* DO NOT LET THE PLANE TOUCH THE SORROUNDINGS!!!");
   outtextxy(250,290,"* PRESS SHIFT TO START...!");
	
	while(1)
	{
		if(GetAsyncKeyState(VK_SHIFT))
		{
          //Airplane body co-ordinates
           int x1 =225,y1=225,x2=65,y2=225;
           int x3 =225,y3=225,x4=270,y4=255;
           int x5 =270,y5=255,x6=45,y6=255;
           int x7 =45,y7=255,x8=10,y8=200;
           int x9 =10,y9=200,x10=45,y10=200;
           int x11 =45,y11=200,x12=65,y12=225;
           //Airplane wings co-ordinates
            int x13 =110,y13=240,x14=20,y14=265;
            int x15 =20,y15=265,x16=165,y16=240;
            int x17 =170,y17=225,x18=55,y18=195;
            int x19 =55,y19=195,x20=110,y20=225;
           //cloud
	       int x21=600,y21=200,x22=800,y22=200;//line
	       int x23=750,y23=200;//arc1    
           int x24=705,y24=150;//arc2
           int x25=655,y25=200;//arc3 
           //buildings
           int x26=820,y26=330,x27=890,y27=580;
           int x28=890,y28=360,x29=960,y29=580;
           int x30=750,y30=365,x31=820,y31=580;
           int x32=390,y32=340,x33=460,y33=580;
           int x34=0,y34=580,x35=1200,y35=580;
    
        	while(1)
           {

    	     setcolor(7);
    	     line(x21,y21,x22,y22);
             arc(x23,y23,0,90,50);
             arc(x24,y24,0,180,50);
             arc(x25,y25,90,180,54);
		     //moving cloud to the left side
		     x21-=10,x22-=10,x23-=10,x24-=10,x25-=10;
		     //pane body
		     setcolor(WHITE);
		     line(x1,y1,x2,y2);   line(x3,y3,x4,y4);
		     line(x5,y5,x6,y6);   line(x7,y7,x8,y8);
		     line(x9,y9,x10,y10); line(x11,y11,x12,y12);
		     line(x13,y13,x14,y14);   line(x15,y15,x16,y16);
		     line(x17,y17,x18,y18);   line(x19,y19,x20,y20);
		     //buildings 
    	     
    	     setcolor(RED);
		     rectangle(x26,y26,x27,y27);    	     
		     rectangle(x28,y28,x29,y29);
		     rectangle(x30,y30,x31,y31);
		     rectangle(x32,y32,x33,y33);
		     
		     
    	     setcolor(GREEN);
		     line(x34,y34,x35,y35);
    	     
		     //moving buildings to th left side
		     x26-=5,x27-=5,x28-=5,x29-=5,x30-=5,x31-=5,x32-=5,x33-=5,x34-=5,x35-=5;
	  	    //flying plane by pressing cursor control key(upward arrow)
		     if(GetAsyncKeyState(VK_SPACE))
	           {
                 y1-=10,y2-=10,y3-=10,y4-=10,y5-=10,y6-=10;
		         y7-=10,y8-=10,y9-=10,y10-=10,y11-=10,y12-=10;//decrementing y co-ordinates if key is pressed
	             y13-=10,y14-=10,y15-=10,y16-=10,y17-=10,y18-=10;
	 	        y19-=10,y20-=10;
	           }
		      else
	           {
		         y1+=10,y2+=10,y3+=10,y4+=10,y5+=10,y6+=10,y7+=10,y8+=10;//incrementing y co-ordinates if key is not pressed
		         y9+=10,y10+=10,y11+=10,y12+=10,y13+=10,y14+=10,y15+=10;
		         y16+=10;y17+=10,y18+=10,y19+=10,y20+=10;
	           }
	          if(x22<=0)
	           {
	   	         x21=600,y21=200,x22=800,y22=200;//line
	             x23=750,y23=200;//arc1    
                 x24=705,y24=150;//arc2
                 x25=655,y25=200;//arc3 
               }
	           if(x35<=0)
	           {
	    	     x26=820,y26=280,x27=890,y27=580;
                 x28=890,y28=325,x29=960,y29=580;
                 x30=750,y30=365,x31=820,y31=580;
                 //x32=390,y32=340,x33=460,y33=580;
                 x34=0,y34=580,x35=1000,y35=580;
	           }
	           if(y19<0||y15>=580)
	           {
	           	outtextxy(250,230,"OOPS PLANE CRASHED!");
	           	break;
			   }
			   if ((x26 <= x2 && y26<=y2)|| (x28 <= x2&& y28<=y2) || (x30 <= x2&& y30<=y2) || (x32 <= x5&& y32<=y5)) {
			        outtextxy(340, 350, "CRASHED!!");
			        getch();
			        break;  // End the game
			    }
					  // x5==|| x17==||x19==|| x1==||x15==||
		       delay(70);
		     cleardevice();
			}	
		}
	}
  
}
