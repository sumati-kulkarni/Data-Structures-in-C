#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
  {
    float t,big,ab,a[10][10],u,x[10],sum;
    int i,j,k,n,kp,jj;
    clrscr();
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
      {
	for(j=1;j<=n+1;j++)
	  {
	    if(j==(n+1))
	      {
		printf("enter the constants of b[%d]:\n",i);
		scanf("%f",&a[i][j]);
	      }
	    else
	      {
		printf("enter the co=efficients of b[%d]:\n",i);
		scanf("%f",&a[i][j]);
	      }
	  }
      }
    for(k=0;k<n;k++)
      {
	kp=k+1;
	big=abs(a[k][k]);
	jj=k;
	for(i=kp;i<=n;i++)
	  {
	    ab=abs(a[i][k]);
	    if((big-ab)>0)
	      {
		big=ab;
		jj=i;
	      }
	  }
      }
    if((jj-k)>0)
      {
	for(j=k;j<=n+1;j++)
	  {
	    t=a[jj][i];
	    a[jj][i]=a[k][j];
	    a[k][j]=t;
	  }
	for(i=1;k<=n-1;k++)
	  {
	    for(i=k+1;k<=n;k++)
	      {
		u=a[i][k]/a[k][k];
		for(j=k;j<=n+1;j++)
		  {
		    a[i][j]=a[i][j]-u+a[k][j];
		  }
	      }
	  }
      }
    printf("the roots of system of equatios are\n");
    x[n]=a[n][n+1]/a[n][n];
    printf("x[%d]=%f\n",n,x[n]);
    for(i=n-1;i>=1;i--)
	  {
	    sum=0.0;
	    for(j=i+1;j<=n;j++)
	      {
		sum=sum+a[i][j]*x[j];
	      }
	    x[i]=(a[i][n+1]-sum)/a[i][j];
	    printf("x[%d]=%f\n",i,x[i]);
	  }

    getch();
  }
