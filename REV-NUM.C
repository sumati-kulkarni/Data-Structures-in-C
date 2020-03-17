//program to reverse the given integer number & check whether it is a palindrome or not
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
  {
    int n,digit,rev=0,num;
    clrscr();
    printf("enter the number to be checked\n");
    scanf("%d",&num);
    n=num;
    while(num!=0)
      {
	digit=num%10;
	rev=rev*10+digit;
	num=num/10;
      }
    printf("the reversed number is\n");
    printf("%d\n",rev);
    if(n==rev)
      {
	printf("the number is palindrome\n");
      }
    else
      {
	printf("the number is not a palindrome\n");
      }
    getch();
  }
