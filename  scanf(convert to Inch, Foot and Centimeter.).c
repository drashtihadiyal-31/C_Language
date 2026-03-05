#include<stdio.h>
#include<conio.h>
 main()
{
     float meter,inch,foot,centimetre;
     clrscr();
     printf("enter length in meter:");
     scanf("%f",& meter);
     printf("\nmeter=%f", meter);
     centimetre=meter*100;
     printf("\ncentimetre:%f", centimetre);
     inch=meter*39.3701;
     printf("\ninch:%f",inch);
     foot=meter*3.28084;
     printf("\nfoot:%f", foot);
     getch();
     return 0;
}