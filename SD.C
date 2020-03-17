#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
  {
     int n,i,N,sumf=0;
     int x[10],f[10],x2[10],fx[10],fx2[10];
     float mean,sd,sumfx2,sumfx,a,b;
     clrscr();
     printf("enter the values of n\n");
     scanf("%d",&n);
     printf("enter %d x values\n",n);
     for(i=0;i<n;i++)
       {
	 scanf("%d",&x[i]);
       }
     printf("enter %d frequencies\n",n);
     for(i=0;i<n;i++)
       {
	 scanf("%d",&f[i]);
       }
     for(i=0;i<n;i++)
       {
	 sumf=sumf+f[i];
       }
     N=sumf;
     for(i=0;i<n;i++)
       {
	 fx[i]=f[i]*x[i];
	 sumfx=sumfx+fx[i];
       }
     mean=sumfx/N;
     b=mean*mean;
     for(i=0;i<n;i++)
       {
	 x2[i]=x[i]*x[i];
	 fx2[i]=f[i]*x2[i];
	 sumfx2=sumfx2+fx2[i];
       }
     a=sumfx2/N;
     sd=sqrt(a-b);
     printf("***********************************************************\n");
     printf("x\tf\tfx\tf(x^2)\n");
     printf("***********************************************************\n");
     for(i=0;i<n;i++)
       {
	 printf("%d\t%d\t%d\t%d\n",x[i],f[i],fx[i],fx2[i]);
       }
     printf("***********************************************************\n");
     printf("\t%d\t%.2f\t%.2f\n",N,sumfx,sumfx2);
     printf("***********************************************************\n");
     printf("aritmetic mean= %0.2f\n",mean);
     printf("standard deviation= %.2f\n",sd);
     getch();
  }

