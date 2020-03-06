#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 50 

void print (char *arr){
	printf("%s\n",arr);
}

void swap(char* ch1,char* ch2){
	char temp;
	temp=*ch1;
	*ch1=*ch2;
	*ch2=temp;
}


void makePermute(char* arr){
	for(int i=0;arr[i]!='\n';i++){
		for(int j=0;arr[j]!='\n';j++){
			if(j==i)
				continue;
			swap(arr+i,arr+j);
			print(arr);
			swap(arr+i,arr+j);
		}
	}
}

int main(){
	char arr[SIZE];
	scanf("%[^'\n']",arr);
	print(arr);
	makePermute(arr);
	return 0;
}
