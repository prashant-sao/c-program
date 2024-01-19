#include<stdio.h>
int main()

{int a;
	printf("Enter a year ");
	scanf("%d",&a);
	if(a%4==0){
		printf("The year is a leap year \n");
		
	}
	else{
		printf("The year is not a leap year ");
	}
}
