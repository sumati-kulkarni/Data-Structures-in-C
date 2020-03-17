#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
  {
    int i,j,m,n,a[10][10],flag=1;
    clrscr();
    printf("enter the order of matrix\n");
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
	for(i=0;i<n;i++)
	  {
	    for(j=0;j<n;j++)
	      {
		if(((i==j)&&(a[i][j]==0))||((i!=j)&&(a[i][j]!=0)))
		  {
		    flag=0;
		    break;
		  }
	      }
	  }
       if(flag==1)
	 {
	  printf("identity matrix\n");
	 }
       else
	{
	 printf("not identity matrix\n");
	}
     }
   else
     {
	printf("cannot\n");
     }
  getch();
}