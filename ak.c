//sum of two numbers using functio
#include<stdio.h>
sum(int a,int b);
int main()
{
	int a,b;
	printf("enter the first no.:");
	scanf("%d",&a);
	printf("enter the second no.:");
	scanf("%d",&b);
	int s=sum(a,b);
	printf("sum of two numbers is:%d",s);
	return 0;
}

int sum(int x,int y){
	return x+y;
}
