#include<stdio.h>
#include<conio.h>
#include<math.h>
void insert(int,int []);
void inorder(int [],int);
void preorder(int [],int);
void postorder(int [],int);
int a[100];
void main()
  {
    int d,ch,i;
    for(i=0;i<100;i++)
      {
	a[i]=0;
      }
    for(;;)
      {
	printf("1 insert\n2 inorder\n3 preorder\n4 postorder\n5 exit\nenter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	  {
	    case 1 : printf("enter the element to be inserted\n");
		     scanf("%d",&d);
		     insert(d,a);
		     break;
	    case 2 : if(a[0]==0)
		       {
			 printf("tree is empty\n");
		       }
		     else
		       {
			 printf("inorder traversal is\n");
			 inorder(a,0);
			 printf("\n");
		       }
		     break;
	    case 3 : if(a[0]==0)
		       {
			 printf("tree is empty\n");
		       }
		     else
		       {
			 printf("preorder traversal is\n");
			 preorder(a,0);
			 printf("\n");
		       }
		     break;
	    case 4 : if(a[0]==0)
		       {
			 printf("tree is empty\n");
		       }
		     else
		       {
			 printf("postorder traversal is\n");
			 postorder(a,0);
			 printf("\n");
		       }
		     break;
	    case 5 : exit(0);
	    default : printf("invalis choice\n");
	  }
      }
  }
void insert(int d,int a[])
  {
    int i;
    i=0;
    while((i<100)&&(a[i]!=0))
      {
	if(d<a[i])
	  {
	    i=2*i+1;
	  }
	else
	  {
	    i=2*i+2;
	  }
      }
    a[i]=d;
  }
void inorder(int a[],int i)
  {
    if(a[i]==0)
      {
	return;
      }
    inorder(a,2*i+1);
    printf("%d\t",a[i]);
    inorder(a,2*i+2);
  }
void preorder(int a[],int i)
  {
    if(a[i]==0)
      {
	return;
      }
    printf("%d\t",a[i]);
    preorder(a,2*i+1);
    preorder(a,2*i+2);
  }
void postorder(int a[],int i)
  {
    if(a[i]==0)
      {
	return;
      }
    postorder(a,2*i+1);
    postorder(a,2*i+2);
    printf("%d\t",a[i]);
  }