#include<stdio.h>
#include<conio.h>
#include<math.h>
int bi_coff(int,int);
void main()
  {
    int n,r,ans;
    clrscr();
    printf("enter the value of n & r\n");
    scanf("%d%d",&n,&r);
    ans=bi_coff(n,r);
    printf("binomial coefficient = %d\n",ans);
    getch();
  }
int bi_coff(int n,int r)
  {
    if(n==r)
      return 1;
    if(r==0)
      return 1;
    else
      return(bi_coff((n-1),(r-1))+bi_coff((n-1),r));
  }
