#include <stdio.h>
int main()
 {
	int a,b;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	if(b<a)
	{
	printf("%d is largest",a);
	}
	else
	{
	printf("%d is largest",b);
	}
	return 0;
}
