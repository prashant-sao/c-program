#include<stdio.h>

int factorial(int x){
	if(x==0||x==1){
		return x;
	}
	else return x*factorial(x-1);
}
int main(){
	int n;
	printf("enter value of n ");
	scanf("%d",&n);
	printf("factorial of %d is %d",n,factorial(n));
	
}
