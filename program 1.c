#include<stdio.h>
int main()
{
	int x,y,z,p,balance,a,b,c,d;
	printf("\nenter no of 2000rs notes=");
	scanf("%d",&x);
	a=x*2000;
	printf("\nenter no of 500rs notes=");
	scanf("%d",&y);
	b=y*500;
	printf("\nenter no of 200rs notes=");
	scanf("%d",&z);
	c=z*200;
	printf("\nenter no of 100rs notes=");
	scanf("%d",&p);
	d=p*100;
	balance=(a+b+c+d);
	printf("\n total balance=%d",balance);
	return 0;	
}

