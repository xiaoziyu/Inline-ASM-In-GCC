#include<stdio.h>
using namespace std;

int main()
{
	int v = 0;
	__asm__
	(
		"mov $1,%%eax;"
		"movl %%eax,%0;"
		: "=m"(v)
	);	
	printf("%d\n",v);
	return 0;
}
