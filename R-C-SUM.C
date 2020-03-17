#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
  {
    int a[10][10];
    int m,n,i,j;
    int r_sum,c_sum,p_sum,s_sum;
    p_sum=s_sum=0;
    clrscr();
    printf("enter the row size\n");
    scanf("%d",&m);
    printf("enter the column size\n");
    scanf("%d",&n);
    printf("enter the elements of matrix\n");
    for(i=1;i<=m;i++)
      {
	for(j=1;j<=n;j++)
	  {
	    scanf("%d",&a[i][j]);
	  }
      }
    for(i=1;i<=m;i++)
      {
	r_sum=0;
	for(j=1;j<=n;j++)
	  {
	    r_sum=r_sum+a[i][j];
	  }
	printf("sum of row %d = %d\n",i,r_sum);
      }
    for(j=1;j<=n;j++)
      {
	c_sum=0;
	for(i=1;i<=m;i++)
	  {
	    c_sum=c_sum+a[i][j];
	  }
	printf("sum of column %d = %d\n",j,c_sum);
      }
    if(m==n)
      {
	for(i=1;i<=m;i++)
	  {
	    p_sum=p_sum+a[i][i];
	  }
	j=n;
	for(i=1;i<=m;i++)
	  {
	    s_sum=s_sum+a[i][j];
	    j--;
	  }
	printf("primary diagonal sum = %d\n",p_sum);
	printf("secondary diagonal sum = %d\n",s_sum);
      }
    else
      {
	printf("sum of diagonal elements is not possible as it is not a square matrix\n");
      }
    getch();
  }