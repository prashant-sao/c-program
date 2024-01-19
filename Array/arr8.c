#include<stdio.h>
#include<string.h>
int main(){
	int n, arr1[n];
	int i;
	printf("Enter size of array ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter elemnt %d ",i);
		scanf("%d",&arr1[i]);
	}
	if(arr1[0]>arr1[1] >arr1[2]){
		printf("Greatest number is %d \n",arr1[0]);
		printf("Smallest number is %d \n",arr1[2]);
		}
		else if(arr1[1]>arr1[2] >arr1[0]){
			printf("Greatest number is %d \n",arr1[1]);
			printf("Smallest number is %d \n",arr1[0]);
			}
		else if(arr1[2]>arr1[0] >arr1[1]){
			printf("Greatest number is %d \n",arr1[2]);
			printf("Smallest number is %d \n",arr1[1]);
			}
		else if(arr1[2]>arr1[1] >arr1[0]){
			printf("Greatest number is %d \n",arr1[2]);
			printf("Smallest number is %d \n",arr1[0]);
			}
		else if(arr1[1]>arr1[0] >arr1[2]){
			printf("Greatest number is %d \n",arr1[1]);
			printf("Smallest number is %d \n",arr1[2]);
			}
		else if(arr1[0]>arr1[2] >arr1[1]){
			printf("Greatest number is %d \n",arr1[0]);
			printf("Smallest number is %d \n",arr1[1]);
			}
			else {
				printf("Two numbers are equal ");
			}
			printf("%d",arr1[1]);
	
}

