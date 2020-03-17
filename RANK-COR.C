#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
  {
    int n,i;
    float R1[10],R2[10],R,s,d;
    clrscr();
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("enter %d ranks of first array\n",n);
    for(i=0;i<n;i++)
      {
	scanf("%f",&R1[i]);
      }
    printf("enter %d ranks of second array\n",n);
    for(i=0;i<n;i++)
      {
	scanf("%f",&R2[i]);
      }
    for(i=0;i<n;i++)
      {
	d=R1[i]-R2[i];
	s=s+(d*d);
      }
    R=(1.0)-((6*s)/((n*n*n)-n));
    printf("co-efficient of rank correletion = %0.3f\n",R);
    getch();
  }
