#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
  {
    int n,i;
    float x[10],y[10],rxy;
    float sumx,sumy,sumxy,sumx2,sumy2;
    sumx=sumy=sumxy=sumx2=sumy2=0;
    clrscr();
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter %d x values\n",n);
    for(i=0;i<n;i++)
      {
	scanf("%f",&x[i]);
      }
    printf("enter %d y values\n",n);
    for(i=0;i<n;i++)
      {
	scanf("%f",&y[i]);
      }
    for(i=0;i<n;i++)
      {
	sumx=sumx+x[i];
	sumy=sumy+y[i];
	sumxy=sumxy+(x[i]*y[i]);
	sumx2=sumx2+(x[i]*x[i]);
	sumy2=sumy2+(y[i]*y[i]);
      }
    printf("\nsumx=%f\n\nsumy=%f\n\nsumxy=%f\n\nsumx2=%f\n\nsumy2=%f\n\n",sumx,sumy,sumxy,sumx2,sumy2);
    rxy=((n*sumxy)-(sumx*sumy))/(sqrt((n*sumx2)-(sumx*sumx))*sqrt((n*sumy2)-(sumy*sumy)));
    printf("\nkarl pearson's correletion co-efficient = %f\n",rxy);
    getch();
  }

