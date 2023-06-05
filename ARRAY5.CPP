#include<stdio.h>
#include<conio.h>
void main()
{
  int a[20],n,i;
  clrscr();
  printf("enter size of array");
  scanf("%d",&n);
  printf("enter your %d data",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);

  }
   for(i=0;i<n;i++)
  {
       if(a[i]%2==1)
       {
	  printf(" this value is even%d",a[i]);
       }


  }


  getch();
}

