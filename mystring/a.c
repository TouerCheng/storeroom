#include <stdio.h>
#include <string.h>
#include "strin.h"
int main()
{
	char a[10]="123";
	char b[12]="abcd";
	char *c=strin(a,b,2);
	printf("%s\n",c);
}
