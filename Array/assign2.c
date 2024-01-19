#include<stdio.h>


int main(){
	int i,n;
	int arr[n];
	
	printf("Enter the size of array ");
	scanf("%d",&n);
	for(n=0;n<3;n++){
		printf("Enter element %d ",n);
		scanf("%d",&arr[n]);
}
	
	

	printf("The element of array are \n");
	printf("%d\n",arr[n]);
	
	for(n=2;n>-1;n--){
		printf("Elements is reverse are %d\n",arr[n]);
	}
}
