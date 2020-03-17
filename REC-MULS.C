#include<stdio.h>
#include<conio.h>
#include<math.h>
int mul(int [],int);
void main()
  {
    int a[20],n,i,res;
    clrscr();
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("enter %d values of an array\n",n);
    for(i=1;i<=n;i++)
      {
	scanf("%d",&a[i]);
      }
    res=mul(a,n);
    printf("sum = %d\n",res);
    getch();
  }
int mul(int a[],int n)
  {
    if(n==1)
      return a[n];
    else
      return (a[n]*mul(a,n-1));
  }
