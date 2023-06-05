//5
//5 4
//5 4 3
//5 4 3 2
//5 4 3 2 1

#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j;
 clrscr();
 for(i=1;i<=5;i++)
 {
    for(j=i;j>=1;j--)
    {

     printf("%d ",j);

    }
     printf("\n");
 }

  getch();
}