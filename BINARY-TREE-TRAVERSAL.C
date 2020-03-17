#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct tree
  {
    int data;
    struct tree *lchild;
    struct tree *rchild;
  };
  
  
struct tree *insert(struct tree *p,int val)
{
   struct tree *temp1,*temp2;
   if(p == NULL)
   {
      p = (struct tree *) malloc(sizeof(struct tree)); /* insert the new node as root node*/
         if(p == NULL)
           {
      printf("Cannot allocate\n");
      exit(0);
          }
       p->data = val;
       p->lchild=p->rchild=NULL;
   }
  else
  {
   temp1 = p;
   /* traverse the tree to get a pointer to that node whose child will be the newly created node*/
  while(temp1 != NULL)
  {
     temp2 = temp1;
     if( temp1 ->data > val)
          temp1 = temp1->lchild;
     else
          temp1 = temp1->rchild;
  }
  if( temp2->data > val)
  {
  temp2->lchild = (struct tree*)malloc(sizeof(struct tree));/*inserts the newly created node as left child*/
          temp2 = temp2->lchild;
          if(temp2 == NULL)
               {
          printf("Cannot allocate\n");
          exit(0);
              }
          temp2->data = val;
          temp2->lchild=temp2->rchild = NULL;
  }
  else
  {
     temp2->rchild = (struct tree*)malloc(sizeof(struct tree));/*inserts the newly created node   as left child*/
      temp2 = temp2->rchild;
      if(temp2 == NULL)
           {
      printf("Cannot allocate\n");
      exit(0);
          }
     temp2->data = val;
     temp2->lchild=temp2->rchild = NULL;
}
}
return(p);
}

void inorder(struct tree *p)
  {
    if(p==NULL)
      return;
	inorder(p->lchild);
	printf("%d\t",p->data);
	inorder(p->rchild);
  }

void preorder(struct tree *p)
  {
    if(p==NULL)
        return;
	printf("%d\t",p->data);
	preorder(p->lchild);
	preorder(p->rchild);
  }

void postorder(struct tree *p)
  {
    if(p==NULL)
        return;
	postorder(p->lchild);
	postorder(p->rchild);
	printf("%d\t",p->data);
  }

int main()
  {
    int ch;
    int val;
    struct tree *root = NULL;
    for(;;)
      {
	printf("1 Create\n2 In-order\n3 Pre-order\n4 Post-order5 Exit\n\nenter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	  {
	    case 1 : printf("\nEnter the value : ");
                 scanf("%d",&val);
                 root = insert(root, val);
		     break;
	    case 2 : inorder(root);
		     break;
	    case 3 : preorder(root);
		     break;
	    case 4 : postorder(root);
		     break;
	    case 5 : exit(0);
	    default : printf("invalid choice\n");
	  }
      }
      return 0;
  }
