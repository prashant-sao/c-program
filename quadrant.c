#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the coordinates ");
	scanf("%d %d",&a,&b);
	if(a>0&&b>0){
		printf("First quadrant");
		}
		else if (a<0&&b>0){
			printf("second quardrant ");
		}
		else if (a<0&&b<0){
			printf("third quadrant");
		}
		else {
			printf("fourth quardrant ");
		}
	
}
