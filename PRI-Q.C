#include<stdio.h>
#include<conio.h>
#include<math.h>

struct pqueue
  {
    int pq[3][5];
    int f[3],r[3];
  };
  
  
int qfull(struct pqueue,int);
int qempty(struct pqueue);
void insert(struct pqueue *,int,int);
int delete(struct pqueue *);
void display(struct pqueue);

void main()
  {
    struct pqueue x;
    int ch,d,p,i;
    for(i=0;i<2;i++)
      {
	x.f[i]=x.r[i]=0;
	do
	  {
	    printf("1 insert\n2 delete\n3 display\n4 exit\nenter your choice\n");
	    scanf("%d",&ch);
	    switch(ch)
	      {
		case 1 : printf("enter priority number & data\n");
			 scanf("%d%d",&p,&d);
			 if(qfull(x,p))
			   {
			     printf("pqueue overflow\n");
			   }
			 else
			   {
			     insert(&x,d,p);
			   }
			 break;
		case 2 : if(qempty(x))
			   {
			     printf("pqueue underflow\n");
			   }
			 else
			   {
			     d=delete(&x);
			     printf("deleted element = %d\n",d);
			   }
			 break;
		case 3 : display(x);
			 break;
		case 4 : exit(0);
		default : printf("invalid choice\n");
			  break;
	      }
	  }while(ch!=4);
      }
  }
int qfull(struct pqueue t,int p)
  {
    if(t.r[p]==5)
      return(1);
    else
      return(0);
  }
int qempty(struct pqueue t)
  {
    int i;
    for(i=0;i<=2;i++)
      {
	if(t.f[i]!=t.r[i])
	  return(0);
      }
    return(1);
  }
int delete(struct pqueue *t)
  {
     int i,d;
     for(i=0;i<=2;i++)

       {
	 if(t->f[i]!=t->r[i])
	   {
	     d=t->pq[i][t->f[i]];
	     t->f[i]++;
	     return(d);
	   }
       }
  }
void insert(struct pqueue *t,int d,int p)
  {
    t->pq[p][t->r[p]]=d;
    t->r[p]++;
  }
void display(struct pqueue t)
  {
    int i,j;
    for(i=0;i<=2;i++)
      {
	printf("elements of row %d\n",i);
	for(j=t.f[i];j<t.r[i];j++)
	  printf("%d",t.pq[i][j]);
      }
  }
