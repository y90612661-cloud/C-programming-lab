/* wap to display the odd numbers from 1-n*/
#include <stdio.h>
int main()
{
	int n;
	int i=1;
	printf("Enter n:");
	scanf("%d",&n);
    while(i<=n)
    {
	if(i%2!=0)
	printf("\n %d",i);
	i++;
    }
	return 0;
}