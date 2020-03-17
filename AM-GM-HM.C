#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
  {
    int a[10],n,i;
    float am,gm,hm;
    clrscr();
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(i=1;i<=n;i++)
      {
	scanf("%d",&a[i]);
      }
    am=(a[1]+a[n])/2.0;
    printf("am=%f\n",am);
    gm=sqrt(a[1]*a[n]);
    printf("gm=%f\n",gm);
    hm=(2*a[1]*a[n])/(a[1]+a[n]);
    printf("hm=%f\n",hm);
    getch();
  }