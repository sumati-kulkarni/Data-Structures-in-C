#include<conio.h>
#include<stdio.h>
#include<math.h>

void main()
  {
    float x[50],mean=0,sd=0,var=0,sum=0,vsum=0;
    int n,i;
    clrscr();
    printf("\nEnter the value of n\n");
    scanf("%d",&n);
    printf("\nEnter %d values of n\n",n);
    for(i=0;i<n;i++)
      {
	scanf("%f",&x[i]);
      }
    for(i=0;i<n;i++)
      {
	sum=sum+x[i];
      }
    mean=sum/n;
    for(i=0;i<n;i++)
      {
	vsum=vsum+((x[i]-mean)*(x[i]-mean));
      }
    var=vsum/n;
    sd=sqrt(var);
    printf("Average of %d values = %5.3f\n",n,mean);
    printf("\nVariance of %d values = %5.3f\n",n,var);
    printf("\nsd = %5.3f\n",sd);
    getch();
  }