#include<stdio.h>
#include<conio.h>
#include<math.h>
void quick_sort(int [],int,int);
void main()
  {
    int i,a[20],n;
    clrscr();
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("enter %d elements to sort\n",n);
    for(i=0;i<n;i++)
      {
	scanf("%d",&a[i]);
      }

    quick_sort(a,0,n-1);
    printf("sorted araay is\n");
    for(i=0;i<n;i++)
      {
	printf("%d\n",a[i]);
      }
    getch();
  }
void quick_sort(int a[],int l,int h)
  {
    int temp;
    if(l<h)
      {
	temp=partition(a,l,h);
	quick_sort(a,l,temp-1);
	quick_sort(a,temp+1,h);
      }
  }
int partition(int a[],int,int);
int partition(int a[],int l,int h)
  {
	int i,j,key,temp,flag=1;
	key=a[l];
	i=l+1;
	j=h;
	while(flag==1)
	  {
	    while((key>a[i])&&(i<h))
	      {
		i=i+1;
	      }

	while(key<a[j])
	  {
	    j=j-1;
	  }
	if(i<j)
	  {
	    temp=a[i];
	    a[i]=a[j];
	    a[j]=temp;
	  }
	else
	  {
	    flag=0;
	  }

      }
    temp=a[l];
    a[l]=a[j];
    a[j]=temp;
    return(j);
  }