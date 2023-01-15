//to add 2 arrays
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],i,c[3][3],j;
	printf("enter value in a array:\n");
	for(i=0;i<3;i++){
	for(j=0;j<3;j++)
	{ scanf("%d",&a[i][j]);
	}
	printf("\n");
	} printf("enter value in b array:\n");
	for(i=0;i<3;i++){
	for(j=0;j<3;j++)
    scanf("%d",&b[3][3]);}
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
	c[i][j]=a[i][j]+b[i][j];
	printf("%d ",c[i][j]);
	}
	printf("\n");
}
return 0;
}
