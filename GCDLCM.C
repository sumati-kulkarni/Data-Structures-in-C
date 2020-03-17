#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
  {
    int a,b,numr,den,rem,gcd,lcm;
    clrscr();
    printf("enter the values of a & b\n");
    scanf("%d%d",&a,&b);
    if(a>b)
      {
	numr=a;
	den=b;
      }
    else
      {
	numr=b;
	den=a;
      }
    rem=numr%den;
    while(rem!=0)
      {
	numr=den;
	den=rem;
	rem=numr%den;
      }
    gcd=den;
    lcm=(a*b)/gcd;
    printf("gcd of %d & %d is = %d\n",a,b,gcd);
    printf("lcm of %d & %d is = %d\n",a,b,lcm);
    getch();
  }
