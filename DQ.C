#include<stdio.h>
#include<conio.h>
#include<math.h>
void insert_front(int *,int []);
void insert_rear(int,int *,int *,int []);
void delete_front(int *,int *,int []);
void delete_rear(int *,int []);
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
	printf("\n1 insert_front\n2 insert_rear\n3 delete_front\n4 delete_rear\n5 display\n6 exit\n\nenter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	  {
	    case 1 : insert_front(&front,q);
		     break;
	    case 2 : insert_rear(qsize,&front,&rear,q);
		     break;
	    case 3 : delete_front(&front,&rear,q);
		     break;
	    case 4 : delete_rear(&rear,q);
		     break;
	    case 5 : display(qsize,&front,&rear,q);
		     break;
	    case 6 : exit(0);
	    default : printf("invalid choice\n");
		      break;
	  }
      }
  }
void insert_front(int *front,int q[])
  {
    int item;
    if(*front==0)
      {
	printf("cannot insert from front\n");
	return;
      }
    printf("enter the item to be inserted\n");
    scanf("%d",&item);
    if(*front==-1)
      {
	*front=*front+1;
	q[*front]=item;
      }
    else
      {
	*front=*front-1;
	q[*front]=item;
      }
    printf("inserted element = %d\n",q[*front]);
  }
void insert_rear(int qsize,int *front,int *rear,int q[])
  {
    int item;
    if(*rear==(qsize-1))
      {
	printf("cannot insert from rear\n");
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
void delete_front(int *front,int *rear,int q[])
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
void delete_rear(int *rear,int q[])
  {
    if(*rear==-1)
      {
	printf("cannot delete from rear\n");
	return;
      }
    else
      {
	printf("deleted element = %d\n",q[*rear]);
	free(q[*rear]);
	*rear=*rear-1;
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