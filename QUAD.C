#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
  {
    float a,b,c,d,r1,r2,img;
    int ch;
    clrscr();
    printf("enter the values of a,b,c\n");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(a==0)
      {
	printf("\nequatoin is linear\n");
	getch();
	exit(0);
      }
    else
      {
	if(d==0)
	  ch=1;
	else if(d>0)
	  ch=2;
	else
	  ch=3;
      }
    switch(ch)
      {
	case 1 : r1=(-b)/(2*a);
		 r2=(-b)/(2*a);
		 printf("\nreal & equal\n");
		 printf("\nroot 1 = %f\n\nroot 2 = %f\n",r1,r2);
		 break;
	case 2 : r1=(-b+sqrt(d))/(2*a);
		 r2=(-b-sqrt(d))/(2*a);
		 printf("\nreal & unequal\n");
		 printf("\nroot 1 = %f\n\nroot 2 = %f\n",r1,r2);
		 break;
	case 3 : img=(sqrt(-d))/(2*a);
		 r1=-b/(2*a);
		 r2=-b/(2*a);
		 printf("\nroots are imaginary\n");
		 printf("\nroot 1 = %f + i %f\n",r1,img);
		 printf("\nroot 2 = %f + i %f\n",r2,img);
		 break;
       default : printf("\ninvalid roots\n");
      }
    getch();
  }