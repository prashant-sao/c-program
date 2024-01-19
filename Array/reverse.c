#include<stdio.h>
void reverse(int arr[]){
	int n;
	int i=0,j= n-1;
	while(i<j){
		int temp = arr[i];
		arr[i]=arr[j];
		arr[j]= temp;
		i++;
		j--;
	}
	return ;
}
int main(){
	int i,n;
	int arr[i];
	printf("size of array is ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("element %d of array is ",i);
		scanf("%d",&arr[i]);
	}
	printf("element of array are ");
	for(i=0;i<n;i++){
	printf("%d  ",arr[i]);
	}
	printf("\n");
	printf("The elements in reverse are ");
	reverse(arr);
}
