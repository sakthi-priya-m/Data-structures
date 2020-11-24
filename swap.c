#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter 2 nos\n");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Swapped values are %d and %d",a,b);
	return 0;
}
