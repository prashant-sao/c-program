#include<stdio.h>
#include<string.h>
int main(){
	int i,n,j,m;
	int arr1[n];
	int arr2[j];
	
	printf("Enter the size of array ");
	scanf("%d",&n);
	printf("Enter size of arr2 ");
	scanf("%d",&m);
	for(i=0;i<n;i++){
		printf("Enter element %d ",i);
		scanf("%d",&arr1[i]);
		}
		strcpy(arr2[j],arr1[n]);
		for(j=0;j<m;j++){
			printf("%d",arr2[j]);
		}
		
	for(i=0;i< n;i++){
	
	printf("%d",arr1[i]);
	}

}

