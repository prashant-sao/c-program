#include<stdio.h>
int main()
{
	int a;
	printf("Enter the temprature of weather ");
	scanf("%d",&a);
	if(a<0){
		printf("ferzing weather");
	}
	else if(0<=a&&a>10){
		printf("very cold weather ");
	}
	else if(0<a&&a>10){
		printf("very cold weather ");
	}else if(10<=a&&a>20){
		printf(" cold weather ");
	}
	else if(20<=a&&a>30){
		printf("normal weather ");
	}
	else if(30<=a && a>40){
		printf("hot weather ");
	}
	else {
		printf("very hot weather");
	}
}
