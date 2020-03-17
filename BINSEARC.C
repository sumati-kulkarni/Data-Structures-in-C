#include<stdio.h>
#include<conio.h>
#include<math.h>
void bin_search(int,int [],int);
int main()
  {
    int i,a[100],n,key;
    n=key=0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("enter %d elements in sorted order\n",n);
    for(i=1;i<=n;i++)
      {
	scanf("%d",&a[i]);
      }
    printf("enter the searching key element\n");
    scanf("%d",&key);
    bin_search(n,a,key);
    getch();
    return 0;
  }
void bin_search(int n,int a[],int key)
  {
    int low,mid,high;
    low=1;
    high=n;
    do
      {
	mid=(low+high)/2;
	if(a[mid]>key)
	  {
	    high=mid-1;
	  }
	else if(a[mid]<key)
	  {
	    low=mid+1;
	  }
	else
	  {
	    printf("%d found in position %d\n",key,mid);
	    return;
	  }
      }while(low<=high);
    printf("element %d not found\n",key);
  }
