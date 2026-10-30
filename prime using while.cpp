//wcp ton check a number is prime or not using using while nd for loop
#include <stdio.h>
int main(){
	int n,c=0,i=1;
	printf("enter a number \n");
	scanf("%d",&n);
	while(i<=n){
	if(n%i==0)
	c++;
	i++;}
	if(c==2)
	printf("it's a prime number");
	else
	printf("it's not a prime number");
	return 0;
}
