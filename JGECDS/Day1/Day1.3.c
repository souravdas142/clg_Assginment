#include<stdio.h>
#include<stdlib.h>

int main(){
	int arr[]={5,10,32,44,64,56,19,66};
	int length=(int)(sizeof(arr)/arr[0]);
	for(int i=0;i<length;i++)
		printf("%d\t",arr[i]);
	int n;
	printf("\n\n Enter a number to search : ");
	scanf("%d",&n);
	for(int i=0;i<length;i++){
		if(n==arr[i]){
			printf("%d is found at %d position\n",n,i+1);
			exit(0);
		}
	}
	printf("%d is not in the list\n",n);
		
	return 0;
}
