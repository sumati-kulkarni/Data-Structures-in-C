#include<stdio.h>
#include<conio.h>
#include<math.h>
void insert(int,int *,int *,int *,int []);
void delete(int,int *,int *,int *,int []);
void display(int,int *,int *,int *,int []);
void main()
  {
    int cq[100],cqsize,ch,front,rear,flag,item,i;
    front=rear=flag=0;
    clrscr();
    printf("enter circular queue size\n");
    scanf("%d",&cqsize);
    for(;;)
      {
	printf("\n1 insert\n2 delete\n3 display\n4 exit\n\nenter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	  {
	    case 1 : insert(cqsize,&front,&rear,&flag,cq);
		     break;
	    case 2 : delete(cqsize,&front,&rear,&flag,cq);
		     break;
	    case 3 : display(cqsize,&front,&rear,&flag,cq);
		     break;
	    case 4 : exit(0);
	    default : printf("invalid choice\n");
	  }
      }
  }
void insert(int cqsize,int *front,int *rear,int *flag,int cq[])
  {
    int item;
    if((*front==*rear)&&(*flag==1))
      {
	printf("circular queue overflow\n");
      }
    else
      {
	*flag=1;
	printf("enter the element to be inserted\n");
	scanf("%d",&item);
	cq[*rear]=item;
	printf("inserted element = %d\n",cq[*rear]);
	*rear=(*rear+1)%cqsize;
      }
  }
void delete(int cqsize,int *front,int *rear,int *flag,int cq[])
  {
    if(*flag==0)
      {
	printf("circular queue underflow\n");
      }
    else
      {
	printf("deleted element = %d\n",cq[*front]);
	free(cq[*front]);
	*front=(*front+1)%cqsize;
	if(*front==*rear)
	  {
	    *flag=0;
	  }
      }
  }
void display(int cqsize,int *front,int *rear,int *flag,int cq[])
  {
    int i;
    if(*flag==0)
      {
	printf("circular queue empty\n");
      }
    else
      {
	printf("the contents of circular queue are\n\n");
	i=*front;
	do
	  {
	    printf("%d\t",cq[i]);
	    i=(i+1)%cqsize;
	  }while(i!=*rear);
	if((*front==*rear)&&(*flag==1))
	  {
	    printf("\n\ncircular queue is full\n");
	  }
      }
  }