#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include "AllFiles.h"
int main(){
	int choice;
	do{
		printf("Enter 1 to check primality : \n");
		printf("Enter 2 to Armstrong : \n");
		printf("Enter 3 to check Larger : \n");
		printf("Enter 4 to Exit : \n\n\n\n");

		scanf("%d",&choice);
		switch(choice){
			case 1:
				if(!CheckPrimality())
					printf("Checked\n");
				break;
			case 2:
				if(!checkArmstrong())
					printf("checked\n");
				break;
			case 3:
				if(!checkLarger())
					printf("checked\n");
				break;
			case 4:
				return 0;
			default :
				printf("Wrong Input \n");
				break;
		}
	}while(1);
}
