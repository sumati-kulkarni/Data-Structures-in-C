#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x)(x)*sin(x)-1
void main()
  {
    int i,n;
    float a,b,x[50];
    clrscr();
    printf("enter the size of interval or values of a & b\n");
    scanf("%f%f",&a,&b);
    printf("enter the number of iterations to be carried out\n");
    scanf("%d",&n);
    if((f(a)*f(b))<0)
      {
	for(i=1;i<=n;i++)
	  {
	    x[i]=(a+b)/2;
	    if(f(x[i])<0)
	      {
		a=x[i];
	      }
	    else if(f(x[i])>0)
	      {
		    b=x[i];
	      }
	   }
	printf("\niterations\troots/x\t\tf(root)/f(x)\n");
	for(i=1;i<=n;i++)
	  {
	    printf("%d\t\t%4.5f\t\t%4.5f\n",i,x[i],f(x[i]));
	  }
	printf("\nroot of an equation = %f\n",x[n]);
      }
    else
      {
	printf("roots does not exist\n");
      }
    getch();
  }