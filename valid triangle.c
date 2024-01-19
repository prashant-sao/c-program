#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter first side of triangle ");
	scanf("%d",&a);
	printf("Enter second side of triangle ");
	scanf("%d",&b);	
	printf("Enter third side of triangle ");
	scanf("%d",&c);
	if(a+b>c&&b+c>a&&c+a>b){
		printf("The following triangle is a valid triangle");
	}
	else {
		printf("The triangle is not a valid triangle");
	}
}
