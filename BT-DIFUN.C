#include<stdio.h>
#include<conio.h>
#include<math.h>
struct node *insert(struct node *,int);
void search(int,struct node *,int *);
struct node *copy(struct node *);
void display(struct node *);
struct node
  {
    int data;
    struct node *left,*right;
  };
void main()
  {
    struct node *cpy=NULL,*root=NULL;
    int ch,d,flag;
    clrscr();
    for(;;)
      {
	printf("1 create\n2 search\n3 display\n4 create copy of tree\n5 exit\nenter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	  {
	    case 1 : printf("enter the data\n");
		     scanf("%d",&d);
		     root=insert(root,d);
		     break;
	    case 2 : if(root==NULL)
		       {
			 printf("tree is empty\n");
		       }
		     else
		       {
			 printf("enter the node value which you wanna search\n");
			 scanf("%d",&d);
			 flag=0;
			 search(d,root,&flag);
			 if(flag==0)
			   {
			     printf("%d found\n",d);
			   }
			 else
			   {
			     printf("%d not found\n",d);
			   }
		       }
		     break;
	    case 3 : if(root==NULL)
		       {
			 printf("tree does not contain any node\n");
		       }
		     else
		       {
			 printf("tree elements\n");
			 display(root);
		       }
		     break;
	    case 4 : cpy=copy(root);
		     if(cpy==NULL)
		       {
			 printf("tree does not contain any node\n");
		       }
		     else
		       {
			 printf("copied tree is\n");
			 display(cpy);
		       }
		     break;
	    case 5 : exit(0);
	    default : printf("invalid choice\n");
	  }
      }
  }
void search(int d,struct node *p,int *flag)
  {
    if(p==NULL)
      {
	return;
      }
    search(d,p->left,flag);
    if(d==p->left)
      {
	*flag=1;
	return;
      }
    search(d,p->right,flag);
  }
struct node *copy(struct node *p)
  {
    struct node *cpy=NULL;
    if(p==NULL)
      {
	return p;
      }
    cpy=(struct node *)malloc(sizeof(struct node));
    cpy->data=p->data;
    cpy->left=copy(p->left);
    cpy->right=copy(p->right);
    return cpy;
  }
struct node *insert(struct node *p,int d)
  {
    if(p==NULL)
      {
	p=(struct node *)malloc(sizeof(struct node));
	p->data=d;
	p->left=p->right=NULL;
      }
    else if(d<p->data)
      {
	p->left=insert(p->left,d);
      }
    else if(d>p->data)
      {
	p->right=insert(p->right,d);
      }
    else
      {
	printf("node already exits\n");
      }
    return(p);
  }
void display(struct node *p)
  {
    if(p==NULL)
      {
	return;
      }
    display(p->left);
    printf("%d\t",p->data);
    display(p->right);
  }