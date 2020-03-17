#include<stdio.h>
#include<conio.h>
#include<math.h>
void heapform(int [20],int);
void adjust(int [20],int,int);
void heapsort(int [20],int);
void main()
  {
    int a[20],n,i;
    clrscr();
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("enter %d elements to sort\n",n);
    for(i=1;i<=n;i++)
      {
	scanf("%d",&a[i]);
      }
    heapsort(a,n);
    printf("sorted list of elements is:\n");
    for(i=1;i<=n;i++)
      {
	printf("%d\n",a[i]);
      }
    getch();
  }

void heapsort(int a[20],int n)
  {
    int i,temp;
    heapform(a,n);
    for(i=n;i>=2;i--)
      {
	temp=a[i];
	a[i]=a[1];
	a[1]=temp;
	adjust(a,1,i-1);
      }
  }

void heapform(int a[20],int n)
  {
    int i;
    for(i=(n/2);i>=1;i--)
      {
	adjust(a,i,n);
      }
  }

void adjust(int a[20],int i,int n)
  {
    int j,item;
    j=2*i;
    item=a[i];
    while(j<=n)
      {
	if((j<n)&&(a[j]<a[j+1]))
	  {
	    j=j+1;
	  }
	if(item>=a[j])
	  {
	    break;
	  }
	a[j/2]=a[j];
	j=2*j;
      }
    a[j/2]=item;
  }