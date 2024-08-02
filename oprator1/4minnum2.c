#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d;
	printf("enter the value of a,b,c,d : \n");
	scanf("%d%d%d%d",&a,&b,&c,&d);

	(a<b)?(a<c)?(a<d)? printf("a is min"):printf("c is min"):printf("d is min"):
	(b<c)?(b<d)? printf("b is min"):printf("d is min"):
	(c<d)? printf("c is min"):printf("d is min");
}