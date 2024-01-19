#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *fptr;
char filename[] = "file.dat";
fptr = fopen("file.dat","w");
if (fptr == NULL){
	printf("error in file creation");
}
fprintf("file.dat","hello world");
fptr = fopen("file.dat","r");


}
