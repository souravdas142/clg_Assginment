#include<stdio.h>
int main(){

	char str[50],temp;
	printf("Enter a String : ");
	scanf("%[^'\n']",str);
	int length=0;
	for(int i=0;str[i]!='\0';i++)
		++length;

	for(int i=0,j=length-1;i<j;i++,j--){
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}

	printf("The length of the inputed string is %d\n",length);
	printf("%s\n",str);
	return 0;
}

		
