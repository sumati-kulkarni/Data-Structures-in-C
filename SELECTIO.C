#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
  {
    int i,j,n,p,temp,a[60];
    clrscr();
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("enter %d elements to sort\n",n);
    for(i=0;i<n;i++)
      {
	scanf("%d",&a[i]);
      }
    for(i=0;i<n-1;i++)
      {
	p=i;
	for(j=i+1;j<n;j++)
	  {
	     if(a[p]>a[j])
	       {
		 p=j;
	       }
	  }
	if(p!=i)
	  {
	    temp=a[p];
	    a[p]=a[i];
	    a[i]=temp;
	  }
      }
    printf("sorted array is\n");
    for(i=0;i<n;i++)
      {
	printf("%d\n",a[i]);
      }
    getch();
  }