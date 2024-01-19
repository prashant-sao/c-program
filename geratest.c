#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enetr first number ");
	scanf("%d",&a);
	printf("Enetr second number ");
	scanf("%d",&b);
	printf("Enetr third number ");
	scanf("%d",&c);
	
	if(a>b>c){
		printf("First number %d is greatest ",a);
	}
	else if (a>c>b){
		printf("First number %d is greatest ",a);
	}
	else if (b>c>a){
		printf("Second number %d is greatest ",b);
	
	}
	else if(b>a>c){
		printf("Second number %d is greatest ",b);
	}
	else if(c>a>b){
		printf("Third number %d is greatest ",c);
	}
	else {
		printf("Thrid number %d is greatest ",c);
	}
}

