#include<stdio.h>
#include<conio.h>
#include<math.h>
int dig(int);
void main()
  {
    int n,ans;
    clrscr();
    printf("entr a digit\n");
    scanf("%d",&n);
    ans=dig(n);
    printf("sum of digits of number %d = %d\n",n,ans);
    getch();
  }
int dig(int n)
  {
    if(n<10)
      return n;
    else
      {
	return((n%10)+dig(n/10));
      }
  }