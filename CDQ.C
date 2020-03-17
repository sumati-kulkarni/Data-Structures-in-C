#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
  {
    int dq[100],dqsize,ch,front,rear,flag,item,i;
    front=rear=flag=0;
    clrscr();
    printf("enter circular queue size\n");
    scanf("%d",&dqsize);
    for(;;)
      {
	printf("\n1 insert from front\n2 insert from rear\n3 delete from front\n4 delete from rear\n5 display\n6 exit\n\nenter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	  {
	    case 1 : if((front==rear)&&(flag==1))
		       {
			 printf("dqueue overflow\n");
		       }
		     else
		       {
			 flag=1;
			 front=(front+(dqsize-1))%dqsize;
			 printf("enter the element to be inserted\n");
			 scanf("%d",&item);
			 dq[front]=item;
		       }
		     break;
	    case 2 : if((front==rear)&&(flag==1))
		       {
			 printf("dqueue overflow\n");
		       }
		     else
		       {
			 flag=1;
			 rear=(rear+1)%dqsize;
			 printf("enter the item to be inserted\n");
			 scanf("%d",&item);
			 dq[rear]=item;
		       }
		     break;
	    case 3 : if(flag==0)
		       {
			 printf("dqueue underflow\n");
		       }
		     else
		       {
			 item=dq[front];
			 printf("deleted element = %d\n",item);
			 free(dq[front]);
			 front=(front+1)%dqsize;
			 if(front==rear)
			   {
			     flag=0;
			   }
		       }
		     break;
	    case 4 : if(flag==0)
		       {
			 printf("dqueue underflow\n");
		       }
		     else
		       {
			 item=dq[rear];
			 printf("deleted element = %d\n",item);
			 free(dq[rear]);
			 rear=(rear+(dqsize-1))%dqsize;
			 if(front==rear)
			   {
			     flag=0;
			   }
		       }
		     break;
	    case 5 : if(flag==0)
		       {
			 printf("dqueue empty\n");
		       }
		     else
		       {
			 printf("the contents of dqueue are\n\n");
			 i=front;
			 do
			   {
			     printf("%d\t",dq[i]);
			     i=(i+1)%dqsize;
			   }while(i!=rear);
			 if((front==rear)&&(flag==1))
			   {
			     printf("\n\ndqueue is full\n");
			   }
		       }
		     break;
	    case 6 : exit(0);
	    default : printf("invalid choice\n");
	  }
      }
  }