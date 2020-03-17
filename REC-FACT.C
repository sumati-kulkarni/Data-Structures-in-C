#include<stdio.h>
#include<conio.h>
#include<math.h>
int facto(int);
void main()
  {
    int num,fact;
    clrscr();
    printf("enter the number to find its factorial\n");
    scanf("%d",&num);
    fact=facto(num);
    printf("factorial = %d\n",fact);
    getch();
  }
int facto(int n)
  {
    if(n==0)
      return 1;
    else
      return(n*facto(n-1));
  }