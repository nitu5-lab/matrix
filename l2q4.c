//WAP to calculate compound interest

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float ci,p,r,n;
	printf("Enter principle, rate and time period ");
	scanf("%f %f %f",&p,&r,&n);
	ci=p*(pow(1+r/100,n)-1);
	printf("Compound interest is %f",ci);
	return 0;
	getch();
}
//wap to swap values without third variable

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b; 
	printf("Enter a and b ");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping\n: a=%d b=%d",a,b);
	return 0;
	getch();
}
