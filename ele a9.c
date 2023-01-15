//to print any element of a array
#include<stdio.h>
int main()
{
	int a[10],pos,i,n;
	printf("enter n:");
	scanf("%d",&n);
	printf("enter in array:");
	for(i=0;i<n;i++)
	scanf("%d\n",a[i]);
	printf("enter pos:");
	scanf("%d\n",&pos);
	if(pos<=10)
	{printf("%d element",a[pos]);
	}
	else
	printf("out of range");
	return 0;
}
