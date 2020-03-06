#include<stdio.h>
void generateFibnocii(){
	int n=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	int num=1,num2=1,gen=0;
	printf("%d\t",num);
	for(int i=1;i<=n;i++){
		gen+=num2;
		num2=num;
		num=gen;
		printf("%d\t",gen);
	}
}
	
	int main(){
		generateFibnocii();
		printf("\n");
		return 0;
	}
