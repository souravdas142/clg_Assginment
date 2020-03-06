//gcc -Wall -Wextra -Werror -pedantic -g -std=c11 Day1.2.1.c -o Day1.2.1 -lm

int CheckPrimality(){
	int n,k;
	printf("Enter a number to check its primality : \n");
	scanf("%d",&k);
	n=abs(k);
	int sqr=(int)ceil(sqrt(n));
	if((n==2 || n==3) && n>1){
		printf("primality check of %d is positve\n",k);
		return 0;
	}

	if(n%2==0){
		printf("primality check of %d is negetive\n",k);
		return 0;
	}
	if(n<9 && n>2){
		for(int i=3;i<n;i=i+2){
			if(n%i==0){
				printf("primality check of %d is negetive\n",k);
				return 0;
			}
			else{
				printf("Primality check of %d is positive\n",k);
				return 0;
			}
		}
	}
	for(int i=3;i<sqr;i=i+2){
		if(n%i==0){
			printf("primality check of %d is negetive\n",k);
			return 0;
		}
		else{
			printf("Primality check of %d is positive\n",k);
			return 0;
		}
	}

	return 0;
}

int checkLarger(){
	int mid,left,right;
	printf("Enter 3 numbers consiqutively : ");
	scanf("%d%d%d",&left,&mid,&right);
	if(left>right && left > mid)
		printf("%d is greater \n",left);
	else if(right>mid && right > left)
		printf("%d is greater \n",right);
	else
		printf("%d is greater\n",mid);


	return 0;
}

		
int checkArmstrong(){
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	int gen=0,temp;
	temp=n;
	int digit=(int)log10(n)+1;
	while(temp){
		gen+=(pow(temp%10,digit));
		temp/=10;
	}
		gen+=(pow(temp%10,digit));
	
	if(gen==n){
		printf("%d is armstrong number",n);
	}
	else
		printf("%d Number is not armstrong\n",n);
	return 0;
}

