#include<stdio.h>
#include<math.h>

{
	double d,e,f,x,p;
	d=3;
	e=4;
	f=5;
	x=(d+e+f)/2;
	p=sqrt(x*(x-d)*(x-e)*(x-f));
	printf("p=%f",p);
	return 0;
}