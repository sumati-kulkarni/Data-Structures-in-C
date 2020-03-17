#include<stdio.h>
#include<conio.h>
#include<math.h>
#define F(x)cos(x)-3*(x)+1
void main()
  {
    int count,n;
    float a,b,root,x1,x2,x0,f0,f1,f2;
    clrscr();
    printf("enter the starting root values\n");
    scanf("%f%f",&a,&b);
    printf("enter the number of iterations\n");
    scanf("%d",&n);
    x0=a;
    x1=b;
    f0=F(x0);
    f1=F(x1);
    if((f0*f1)>2)
      {
	printf("there are no roots between %f & %f\n",a,b);
      }
    else
      {
	printf("******************************************************\n");
	printf("\nN\tx0\t\tx1\n");
	printf("******************************************************\n");
	count=1;
	while(count<=n)
	  {
	    x2=((x0*f1)-(x1*f0))/(f1-f0);
	    f2=F(x2);
	    if((f0*f2)<0)
	      {
		x1=x2;
		f1=f2;
	      }
	    else
	      {
		x0=x2;
		f0=f2;
	      }
	    printf("\n%d\t%f\t%f\n\n",count,x0,x1);
	    count=count+1;
	  }
	printf("*****************************************************\n");
	printf("\nroot lies between %f & %f\n\n",a,b);
	printf("\nroot = %f\n\n",x2);
      }
    getch();
  }
