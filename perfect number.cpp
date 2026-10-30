//wcp to check wether a number is perfect or not
#include <stdio.h>
int main(){
	int n,s=0;
	printf("enter a number");
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		s+=i;
	}
	if(s==n)
	printf("it's a perfect number");
	else
	printf("it's not a perfect number");
	return 0;
}
