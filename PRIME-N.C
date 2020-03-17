#include<conio.h>
#include<stdio.h>

void main()
  {
    int n,i,j,rem=0;
    clrscr();
    printf("\nEnter the value of n\n");
    scanf("%d",&n);
    printf("\nThe prime numbers between 0 & %d are\n",n);
    for(i=0;i<n;i++)
      {
	for(j=2;j<n;j++)
	  {
	    rem=i%j;
	    if(rem!=0)
	      {
		printf("%d\n",i);
		break;
	      }
	    break;
	  }
      }
    getch();
  }
