#include<stdio.h>
#include<string.h>
#define SIZ 50

int SIZE=SIZ-5;
void print(int *arr){

	for(int i=0;i<SIZE;i++)
		printf("arr[%d] = %d\t",i,arr[i]);
}

void bSearch(int *arr){
	int lowerBound=0,uperBound=SIZE-1,mid=0,x;
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
}

void insert(int* arr){

	int n,x;
	printf("\nEnter a number to be inserted : ");
	scanf("%d",&x);
	printf("\nPosition number : ");
	scanf("%d",&n);
	if(!(n>=0 && n<=SIZE)){
		printf("Enter valid position %d to %d\n",0,SIZE);
		return;
	}


	//shift all elemnts right to its position

	int i;
	for(i=SIZE;i>n;i--)
		arr[i+1]=arr[i];
	arr[i+1]=arr[i];
	arr[i]=x;
	SIZE++;
	print(arr);


}

void delete(int *arr){

	int x,i;
	printf("\nEnter an element to be deleted : ");
	scanf("%d",&x);
	for(i=0;arr[i]!=x && i<=SIZE;i++);
	if(i==SIZE){
		printf("\nElement doesn't exist in list");
		return;
	}
	for(;i<SIZE;i++)
		arr[i]=arr[i+1];
	SIZE=SIZE-1; 
	print(arr);
}

int main(){

	int arr[SIZ],x;
	memset(arr,1.0/0.0,sizeof(arr));
	for(int i=0;i<SIZE;i++){
		arr[i]=(i+1)*(2+i);
		printf("arr[%d] = %d\t",i,arr[i]);
	}
	
	do{
		printf("\n-----------------------\n");
		printf("\n 1. Search \n");
		printf(" 2. Insert \n");
		printf(" 3. Delete \n");
		printf(" 4. Print  \n");
		printf(" Chose a Number : "); 
		scanf("%d",&x);
		switch(x){
			case 1:
				bSearch(arr);
				break;
			case 2:
				insert(arr); //insertion
				break;
			case 3:
				delete(arr);	
				break;
			case 4:
				printf("\n------------------------\n");
				print(arr);
				printf("\n------------------------\n");
				break;
			default :
				printf("Please Enter a valid Number \n");
				break;
		}
	}while(1);

	printf("\n");
	return 0;
}

