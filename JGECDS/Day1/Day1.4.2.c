#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 50 
int tot=0;

void print (char *arr){
	printf("%s\n",arr);
}

void swap(char* ch1,char* ch2){
	char temp=*ch1;
	*ch1=*ch2;
	*ch2=temp;
}


void makePermute(char* arr){
	for(int i=0;arr[i]!='\0';i++){
		for(int j=0;arr[j]!='\0';j++){
			if(j==i)
				continue;
			swap(arr+j,arr+i);
			print(arr);
			++tot;
//			swap(arr+j,arr+i);
		}
	}
}

int main(){
	char arr[SIZE];
	scanf("%s",arr);
	print(arr);
	int len=strlen(arr);
	printf("\n-----------------------------------\n");
	makePermute(arr);
	printf("\n Total  %d! = %d\n",len,tot);
	return 0;
}
