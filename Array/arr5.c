#include<stdio.h>
int main(){
	int arr1[3],i,arr2[3];
	for(i=0;i<3;i++){
		printf("Enter element %d ",i);
		scanf("%d",&arr1[i]);
		
	}
	printf("Elements of array1 are %d \n",arr1);
	arr2 = arr1;
	printf("Elements of array1 are %d \n",arr2);
}
