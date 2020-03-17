#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
  {
    int a[10][10];
    int i,j,m,n,k;
    int det=1.0,norm=0;
    clrscr();
    printf("enter the row size & column size\n");
    scanf("%d%d",&m,&n);
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
	for(k=0;k<n;k++)
	  {
	    for(i=k+1;i<m;i++)
	      {
		norm=a[i][k]/a[k][k];
		printf("norm= %d\n",norm);
		for(j=0;j<n;j++)
		  {
		    a[i][j]=a[i][j]-(norm*a[k][j]);
		  }
	      }
	  }
	printf("eliminated matrix is:\n");
	for(i=0;i<m;i++)
	  {
	    for(j=0;j<n;j++)
	      {
		printf("%d\t",a[i][j]);
	      }
	    printf("\n");
	  }
	for(i=0;i<m;i++)
	  {
	    det=det*a[i][i];
	    printf("det= %d\n",det);
	  }
	printf("determined matrix is = %d\n",det);
	if(det==0)
	  {
	    printf("it is a singular matrix\n");
	  }
	else
	  {
	    printf("it is not a singular matrix\n");
	  }
      }
    else
      {
	printf("invalid entry\n");
      }
    getch();
  }