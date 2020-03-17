#include<stdio.h>
#include<conio.h>
#include<math.h>
int fib(int);
void main()
  {
    int ans,n,i;
    clrscr();
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("%d fibonacci series are\n",n);
    for(i=0;i<n;i++)
      {
	ans=fib(i);
	printf("%d\n",ans);
      }
    getch();
  }
int fib(int n)
  {
    if(n==0)
      return 0;
    else if(n==1)
      return 1;
    else
      return (fib(n-1)+fib(n-2));
  }