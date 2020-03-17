#include<stdio.h>
#include<conio.h>
#include<math.h>
void reverse(int [],int);
void main()
  {
    int i,n,a[20];
    clrscr();
    printf("enter the number\n");
    scanf("%d",&n);
    printf("enter %d elements of an array\n",n);
    for(i=1;i<=n;i++)
      scanf("%d",&a[i]);
    printf("reversed array is\n");
    reverse(a,n);
    getch();
  }

void reverse(int a[],int n)
  {
    if(n==0)
      return;
    printf("%d\n",a[n]);
    reverse(a,n-1);
  }