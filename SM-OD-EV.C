#include<stdio.h>
#include<conio.h>
#include<math.h>
int evensum(int [],int);
int oddsum(int [],int);
void main()
  {
    int i,n,ar[50],osum=0,esum=0;
    clrscr();
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("enter %d numbers of an array\n",n);
    for(i=0;i<n;i++)
      {
	scanf("%d",&ar[i]);
      }
    printf("even numbers\n");
    esum=evensum(ar,n);
    printf("odd numbers\n");
    osum=oddsum(ar,i);
    printf("sum of even numbers = %d\n",esum);
    printf("sum of odd numbers = %d\n",osum);
    getch();
  }
int evensum(int ar[],int n)
  {
    int i;
    int sum=0;
    for(i=0;i<n;i++)
      {
	if((ar[i]%2)==0)
	  {
	    sum=sum+ar[i];
	    printf("%d\n",ar[i]);
	  }
      }
    return sum;
  }
int oddsum(int ar[],int n)
  {
    int i;
    int sum=0;
    for(i=0;i<n;i++)
      {
	if((ar[i]%2)!=0)
	  {
	    sum=sum+ar[i];
	    printf("%d\n",ar[i]);
	  }
      }
    return sum;
  }