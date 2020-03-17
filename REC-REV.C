#include<stdio.h>
#include<conio.h>
#include<math.h>
void reverse(int);
void main()
  {
    int num,res;
    clrscr();
    printf("enter the number\n");
    scanf("%d",&num);
    printf("reversed number is\n");
    reverse(num);
    getch();
  }

void reverse(int num)
  {
    printf("%d",num%10);
    if((num/10)==0)
      return;
    reverse(num/10);
  }