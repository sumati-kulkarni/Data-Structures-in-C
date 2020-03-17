#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
  {
    int n,i;
    double sx,sy,sx2,sxy,a0,a1,y[10],x[10];
    sx=sy=sx2=sxy=a0=a1=0.0;
    clrscr();
    printf("enter the array size\n");
    scanf("%d",&n);
    printf("enter %d value of x\n",n);
    for(i=0;i<n;i++)
      {
	scanf("%lf",&x[i]);
      }
    printf("enter %d values of y\n",n);
    for(i=0;i<n;i++)
      {
	scanf("%lf",&y[i]);
      }
    for(i=0;i<n;i++)
      {
	sx=sx+x[i];
	sy=sy+y[i];
	sx2=sx2+(x[i]*x[i]);
	sxy=sxy+(x[i]*y[i]);
      }
    a0=(sy*sx2-sx*sxy)/(n*sx2-sx*sx);
    a1=(n*sxy-sx*sy)/(n*sx2-sx*sx);
    printf("\ntrend values are\n");
    for(i=0;i<n;i++)
      {
	y[i]=a0+a1*x[i];
	printf("%d - %0.2lf\n",x[i],y[i]);
      }
    getch();
  }

