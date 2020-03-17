#include<stdio.h>
#include<conio.h>
#include<string.h>
int pred(char);
char top_of_stack();
char pop();
void push(char);
int isEmpty();
void convert(char [],char[]);
struct stack
  {
    char s[100];
    int top;
  }x;
void main()
  {
    char inf[100],post[100];
    x.top=-1;
    clrscr();
    printf("enter the infix expression\n");
    scanf("%s",inf);
    convert(inf,post);
    printf("postfix expression = %s\n",post);
    getch();
  }
void convert(char inf[],char post[])
  {
    char tok;
    int i,p,flag=1;
    p=0;
    x.top=-1;
    for(i=0;(tok=inf[i])!='\0';i++)
      {
	if(isalpha(tok)||isdigit(tok))
	  {
	    post[p++]=tok;
	  }
	else if(tok==')')
	  {
	    while(top_of_stack()!='(')
	      {
		post[p++]=pop();
	      }
	    pop();
	  }
	else
	  {
	    flag=0;
	    do
	      {
		if(isEmpty())
		  {
		    flag=1;
		  }
		else if(tok=='(')
		  {
		    flag=1;
		  }
		else if(top_of_stack()=='(')
		  {
		    flag=1;
		  }
		else if(pred(tok)>pred(top_of_stack()))
		  {
		    flag=1;
		  }
		else
		  {
		    post[p++]=pop();
		  }
	      }while(flag==0);
	    push(tok);
	  }
      }
    while(!isEmpty())
      {
	post[p++]=pop();
      }
    post[p]='\0';
  }

int isEmpty()
  {
    if(x.top==-1)
      return(1);
    else
      return(0);
  }

void push(char ch)
  {
    x.top++;
    x.s[x.top]=ch;
  }

char pop()
  {
    char ch;
    ch=x.s[x.top];
    x.top--;
    return(ch);
  }

char top_of_stack()
  {
    return(x.s[x.top]);
  }

int pred(char ch)
  {
    if((ch=='$')||(ch=='^'))
      return (3);
    else if((ch=='*')||(ch=='/'))
      return (2);
    else if((ch=='+')||(ch=='-'))
      return (1);
  }
