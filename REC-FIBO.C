#include<stdio.h>
#include<conio.h>
#include<math.h>
int fib(int);
void main()
  {
    int n,ans;
    clrscr();
    printf("enter the value of n\n");
    scanf("%d",&n);
    ans=fib(n);
    printf("last fibonacci number at position %d = %d\n",n,ans);
    getch();
  }
int fib(int n)
  {
    if(n==0)
      return 0;
    else if(n==1)
      return 1;
    else
      return(fib(n-1)+fib(n-2));
  }