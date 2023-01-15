#include<stdio.h>
//counting the no. of vowels in a string
int main()
{
	char a[]={"hello"};
	int i=0,count=0;
	while(i<5)
	{ if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
	{ count++;
	}
	i++;
	}
	printf("the no.of vowels are:%d",count);
	return 0;
}
