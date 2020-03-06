//gcc -Wall -Wextra -Werror -pedantic -g -std=c11 Day1.2.1.c -o Day1.2.1 -lm

int Check Primality(){
	int n;
	printf("Enter a number to check its primality : \n");
	scanf("%d",&n);
	int sqr=(int)(sqrt(n)+1);
	if(n%2==0){
		printf("primality check of %d is negetive\n",n);
		return 0;
	}
	if(n<9 && n>2){
		for(int i=2;i<n;i++){
			if(n%i==0){
				printf("primality check of %d is negetive\n",n);
				return 0;
			}
			else{
				printf("Primality check of %d is positive\n",n);
				return 0;
			}
		}
	}
	for(int i=3;i<sqr;i++){
		if(n%i==0){
			printf("primality check of %d is negetive\n",n);
			return 0;
		}
		else{
			printf("Primality check of %d is positive\n",n);
			return 0;
		}
	}

	return 0;
}
