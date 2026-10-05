//wap to count the digits of a whole number
#include<stdio.h>
int main()
{
	int n;
	int count=0;
	printf("enter the number");
	scanf("%d",&n);
	while(n>0)
	{
		count++;
		n/=10;
	}
	printf("\n count of digits= %d",count);
}
