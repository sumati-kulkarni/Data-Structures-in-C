#include<stdio.h>
#include<conio.h>
#include<math.h>
int count=0;
struct node *insert(int,struct node *);
struct node *iter_search(int,struct node *);
struct node *recur_search(int,struct node *);
struct node *max(struct node *);
struct node *min(struct node *);
int count_node(struct node *);
int count_leaf(struct node *);
void inorder(struct node *);
struct node
  {
    int data;
    struct node *left;
    struct node *right;
  };
void main()
  {
    struct node *temp,*root;
    int ch,d,i;
    temp=root=NULL;
    clrscr();
    for(;;)
      {
	printf("insert\n2 iterative search\n3 recursive search\n4 maximum of nodes\n5 minimum of nodes\n6 count nodes\n7 count leafs\n8 inorder\n9 exit\nenter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	  {
	    case 1 : printf("enter the item to be inserted\n");
		     scanf("%d",&d);
		     root=insert(d,root);
		     break;
	    case 2 : if(root==NULL)
		       {
			 printf("tree is empty\n");
		       }
		     else
		       {
			 printf("enter the node value which you waana search\n");
			 scanf("%d",&d);
			 root=iter_search(d,root);
		       }
		     break;
	    case 3 :
			 printf("enter the node value which you waana search\n");
			 scanf("%d",&d);
			 root=recur_search(d,root);
			 if(d==root->data)
			   {
			     printf("node found\m");
			   }
			 else
			   {
			     printf("not found\n");
			   }
		     break;
	    case 4 : temp=max(root);
		     printf("maximum node value = %d\n",temp->data);
		     break;
	    case 5 : temp=min(root);
		     printf("minimum node value = %d\n",temp->data);
		     break;
	    case 6 : i=count_node(root);
		     printf("total number of nodes = %d\n",i);
		     break;
	    case 7 : i=count_leaf(root);
		     printf("total number of leaf nodes = %d\n",i);
		     break;
	    case 8 : if(root==NULL)
		       {
			 printf("tree is empty\n");
		       }
		     else
		       {
			 printf("inorder traversal is \n");
			 inorder(root);
		       }
		     break;
	    case 9 : exit(0);
	  }
      }
  }
struct node *insert(int d,struct node *p)
  {
    struct node *q,*t,*new;
    q=(struct node *)malloc(sizeof(struct node));
    q->data=d;
    q->right=q->left=NULL;
    if(p==NULL)
      return q;
    new=p;
    t=NULL;
    while(new!=NULL)
      {
	t=new;
	if(d==new->data)
	  {
	    printf("duplicata nodes cannot be created in binary search tree\n");
	    free(q);
	  }
	if(d<new->data)
	  new=new->left;
	else
	  new=new->right;
      }
    if(d<t->data)
      t->left=q;
    else
      t->right=q;
    return(p);
  }
struct node *iter_search(int d,struct node *root)
  {
    if(root==NULL)
      return root;
    while(root!=NULL)
      {
	if(d==root->data)
	  break;
	if(d<root->data)
	  root=root->left;
	else
	  root=root->right;
      }
    if(root==NULL)
      {
	printf("item not found\n");
	return root;
      }
    printf("key found\n");
    return root;
  }
struct node *recur_search(int d,struct node *root)
  {
    if((root==NULL)||(d==root->data))
      {
	return root;
      }
    if(d<root->data)
      return recur_search(d,root->left);
    else
      return recur_search(d,root->right);
  }
struct node *max(struct node *root)
  {
    struct node *temp;
    if(root==NULL)
      return root;
    temp=root;
    while(temp->right!=NULL)
      {
	temp=temp->right;
      }
    return temp;
  }
struct node *min(struct node *root)
  {
    struct node *temp;
    if(root==NULL)
      return root;
    temp=root;
    while(temp->left!=NULL)
      {
	temp=temp->left;
      }
    return temp;
  }
int count_node(struct node *p)
  {
    int count;
    if(p==NULL)
      return count;
    count_node(p->left);
    count=count+1;
    count_node(p->right);
  }
int count_leaf(struct node *p)
  {
    int count;
    if(p==NULL)
      return count;
    count_leaf(p->left);
    count=count+1;
    count_leaf(p->right);
  }
void inorder(struct node *p)
  {
    if(p==NULL)
      return;
    inorder(p->left);
    printf("%d\t",p->data);
    inorder(p->right);
  }