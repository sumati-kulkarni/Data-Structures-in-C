#include<stdio.h>
#include<conio.h>
#include<math.h>
int mul(int,int);
void main()
  {
    int m,n,ans;
    clrscr();
    printf("enter the values of m & n\n");
    scanf("%d%d",&m,&n);
    ans=mul(m,n);
    printf("product(%d,%d) = %d\n",m,n,ans);
    getch();
  }
int mul(int m,int n)
  {
    if(n==1)
      return m;
    else if((n==0)||(m==0))
      return 0;
    else
      return(m+mul(m,n-1));
  }