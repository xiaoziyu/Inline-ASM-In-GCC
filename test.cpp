/*
 *  This is sample about how to use extended inline asm by using AT&T grammar.
 *  And the function below is simple. 
 *  It change the value of variable v from 0 to 1;
 */



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
