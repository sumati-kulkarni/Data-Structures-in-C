#include<stdio.h>
#include<conio.h>
#include<math.h>
int large(int [],int);
void main()
  {
    int a[30],n,i,big;
    clrscr();
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(i=1;i<=n;i++)
      scanf("%d",&a[i]);
    big=large(a,n);
    printf("largest number = %d\n",big);
    getch();
  }

int large(int a[],int n)
  {
    int big;
    if(n==1)
      return a[n];
    big=large(a,n-1);
    if(a[n]>big)
      return a[n];
    return big;
  }