#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
  {
    int num,f=1,i,rem;
    clrscr();
    printf("enter any number to be checked\n");
    scanf("%d",&num);
    for(i=2;i<num;i++)
      {
	rem=num%i;
	if(rem==0)
	  {
	    f=0;
	  }
      }
    if(f==1)
      {
	printf("the number %d is prime\n",num);
      }
    else
      {
	printf("the number %d is not prime\n",num);
      }
    getch();
  }

