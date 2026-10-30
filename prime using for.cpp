//wcp ton check a number is prime or not using using while nd for loop
#include <stdio.h>
int main(){
	int n,c=0,i;
	printf("enter a number \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	if(n%i==0)
	c++;}
	if(c==2)
	printf("it's a prime number");
	else
	printf("it's not a prime number");
	return 0;
}
