//conditional operator 

#include<stdio.h>
#include<conio.h>
main()
{
   int x;
   printf("enter the value of x:");
   scanf("%d",&x);
   (x%2==0)?printf("even"):printf("odd");
   getch();
   return 0;
}
