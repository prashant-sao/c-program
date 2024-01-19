#include<stdio.h>

int factorial(int x){
	int fact = 1;
	int i;
	for(i =2;i<=x;i++){
		fact = fact*i;	
	}
	return fact;
}
int main(){
	int n,r;
	printf("enter value of n ");
	scanf("%d",&n);
	printf("enter value of r ");
	scanf("%d",&r);
	int npr;
	npr = factorial(n)/(factorial(r)*factorial(n-r));
	printf("%d",npr);
}
