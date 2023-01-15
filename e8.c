#include<stdio.h>
#include<math.h>

//program to find maximum of three numbers
int main(){
    int a,b,c;
    printf("Enter a = \n Enter b = \n Enter c= \n");
    scanf("%d%d%d",&a,&b,&c);
    (a>b)&&(a>c)?printf("a is greatest"):(b>a)&&(b>c)?printf("b is greatest"):printf("c is greatest");
 



}

