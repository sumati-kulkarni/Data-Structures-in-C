#include<stdio.h>
#include<conio.h>

void radix_sort(int [],int);
void insert_bucket(int [],int,int);
void main()
  {
    int n,i,a[100];
    clrscr();
    printf("\tRadix Sorting\n\n\n");
    printf("Enter the Value Of n : ");
    scanf("%d",&n);
    printf("\n\nEnter %d values\n",n);
    for(i=0;i<n;i++)
      {
	scanf("%d",&a[i]);
      }
    radix_sort(a,n);
    printf("\nAfter Sorting\n");
    for(i=0;i<n;i++)
      {
	printf("%d\n",a[i]);
      }
    getch();
  }

void radix_sort(int a[],int n)
  {
    int i,l,p=1;
    l=a[0];
    for(i=1;i<n;i++)
      {
	if(a[i]>l)
	  {
	    l=a[i];
	  }
      }
    while(l!=0)
      {
	insert_bucket(a,n,p);
	l=l/10;
	p=p*10;
      }
  }

void insert_bucket(int a[],int n,int p)
  {
    int b[20][100],cnt[20],r,c,i,j;
    for(i=0;i<n;i++)
      {
	cnt[i]=0;
      }
    for(i=0;i<n;i++)
      {
	r=(a[i]/p)%10;
	c=cnt[r];
	b[r][c]=a[i];
	cnt[r]++;
      }
    i=0;
    for(r=0;r<n;r++)
      {
	for(c=0;c<cnt[r];c++)
	  a[i++]=b[r][c];
      }
  }
