
#include<stdio.h>
int main(){
	int i,arr[3],sum;
	for(i=0;i<3;i++){
		printf("Enter element %d ",i);
		scanf("%d",&arr[i]);
		
	}
	sum =arr[0]+arr[1]+arr[2];
	printf("Sum of elements of number in the array are %d",sum);
}
