#include<stdio.h>
int main(){
	int arr[3]={1,5,1},count;
	count =0 ;
	if(arr[0]==arr[1]){
		count=count+1;
	}
	else if(arr[1]==arr[2]){
		count=count+1;
	}
	else if(arr[0]==arr[2]){
		count=count+1;
	}
	else{
		printf("no duplicate elements ");
	}
	printf("Number of duplicate element = %d",count);
}
