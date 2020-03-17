#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
  {
    int n,facto;
    clrscr();
    printf("enter the number to find the factorial\n");
    scanf("%d",&n);
    facto=fact(n);
    printf("factorial of a number %d = %d\n",n,facto);
    getch();
  }
   int fact(int);
int fact(int n)
  {
    int i,temp=1;
    for(i=1;i<=n;i++)
      {
	temp=temp*i;
      }
    return(temp);
  }
