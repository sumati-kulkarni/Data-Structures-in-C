#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
  {
    int m,n,i,j,temp=0,a[10][10];
    clrscr();
    printf("enter the row size\n");
    scanf("%d",&m);
    printf("enter the column size\n");
    scanf("%d",&n);
    if(m==n)
      {
	printf("enter the elements of matrix\n");
	for(i=0;i<m;i++)
	  {
	    for(j=0;j<n;j++)
	      {
		scanf("%d",&a[i][j]);
	      }
	  }
	j=n-1;
	for(i=0;i<m;i++)
	  {
	    temp=a[i][i];
	    a[i][i]=a[i][j];
	    a[i][j]=temp;
	    j=j-1;
	  }
	printf("the interchanged matrix is:\n");
	for(i=0;i<m;i++)
	  {
	    for(j=0;j<n;j++)
	      {
		printf("%d\t",a[i][j]);
	      }
	    printf("\n");
	  }
      }
    else
      {
	printf("diagonal elements cannot be interchanged as it is not a square matrix\n");
      }
    getch();
  }

