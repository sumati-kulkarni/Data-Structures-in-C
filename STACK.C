#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
void push(int,int *,int []);
void pop(int *,int []);
void top_of_stack(int *,int []);
void display(int,int *,int []);

int main()
  {
    int s[100],ss,ch,top=-1,item,i;
    printf("enter the size of stack\n");
    scanf("%d",&ss);
    for(;;)
      {
	printf("\n1 push\n2 pop\n3 top of stack\n4 display\n5 exit\n\nenter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	  {
	    case 1 : push(ss,&top,s);
		     break;
	    case 2 : pop(&top,s);
		     break;
	    case 3 : top_of_stack(&top,s);
		     break;
	    case 4 : display(ss,&top,s);
		     break;
	    case 5 : exit(0);
	    default : printf("invalid choice\n");
	  }
      }
      return 0;
  }
void push(int ss,int *top,int s[])
  {
    int item;
    if(*top==(ss-1))
      {
	printf("stack overflow\n");
	return;
      }
    else
      {
	*top=*top+1;
	printf("enter the element to be inserted\n");
	scanf("%d",&item);
	s[*top]=item;
	printf("inserted element = %d\n",s[*top]);
      }
  }
void pop(int *top,int s[])
  {
    if(*top==-1)
      {
	printf("stack underflow\n");
	return;
      }
    else
      {
	printf("deleted element = %d\n",s[*top]);
	*top=*top-1;
      }
  }
void top_of_stack(int *top,int s[])
  {
    if(*top==-1)
      {
	printf("stack is empty\n");
      }
    else
      {
	printf("top of stack = %d\n",s[*top]);
      }
  }
void display(int ss,int *top,int s[])
  {
    int i;
    if(*top==-1)
      {
	printf("stack empty\n");
	return;
      }
    else
      {
	printf("the contents of stack are\n");
	for(i=*top;i>=0;i--)
	  {
	    printf("%d\n",s[i]);
	  }
	if(*top==ss-1)
	  {
	    printf("stack is full\n");
	  }
      }
  }
