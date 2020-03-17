#include<stdio.h>
#include<conio.h>
#include<math.h>
int bin_search(int,int [],int,int);
void main()
  {
    int i,n,a[30],key,result;
    clrscr();
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(i=1;i<=n;i++)
      {
	scanf("%d",&a[i]);
      }
    printf("enter the key element to be searched\n");
    scanf ("%d",&key);
    result=bin_search(key,a,1,n);
    if(result==-1)
      printf("%d not found\n",key);
    else
      printf("%d found at position %d\n",key,result);
    getch();
  }
int bin_search(int key,int a[],int low,int high)
  {
    int mid;
    if(low>high)
      return(-1);
    mid=(low+high)/2;
    if(key==a[mid])
      return mid;
    if(key<a[mid])
      return (bin_search(key,a,low,mid-1));
    else
      return (bin_search(key,a,mid+1,high));
  }