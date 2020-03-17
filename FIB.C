#include<stdio.h>
#include<conio.h>
void main()
  {
    int f0,f1,f2,n,i;
    clrscr();
    printf("entr the value till where the fibonacci series are needed\n");
    scanf("%d",&n);
    f0=0;
    f1=1;
    printf("fibonacci numbers are:\n");
    printf("%d\n%d\n",f0,f1);
    f2=f0+f1;
    for(i=3;i<=n;i++)
      {
	printf("%d\n",f2);
	f0=f1;
	f1=f2;
	f2=f0+f1;
      }
    getch();
  }