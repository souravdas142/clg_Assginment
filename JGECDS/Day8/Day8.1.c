#include<stdio.h>
#include<stdlib.h>

struct DNode{
	int info;
	struct DNode* pre;
	struct DNode* nxt;
}*end=NULL;

struct DNode* create(){
	struct DNode* Root=NULL;
	int x;
	while(!Root){
		Root=(struct DNode*)(malloc(sizeof(struct DNode)));
	}
	Root->pre=NULL;
	Root->nxt=NULL;
	printf("\nNew Item : ");
	scanf("%d",&x);
	Root->info=x;
	return Root;
}

void makeLink(){
	struct DNode* tmp=create();
	end->nxt=tmp;
	tmp->pre=end;
	end=tmp;
}

void print(struct DNode* Root){


	while(Root){
		printf("%d \t",Root->info);
		Root=Root->nxt;
	}
}
void RecurseDisp(struct DNode* Root){
	if(!Root)
		return;
	printf("%d\t",Root->info);
	RecurseDisp(Root->nxt);
}

struct DNode* search(struct DNode* Root){
	int x;
	printf("\nEnter a number to be search : ");
	scanf("%d",&x);
	do{
		if(Root->info==x){
			printf("\n%d is exist\n",x);
			break;
		}
		Root=Root->nxt;
		if(!Root){
			printf("\n%d doesn't exitxt\n",x);
			break;
		}
	}while(Root);
	return Root;;
}

void insert(struct DNode* Root){
	struct DNode* tmp=create(),*tmp2=NULL;
	printf("\nAfter which you want to instert : ");
	if((tmp2=search(Root))){
	if(!(tmp->nxt=tmp2->nxt))
		end=tmp;
	tmp->pre=tmp2;
	tmp2->nxt=tmp;
	}
	else
		printf("\nIllegal Insertion doesn't allow\n");
}

struct DNode* delete(struct DNode* Root){
	printf("\nEnter element to be deleted\n");
	struct DNode* check=NULL;
	check=search(Root);

	if(!check)
		return Root;
	if(check==Root){
		if(check->pre==NULL && check->nxt==NULL){
			free(check);
			return (Root=NULL);
		}
		(check->nxt)->pre=NULL;
		Root=check->nxt;
		free(check);
		return Root;
	}
	if(check){ //for all
		(check->pre)->nxt=check->nxt;
		if(check==end)
			end=check->pre;
		else
			(check->nxt)->pre=check->pre;

		free(check);
	} 
	else
		printf("\nIllegal delete\n");
	return Root;
}

void reversePrint(){
	struct DNode* Root=end;
	printf("\n");
	while(Root){
		printf("%d\t",Root->info);
		Root=Root->pre;
	}
	printf("\n");
}

struct DNode* reverse(struct DNode* Root){
	struct DNode* tmp=Root,*tmp2;
	tmp2=end;
	end=Root;


	while(Root){
		tmp=Root->nxt;
		Root->nxt=Root->pre;
		Root->pre=tmp;
		Root=tmp;
	}
	return tmp2;
}

int main(){
	struct DNode* Root=NULL;
	int choose;
	do{
		printf("\n--------------------\n");
		printf("\n 1. Create\n 2. Display \n 3. RicurseDisp \n 4. Search \n 5. Insert \n 6. delete \n 7. ReversePrint\n 8. Reverse \n");
		printf("Enter a number : ");
		scanf("%d",&choose);
		if(!Root && choose>1){
			printf("Press initially 1 to initiate \n");
			continue;
		}

		switch(choose){
			case 1:
				if(!Root){
					Root=create();
					end=Root;
					break;
				}
				makeLink();
				break;
			case 2:
				print(Root);
				break;
			case 3:
				RecurseDisp(Root);
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
				reversePrint();
				break;
			case 8:
				Root=reverse(Root);
				break;
			default:
				printf("\nEnter a valid key\n");
		}
	}while(1);

	
	return 0;
}
