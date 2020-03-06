#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	int gen=0,temp;
	temp=n;
	while(temp){
		gen+=(pow(temp%10,3));
		temp/=10;
	}
		gen+=(pow(temp%10,3));
	
	if(gen==n){
		printf(" Number is ok");
	}
	else{
		printf("%d Number is not ok\n",gen);
	}
	return 0;
}
