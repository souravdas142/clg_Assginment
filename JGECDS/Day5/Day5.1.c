#include<stdio.h>
#include<string.h>
#define SIZE 50
int main(){

	int arr[SIZE];
	memset(arr,1.0/0.0,sizeof(arr));
	for(int i=0;i<SIZE-5;i++){
		arr[i]=(i+1)*(2+i);
		printf("arr[%d] = %d\t",i,arr[i]);
	}

// Binary Search

	int lowerBound=0,uperBound=SIZE-6,mid=0,x;
	printf("\n\nEnter a number to be searched : ");
	scanf("%d",&x);
	do{
		mid=(int)(lowerBound+uperBound)/2;
		if(arr[mid]==x){
			printf("\n\n%d found at postion number %d\n",x,mid+1);
			break;
		}
		else if(arr[mid]<x)
			lowerBound=mid+1;
		else
			uperBound=mid-1;
	}while(lowerBound<=uperBound);

// Binary Search

	int n;
	printf("\nEnter a number to be inserted : ");
	scanf("%d",&x);
	printf("\nPosition number : ");
	scanf("%d",&n);

	//shift all elemnts right to its position

	int i;
	for(i=SIZE-5;i>n-1;i--)
		arr[i+1]=arr[i];
	arr[i+1]=arr[i];
	arr[i]=x;
	for(i=0;i<SIZE-4;i++)
		printf("arr[%d] = %d\t",i,arr[i]);


	// shift all elemnts left that to be deleted
	
	printf("\nEnter an element to be deleted : ");
	scanf("%d",&x);
	for(i=0;arr[i]!=x && i<=SIZE;i++);
	if(i==SIZE){
		printf("\nElement doesn't exist in list");
		return 1;
	}
	for(;i<SIZE;i++)
		arr[i]=arr[i+1];

	for(i=0;i<SIZE-4;i++)
		printf("arr[%d] = %d\t",i,arr[i]);

	return 0;
}

