#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<alloc.h>
struct stud *create();
void display(struct stud *);
struct stud *insert(struct stud *,int);
struct stud *delete(struct stud *,int);
struct stud *search(struct stud *,int);
struct stud
  {
    int rno;
    char na[15];
    struct stud *next;
  };
void main()
  {
    struct stud *first=NULL;
    int ch,pos,rno;
    clrscr();
    first=create();
    for(;;)
      {
	printf("\n1 insert\n2 delete\n3 search\n4 display\n5 exit\nenter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	  {
	    case 1 : printf("enter position\n");
		     scanf("%d",&pos);
		     first=insert(first,pos);
		     break;
	    case 2 : printf("\nenter roll number\n");
		     scanf("%d",&rno);
		     first=delete(first,rno);
		     break;
	    case 3 : printf("enter roo number to search\n");
		     scanf("%d",&rno);
		     first=search(first,rno);
		     break;
	    case 4 : display(first);
		     break;
	    case 5 : exit(0);
	    default : printf("\ninvalid choice\n");
		      break;
	  }
      }
  }
struct stud *create()
  {
    struct stud *f,*t,*p;
    char ch;
    f=t=p=NULL;
    do
      {
	t=p;
	p=(struct stud *)malloc(sizeof(struct stud));
	printf("\nenter roll number & name\n");
	scanf("%d%s",&p->rno,p->na);
	if(f==NULL)
	  {
	    f=p;
	  }
	else
	  {
	    t->next=p;
	  }
	printf("\nany more records\n");
	ch=getche();
      }while(ch=='y');
    p->next=NULL;
    return(f);
  }
void display(struct stud *p)
  {
    int i=0;
    clrscr();
    printf("\npos\trno\tname\n");
    while(p!=NULL)
      {
	i=i+1;
	printf("%d\t%d\t%s\n",i,p->rno,p->na);
	p=p->next;
      }
  }
struct stud *insert(struct stud *first,int pos)
  {
    struct stud *p,*t;
    int i=1;
    p=t=first;
    while((p!=NULL)&&(i<pos))
      {
	t=p;
	p=p->next;
	i++;
      }
    if(p==NULL)
      {
	printf("\nnode not found\n");
      }
    p=(struct stud *)malloc(sizeof(struct stud));
    printf("\nnter roll number & name\n");
    scanf("%d%s",&p->rno,p->na);
    if((pos==1)||(first==NULL))
      {
	p->next=first;
	first=p;
      }
    else
      {
	p->next=t->next;
	t->next=p;
      }
    return(first);
  }
struct stud *delete(struct stud *first,int rno)
  {
    struct stud *p,*t;
    p=t=first;
    while((p!=NULL)&&(rno!=p->rno))
      {
	t=p;
	p=p->next;
      }
    if(p==NULL)
      {
	printf("\nnode not found\n");
	return(first);
      }
    if(first==p)
      {
	first=first->next;
      }
    else
      {
	t->next=p->next;
      }
    free(p);
    return(first);
  }
struct stud *search(struct stud *first,int rno)
  {
    struct stud *p;
    int i=1;
    p=first;
    while((p!=NULL)&&(rno!=p->rno))
      {
	p=p->next;
	i=i+1;
      }
    if(p==NULL)
      {
	printf("node not found\n");
      }
    else
      {
	printf("record found\npos\trno\tname\n");
	printf("%d\t%d\t%s\n",i,rno,p->na);
      }
    return(first);
  }