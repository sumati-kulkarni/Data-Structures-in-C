#include<stdio.h>
#include<conio.h>
#include<math.h>
int a[100];
void insert(int,int []);
void in_order(int [],int);
void post_order(int [],int);
void pre_order(int [],int);
void main()
  {
    int item,ch,i;
    for(i=0;i<100;i++)
      {
	a[i]=0;
      }
    for(;;)
      {
	printf("1 insert\n2 in_order\n3 post_order\n4 pre_order\n5 exit\nenter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	  {
	    case 1 : printf("enter the element to be inserted\n");
		     scanf("%d",&item);
		     insert(item,a);
		     break;
	    case 2 : if(a[0]==0)
		       {
			 printf("tree is empty\n");
		       }
		     else
		       {
			 printf("inorder traversal\n");
			 in_order(a,0);
			 printf("\n");
		       }
		     break;
	    case 3 : if(a[0]==0)
		       {
			 printf("tree is empty\n");
		       }
		     else
		       {
			 printf("postorder traversal\n");
			 post_order(a,0);
			 printf("\n");
		       }
		     break;
	    case 4 : if(a[0]==0)
		       {
			 printf("tree is empty");
		       }
		     else
		       {
			 printf("preorder traversal\n");
			 pre_order(a,0);
			 printf("\n");
		       }
		     break;
	    case 5 : exit(0);
	    default : printf("invalid choice\n");
	  }
      }
  }
void insert(int item,int a[])
  {
    int i;
    i=0;
    while((i<100)&&(a[i]!=0))
      {
	if(item<a[i])
	  i=2*i+1;
	else
	  i=2*i+2;
      }
    a[i]=item;
  }
void in_order(int a[],int i)
  {
    if(a[i]==0)
      return;
    in_order(a,2*i+1);
    printf("%d\t",a[i]);
    in_order(a,2*i+2);
  }
void post_order(int a[],int i)
  {
    if(a[i]==0)
      return;
    post_order(a,2*i+1);
    post_order(a,2*i+2);
    printf("%d\t",a[i]);
  }
void pre_order(int a[],int i)
  {
    if(a[i]==0)
      return;
    printf("%d\t",a[i]);
    pre_order(a,2*i+1);
    pre_order(a,2*i+2);
  }