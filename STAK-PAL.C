#include<stdio.h>
#include<conio.h>
#include<math.h>
int is_palindrome(char []);
void main()
  {
    char str[20];
    clrscr();
    printf("enter the string to check for palindrome\n");
    scanf("%s",str);
    if(is_palindrome(str))
      {
	printf("it is palindrome\n");
      }
    else
      {
	printf("it is not a palindrome\n");
      }
    getch();
  }
int is_palindrome(char str[])
  {
    int i;
    int top=-1;
    char s[30],item;
    for(i=0;i<strlen(str);i++)
      {
	s[++top]=str[i];
      }
    for(i=0;i<strlen(str);i++)
      {
	item=s[top--];
	if(str[i]!=item)
	  {
	    return (0);
	  }
      }
    return (1);
  }

