#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
  {
    float x=2.5,*y=&x;
    printf("%f\n%d\n%f\n%d\n",x,sizeof(x),*y,sizeof(y));
    getch();
  }
