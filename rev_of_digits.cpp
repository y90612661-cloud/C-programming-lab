//wap to reverse the digits of a whole number
#include<stdio.h>
int main()
{
	int n,d;
	int rev=0;
	printf("enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
		d=n%10;
		rev=(rev*10)+d;
		n/=10;
	}
	printf("\n reverse= %d",rev);
}
