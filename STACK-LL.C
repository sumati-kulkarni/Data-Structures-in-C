#include<stdio.h>
#include<conio.h>
#include<math.h>
struct stud
  {
    int rno;
    struct stud *next;
  };
void main()
  {
    struct stud *p,*t;
    char ch;
    t=p=NULL;
    clrscr();
    do
      {
	t=p;
	p=(struct stud *)malloc(sizeof(struct stud));
	printf("enter the roll number\n");
	scanf("%d",&p->rno);
	p->next=t;
	printf("do you want to continue (y/n)?\n");
	ch=getche();
      }while(ch=='y');
    printf("the contents of linked list are\n");
    while(p!=NULL)
      {
	printf("%d\n",p->rno);
	p=p->next;
      }
    getch();
  }