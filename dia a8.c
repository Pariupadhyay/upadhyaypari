//to check the sum of diagonal and antidiagonal is same or not
#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum=0,f=0;
	printf("enter value in array:\n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++){
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<3;i++)
	for(j=0;j<3;j++){
		if(i==j)
		sum=sum+a[i][j];
		if(i+j==2)//if there in n then it will n-1
		f=f+a[i][j];
	}
	if(f==sum)
	printf("both are same");
	else
	printf("not same");
	return 0;
}
