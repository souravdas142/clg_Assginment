#include<stdio.h>
#include<stdlib.h>
int main(){

	FILE *fp1=NULL;
	while(!fp1){
		fp1=fopen("hello.txt","w");
	}
	
	fprintf(fp1,"hello sourav");
	fclose(fp1);
	fp1=fopen("hello.txt","r");
	char str[20];
	fscanf(fp1,"%s",str);
	printf("%s\n",str);
	return 0;
}
