#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
  {
    int i,j,a[20],d,n;
    clrscr();
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("enter %d elements to sort\n",n);
    for(i=0;i<n;i++)
      {
	scanf("%d",&d);
	j=i-1;
	while((j>=0)&&(d<a[j]))
	  {
	    a[j+1]=a[j];
	    j--;
	  }
	a[j+1]=d;
      }
    printf("sorted array is\n");
    for(i=0;i<n;i++)
      {
	printf("%d\n",a[i]);
      }
    getch();
  }
