#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
  {
    int n,i;
    float l[30],u[30],f[30],fx[30],fx2[30],x[30],x2[30];
    float N,sumf=0,sumfx=0,sumfx2=0,a,b,mean,sd;
    clrscr();
    printf("enter the number of observations\n");
    scanf("%d",&n);
    printf("enter the lower limits of %d observations\n",n);
    for(i=0;i<n;i++)
      {
	scanf("%f",&l[i]);
      }
    printf("enter the upper limits of %d observations\n",n);
    for(i=0;i<n;i++)
      {
	scanf("%f",&u[i]);
      }
    printf("enter %d frequencies\n",n);
    for(i=0;i<n;i++)
      {
	scanf("%f",&f[i]);
      }
    for(i=0;i<n;i++)
      {
	sumf+=f[i];
      }
    N=sumf;
    for(i=0;i<n;i++)
      {
	x[i]=(l[i]+u[i])/2.0;
	fx[i]=f[i]*x[i];
	sumfx+=fx[i];
      }
    mean=sumfx/N;
    b=mean*mean;
    for(i=0;i<n;i++)
      {
	x2[i]=x[i]*x[i];
	fx2[i]=f[i]*x2[i];
	sumfx2+=fx2[i];
      }
    a=sumfx2/N;
    sd=sqrt(a-b);
    printf("*********************************************************\n");
    printf("CI\t\tx\tf\tfx\tfx2\n");
    printf("*********************************************************\n");
    for(i=0;i<n;i++)
      {
	printf("%.2f-%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",l[i],u[i],x[i],f[i],fx[i],fx2[i]);
      }
    printf("*********************************************************\n");
    printf("\t\t\t%.2f\t%.2f\t%.2f\n",sumf,sumfx,sumfx2);
    printf("*********************************************************\n");
    printf("mean=%.4f\nsd=%0.4f\n",mean,sd);
    getch();
  }