#include<stdio.h>
#include<conio.h>
#include<math.h>
int min(int [],int);
void main()
  {
    int a[30],n,i,small;
    clrscr();
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(i=1;i<=n;i++)
      scanf("%d",&a[i]);
    small=min(a,n);
    printf("smallest number = %d\n",small);
    getch();
  }

int min(int a[],int n)
  {
    int small;
    if(n==1)
      return a[n];
    small=min(a,n-1);
    if(a[n]<small)
      return a[n];
    return small;
  }