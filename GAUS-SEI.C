#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
  {
    int n,i,j,k,l,jj,ii,it,s=0;
    float a[10][10],b[10],x[10],oldx[10],sum,big,c,eps=0.000001;
    clrscr();
    printf("enter the unknown variables\n");
    scanf("%d",&n);
    printf("enter the number of iterations\n");
    scanf("%d",&it);
    printf("enter the co-efficients of unknown variables & constants\n");
    for(i=1;i<=n;i++)
      {
	for(j=1;j<=n;j++)
	  {
	    printf("x[%d]=\n",j);
	    scanf("%f",&a[i][j]);
	  }
	printf("\nb[%d]=",i);
	scanf("%f",&b[i]);
      }
    printf("elements of argumented matrix\n");
    for(i=1;i<=n;i++)
      {
	for(j=1;j<=n;j++)
	  {
	    printf("%0.2f\t",a[i][j]);
	  }
	printf("%0.2f\n",b[i]);
      }
    for(i=1;i<=n;i++)
      {
	 oldx[i]=0;
	 x[i]=oldx[i];
      }
    for(ii=1;ii<=it;ii++)
      {
	for(i=1;i<=n;i++)
	  {
	    sum=0.0;
	    for(j=1;j<=n;j++)
	      {
		if((ii-j)!=0)
		  {
		    sum+=a[i][j]*x[i];
		  }
		x[i]=(b[i]-sum)/a[i][i];
	      }
	    big=fabs(x[1]-oldx[1]);
	    for(k=2;k<=n;k++)
	      {
		c=fabs(x[k]-oldx[k]);
		if(c>big)
		  {
		    big=c;
		  }
	      }
	    if(big<=eps)
	      {
		s=1;
		goto l;
	      }
	    for(l=1;l<=n;l++)
	      {
		oldx[l]=x[l];
	      }
	  }
      }
    printf("iterations not sufficient\n");
    l : if(s==1)
	  {
	    printf("number of iterations:\t%d\n",ii-l);
	    printf("solution vector : \n");
	    for(i=1;i<=n;i++)
	      {
		printf("x[%d]=%f\t",i,x[i]);
	      }
	  }
    getch();
  }

