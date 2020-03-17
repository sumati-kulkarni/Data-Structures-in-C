#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>
void main()
  {
    FILE *ptr;
    struct stud
      {
	char na[10];
	int rno,m1,m2,total;
	float avg;
      };
    struct stud x[20];
    int n,i;
    clrscr();
    printf("enter the value of n\n");
    scanf("%d",&n);
    ptr=fopen("stud","w");
    for(i=0;i<n;i++)
      {
	printf("enter the roll number, name, marks1 & marks2\n");
	fscanf(stdin,"%d%s%d%d",&x[i].rno,x[i].na,&x[i].m1,&x[i].m2);
	fprintf(ptr,"%d\t%s\t%d\t%d\n",x[i].rno,x[i].na,x[i].m1,x[i].m2);
      }
    fclose(ptr);
    fprintf(stdout,"\n\n");
    ptr=fopen("stud","r");
    printf("\nrno\tname\tmarks1\tmarks2\ttotal\taverage\n");
    printf("---------------------------------------------------\n");
    for(i=0;i<n;i++)
      {
	fscanf(ptr,"%d%s%d%d",&x[i].rno,x[i].na,&x[i].m1,&x[i].m2);
	x[i].total=x[i].m1+x[i].m2;
	x[i].avg=(x[i].total)/(2.0);
	fprintf(stdout,"%d\t%s\t%d\t%d\t%d\t%f\n",x[i].rno,x[i].na,x[i].m1,x[i].m2,x[i].total,x[i].avg);
      }
    fclose(ptr);
    getch();
  }