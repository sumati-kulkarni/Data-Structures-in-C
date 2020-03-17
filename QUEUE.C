#include<stdio.h>
#include<conio.h>
#include<math.h>
void insert(int,int *,int *,int []);
void delete(int *,int *,int []);
void display(int,int*,int *,int []);
void main()
  {
    int q[100],qsize,ch,front,rear,item,i;
    front=rear=-1;
    clrscr();
    printf("enter queue size\n");
    scanf("%d",&qsize);
    for(;;)
      {
	printf("\n1 insert\n2 delete\n3 display\n4 exit\n\nenter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	  {
	    case 1 : insert(qsize,&front,&rear,q);
		     break;
	    case 2 : delete(&front,&rear,q);
		     break;
	    case 3 : display(qsize,&front,&rear,q);
		     break;
	    case 4 : exit(0);
	    default : printf("invalid choice\n");
		      break;
	  }
      }
  }
void insert(int qsize,int *front,int *rear,int q[])
  {
    int item;
    if(*rear==(qsize-1))
      {
	printf("queue overflow\n");
	return;
      }
    else
      {
	if(*front==-1)
	  {
	    *front=*front+1;
	  }
	*rear=*rear+1;
	printf("enter the element to be inserted\n");
	scanf("%d",&item);
	q[*rear]=item;
	printf("inserted element = %d\n",q[*rear]);
      }
  }
void delete(int *front,int *rear,int q[])
  {
    if((*rear==-1)||(*front>*rear))
      {
	printf("queue underflow\n");
	return;
      }
    else
      {
	printf("deleted element = %d\n",q[*front]);
	free(q[*front]);
	*front=*front+1;
      }
  }
void display(int qsize,int *front,int *rear,int q[])
  {
    int i;
    if((*rear==-1)||(*front>*rear))
      {
	printf("queue empty\n");
	return;
      }
    else
      {
	printf("the contents of queue are\n\n");
	for(i=*front;i<=*rear;i++)
	  {
	    printf("%d\t",q[i]);
	  }
	if((*rear==qsize-1)&&(*front==0))
	  {
	    printf("\n\nqueue is full\n");
	  }
      }
  }