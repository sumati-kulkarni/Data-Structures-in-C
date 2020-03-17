#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
  {
    int n,i,N,ff,f1,f2,F,big,l1,prev_cf,sumf=0;
    int l[30],u[30],f[30],cf[30];
    float h,x[30],fx[30],sumfx=0;
    float mean,median,mode,num,den;
    clrscr();
    printf("enter the number of observations\n");
    scanf("%d",&n);
    printf("enter the lower limits of %d observations\n",n);
    for(i=0;i<n;i++)
      {
	scanf("%d",&l[i]);
      }
    printf("enter the upper limits of %d observations\n",n);
    for(i=0;i<n;i++)
      {
	scanf("%d",&u[i]);
      }
    printf("enter %d frequencies\n",n);
    for(i=0;i<n;i++)
      {
	scanf("%d",&f[i]);
      }
    for(i=0;i<n;i++)
      {
	sumf+=f[i];
      }
    N=sumf;
    for(i=0;i<n;i++)
      {
	x[i]=(l[i]+u[i])/2.0;
	fx[i]=f[i]*x[i];
	sumfx+=fx[i];
      }
    mean=sumfx/N;
    big=f[0];
    for(i=1;i<n;i++)
      {
	if(big<f[i])
	  {
	    big=f[i];
	  }
      }
    cf[0]=f[0];
    for(i=1;i<n;i++)
      {
	cf[i]=cf[i-1]+f[i];
      }
    for(i=0;i<n;i++)
      {
	if(big==f[i])
	  {
	    F=f[i];
	    l1=l[i];
	    prev_cf=cf[i-1];
	  }
      }
    h=u[1]-l[1];
    num=((N/2)-prev_cf)*h;
    median=l1+(num/F);
    printf("------------------------------------------------------------\n");
    printf("CI\tf\tx\tfx\tcf\n");
    printf("------------------------------------------------------------\n");
    for(i=0;i<n;i++)
      {
	printf("%d-%d\t%d\t%0.2f\t%0.2f\t%d\n",l[i],u[i],f[i],x[i],fx[i],cf[i]);
      }
    printf("------------------------------------------------------------\n");
    printf("\tN=%d\t\t%0.2f\n",sumf,sumfx);
    printf("------------------------------------------------------------\n");
    printf("mean = %0.2f\n",mean);
    printf("median = %0.2f\n",median);
    big=f[0];
    for(i=1;i<n;i++)
      {
	if(big<f[i])
	  {
	    big=f[i];
	  }
      }
    for(i=0;i<n;i++)
      {
	if(big==f[i])
	  {
	    ff=f[i];
	    f1=f[i-1];
	    f2=f[i+1];
	    break;
	  }
      }
    num=(ff-f1)*h;
    den=(2*ff)-f1-f2;
    mode=l1+(num/den);
    printf("mode = %0.2f\n",mode);
    getch();
  }