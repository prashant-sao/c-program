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
	for(i=0;i<n;i++)
	{
		if(arr1[i]%2==0){
			printf("Even numbers are %d \n",arr1[i]);
		}
		else{
			printf("Odd numbers are %d \n",arr1[i]);
		}
	}
}
	
	
