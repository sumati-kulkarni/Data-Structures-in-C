#include<stdio.h>
#include<conio.h>

void shell_sort(int [],int);
void main()
  {
    int n,i,a[100];
    clrscr();
    printf("\tShell Sorting\n\n\n");
    printf("Enter the Value Of n : ");
    scanf("%d",&n);
    printf("\n\nEnter %d values\n",n);
    for(i=0;i<n;i++)
      {
	scanf("%d",&a[i]);
      }
    shell_sort(a,n);
    printf("\nAfter Sorting\n");
    for(i=0;i<n;i++)
      {
	printf("%d\n",a[i]);
      }
    getch();
  }

void shell_sort(int a[],int n)
  {
    int i,j,tmp,d;
    d=n/2;
    while(d!=0)
      {
	for(i=d;i<n;i++)
	  {
	    j=i;
	    while(((j-d)>=0)&&(a[j]<a[j-d]))
	      {
		tmp=a[j];
		a[j]=a[j-d];
		a[j-d]=tmp;
		j=j-d;
	      }
	  }
	d=d/2;
      }
  }