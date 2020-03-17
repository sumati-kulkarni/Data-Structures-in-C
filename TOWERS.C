#include<stdio.h>
#include<conio.h>
#include<math.h>
void move_disk(int,char,char,char);
void main()
  {
    int n;
    clrscr();
    printf("enter the number of disks\n");
    scanf("%d",&n);
    move_disk(n,'s','d','t');
    getch();
  }
void move_disk(int n,char source,char destination,char temp)
  {
    if(n>0)
      {
	move_disk(n-1,source,temp,destination);
	printf("move disk %d from %c to %c\n",n,source,destination);
	move_disk(n-1,temp,destination,source);
      }
  }

