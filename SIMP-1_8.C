#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float);
void main()
{
  int i=0;
  float sum1=0,sum2=0,a,b,n,h=0,area=0,x,y,y0,yn;
  clrscr();
  printf("enter the lower limit\n");
  scanf("%f",&a);
  printf("enter the upper limit\n");
  scanf("%f",&b);
  printf("enter the number of iterations to be carried out\n");
  scanf("%f",&n);
  h=(b-a)/n;
  printf("\nh=%f\n",h);
  y0=f(a);
  yn=f(b);
  area=y0+yn;
  printf("\ny0+yn=%.3f+%.3f=%.3f\n",y0,yn,area);
  printf("\n\nx0=%.3f\ty0=%.3f\n",a,y0);
  for(i=1;i<n;i++)
    {
      x=i*h;
      printf("\nx%d=%.3f\t",i,x);
      if((i%3)==0)
	{
	  y=f(x);
	  printf("y%d=%.3f\n",i,y);
	  sum1=sum1+y;
	}
      else
	{
	  y=f(x);
	  printf("y%d=%.3f\n",i,y);
	  sum2=sum2+y;
	}
    }
  printf("\nxn=%.3f\tyn=%.3f\n",b,yn);
  area=((3*h)/8)*((area)+(2*sum1)+(3*sum2));
  printf("\narea under the curve is %.3f\n",area);
  getch();
}
float f(float x)
  {
    float f;
    f=x/(1+x*x);
    return(f);
  }
