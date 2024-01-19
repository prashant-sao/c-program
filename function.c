#include <stdio.h>
#include <math.h>

/*void fact(int n)

int main();
{
	fact(10);
	return 0;
}

void fact(int n){
	int fact
	factNm1 = fact(n-1);
	fact = factNm1*n;
	printf("%d",fact);
}*/
int sum(int a , int b);

int main() 
{int a, b ;
 printf("enter a  fist number "); 
sacnf("%d",&a);
printf("enter second number ") ;
scanf("%d",&b);
int s =sum(a,b);
printf("sum is %d",s);
}

int sum(int a , int b)
{
	return a+b ;
}
