#include<stdio.h>
int main()
{
	int a,b;
	printf("\n Enter two numbers:");
	scanf("%d%d",&a,&b);
	if(a>b)
	printf("a is greater");
	else if(a<b)
	printf("b is greater");
	else
	printf("both are equal ");
}
