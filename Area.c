#include<stdio.h>

int main()
{
	int lenght, breadth, area;
	printf("Lenght of rectangle is ");
	scanf("%d",&lenght);
	printf("Breadth of rectangle is ");
	scanf("%d",&breadth);
	area = lenght * breadth ;
	printf("Area of rectangle is %d\n",area);
	char stars;
	int i;
	for(i=1; i<=5 ; i++)
	{
	stars = '*' ;
	printf("%c\n",stars);
	}
	


	int j;
	for(j=1;j<= 10;j++){
		printf("%d\n",j*j);
		printf("%d\n",j*j*j);
	
}
	float a, b ;
	printf("enter firts number ");
	scanf("%.1f",&a);
	printf("enter scond number ");
	scanf("%.2f",&b);
	printf("sum of a and b is ");
	printf("%.1f\n",a+b);
	printf("product of a and b is ");
	printf(".2%f\n",a*b);
	printf("divison of a and b is ");
	printf("%.2f",a/b);
	
}

