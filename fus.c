//copying the content of one string to another using pointer
#include<stdio.h>
int main()
{
	char *s="hellosir";
	printf("string s:%s\n",s);
	char *p;
	printf("copying the content of s into p...\n");
	p=s;
	printf("string p:%s\n",p);
	return 0;
}
