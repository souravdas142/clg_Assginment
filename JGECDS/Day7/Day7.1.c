#include<stdio.h>
#include<stdlib.h>
struct Node{
	int info;
	struct Node* Addr;
};

struct Node* createNode(){
	struct Node* ret=((struct Node*)malloc(sizeof(struct Node)));
	int x;
	printf("Enter a number : ");
	scanf("%d",&x);
	ret->info=x;
	return ret;
}

void makeLink(struct Node* Root){
	struct Node* check=Root,*temp=check;
	while(check){
		temp=check;
		check=check->Addr;
	}
	temp->Addr=createNode();
}

void printLink(struct Node* Root){
	struct Node* check=Root;
	while(check){
		printf("%d\t",check->info);
		check=check->Addr;
	}
}

void recurseDisp(struct Node* root){
	struct Node* check=root;
	if(check==NULL)
		return;
	printf("%d \t",check->info);
	recurseDisp((check=check->Addr));
}


void reversePrint(struct Node* root){
	struct Node* check=root;
	if(check==NULL)
		return;
	reversePrint((check=check->Addr));
	printf("%d \t",root->info);
}


struct Node* search(struct Node* Root){
	struct Node* check=Root;
	int key;
	printf("Enter a number to be searched : ");
	scanf("%d",&key);
	while(check){
		if(check->info==key){
			printf("\nkey found");
			break;
		}
		check=check->Addr;
	}
	if(!check)
		printf("\n key not found");
	return check;
}

void insert(struct Node* Root){
	struct Node* temp=createNode(),*check=NULL;
	check=search(Root);
	temp->Addr=check->Addr;
	check->Addr=temp;
}
	
struct Node* delete(struct Node* Root){
	
	struct Node* check=Root,*temp=NULL;
	int key;
	printf("Enter a number to be searched : ");
	scanf("%d",&key);
	while(check){
		if(check->info==key){
			break;
		}
		temp=check;
		check=check->Addr;
	}
	if(temp)
		temp->Addr=check->Addr;
	if(!temp)
		Root=check->Addr;
	return Root;
}

void _fflush(){
	int ch;
	do{
		ch=getchar();
	}while(ch!='\n' && ch!=EOF);
}

struct Node* reverse(struct Node* Root);
int main(){
	struct Node* Root=NULL;
	int ch;
	do{
		printf("\n-----------------------------------\n");
		printf("Enter 1 to creation : \n");
		printf("Enter 2 to Display : \n");
		printf("Enter 3 to Display Recursively : \n");
		printf("Enter 4 to search a number : \n");
		printf("Enter 5 to Insert a number : \n");
		printf("Enter 6 to Delete a number : \n");
		printf("Enter 7 to Reverse Print : \n");
		printf("Enter 8 to Reverse List : \n");
		printf("\n-----------------------------------");
		printf("\nEnter a valid key : ");
		scanf("%d",&ch);
		if(!Root && ch>1){
			printf("\nplease Create first\n");
			continue;
		}
		switch(ch){
			case 1:
				if(!Root){
					Root=createNode();
					break;
				}
				makeLink(Root);
				break;
			case 2:
				printLink(Root);
				printf("\n");
				break;
			case 3:
				recurseDisp(Root);
				break;
			case 4:
				search(Root);
				break;
			case 5:
				insert(Root);
				break;
			case 6:
				Root=delete(Root);
				break;
			case 7:
				reversePrint(Root);
				break;
			case 8:
				Root=reverse(Root);
				break;
			default:
				printf("\nEnter 1 valid key 8 to h");
		}
	}while(1);

	return 0;
}


struct Node* reverse(struct Node* Root){
	struct Node *pre=NULL, *curr=Root, *next=NULL;
	do{

		next=curr->Addr;
		curr->Addr=pre;
		pre=curr;
		curr=next;
	}while(curr);
	Root=pre;
	return Root;
}
