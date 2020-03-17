#include<stdio.h>
#include<conio.h>

void main()
  {
    char str1[20],str2[20];
    clrscr();
    printf("enter the string to check for palindrome\n");
    scanf("%s",&str1);
    strcpy(str2,str1);
    strrev(str2);
    if(strcmp(str2,str1)==0)
      {
	printf("%s is palindrome\n",str1);
      }
    else
      {
	printf("%s is not a palindrome\n",str1);
      }
    getch();
  }