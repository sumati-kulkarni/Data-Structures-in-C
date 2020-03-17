#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
  {
    int i,n,a[20],temp,j;
    clrscr();
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("enter %d elements which you wanna sort\n",n);
    for(i=0;i<n;i++)
      {
	scanf("%d",&a[i]);
      }
    for(i=0;i<n-1;i++)
      {
	for(j=i+1;j<n;j++)
	  {
	    if(a[i]>a[j])
	      {
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	      }
	  }
      }
    printf("sorted list of elements are\n");
    for(i=0;i<n;i++)
      {
	printf("%d\n",a[i]);
      }
    getch();
  }
