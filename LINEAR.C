#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
  {
    int a[20],i,key,flag=0,n;
    clrscr();
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(i=0;i<n;i++)
      {
	scanf("%d",&a[i]);
      }
    printf("enter the element to be searched\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
      {
	if(a[i]==key)
	  {
	    printf("%d found at position %d\n",key,i+1);
	    flag=1;
	    break;
	  }
      }
    if(flag==0)
      {
	printf("%d not found\n",key);
      }
    getch();
  }
