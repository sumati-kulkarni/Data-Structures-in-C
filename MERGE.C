#include<stdio.h>
#include<conio.h>
#include<math.h>
void merge(int [],int,int);
void simple_merge(int [],int,int,int);
void main()
  {
    int a[20],n,i;
    clrscr();
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("enter %d elements to sort\n",n);
    for(i=0;i<n;i++)
      {
	scanf("%d",&a[i]);
      }
    merge(a,0,n-1);
    printf("sorted list of elements is:\n");
    for(i=0;i<n;i++)
      {
	printf("%d\n",a[i]);
      }
    getch();
  }
void merge(int a[],int low,int mid,int high)
{
	int i,m,k,l,temp[1000];
    l=low;
    i=low;
    m=mid+1;
    while((l<=mid)&&(m<=high))
	{
         if(a[l]<=a[m])        
                    temp[i]=a[l++];
         else				   
                    temp[i]=a[m++];
         i++;
    }
    if(l>mid){
         for(k=m;k<=high;k++)
             temp[i++]=a[k];
    }
    else{
         for(k=l;k<=mid;k++)
             temp[i++]=a[k];
    }
    for(k=low;k<=high;k++)
         a[k]=temp[k];
}

void merge_sort(int a[],int low,int high)
{
	int mid;

    if(low<high){
         mid=(low+high)/2;
         merge_sort(a,low,mid);
         merge_sort(a,mid+1,high);
         merge(a,low,mid,high);
    }
}
