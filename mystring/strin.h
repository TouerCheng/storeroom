//在a字符串的第x位置后面插入b字符串，申请内存返回新的字符串地址
#include <string.h>
#include <stdlib.h>
char *strin(char *a,char *b,int x)
{
	int i,j,k;
	int l,m,n;
	m=(int)strlen(a);
	n=(int)strlen(b);

	if (x>m || x<0)
	{
		printf("strin链接位置大于数组长度或者小于0\n");
		exit(1);
	}

			
	l=m+n+1;
	char *c=(char *)calloc(sizeof(char),l);
	
	for(i=0,j=0,k=0;i<x;i++,k++)
	{
		c[j++]=a[i];
	}
	for(i=0;i<n;i++)
	{
		c[j++]=b[i];
	}
	while(k<m)
	{
		c[j++]=a[k++];
	}
	c[j]='\0';
	return c;
}
