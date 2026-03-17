#include<stdio.h>
#include<conio.h>
main()
{
        int x,y;
        clrscr();
        printf("Enter the value of x: ");
        scanf("%d", &x);
        printf("Enter the value of y: ");
        scanf("%d", &y);
        if(x>y)
        {
            printf("y is min");
        }
        else 
        {
            printf("x is min ");
        }
        getch();
        return 0;
}