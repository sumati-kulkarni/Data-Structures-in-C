#include<stdio.h>
#include<conio.h>
#include<math.h>
int gcd(int,int);
void main()
  {
    int ans,a,b;
    clrscr();
    printf("entr the values of a & b\n");
    scanf("%d%d",&a,&b);
    ans=gcd(a,b);
    printf("GCD = %d\n",ans);
    getch();
  }
int gcd(int a,int b)
  {
    if(b==0)
      return a;
    else
      return gcd(b,(a%b));
  }