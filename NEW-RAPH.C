#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x)(x)*sin(x)+cos(x)
#define fdash(x)(x)*cos(x)
void main()
  {
    int n,i;
    float x0,x1,fx0,fx1,dfx[20],x[20],fx[20];
    clrscr();
    printf("enter the initial & final roots\n");
    scanf("%f%f",&x0,&x1);
    printf("enter the number of iterations to be carried out\n");
    scanf("%d",&n);
    fx0=f(x0);
    fx1=f(x1);
    if((fx0*fx1)<0)
      {
	if((abs(fx0))>(abs(fx1)))
	  {
	    x[0]=x0;
	  }
	else
	  {
	    x[0]=x1;
	  }
      }
    for(i=0;i<=n;i++)
      {
	fx[i]=f(x[i]);
	dfx[i]=fdash(x[i]);
	x[i+1]=x[i]-(fx[i]/dfx[i]);
	printf("x[%d] = %f\n",i,x[i]);
      }
    printf("root of an equation is %f\n",x[n]);
    getch();
  }
