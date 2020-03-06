#include <stdio.h>
#include <string.h>
/* Function to swap values at two pointers */
int total=0;
void swap (char *x, char *y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

/*  End of swap()  */
/*  Function to print permutations of string  */
void combination(char *a, int i, int n )

{
	int j;
	if (i == n){
		++total;
		printf("%s\n", a);
	}
	else {
		for (j = i; j <= n; j++)
		{
			swap((a + i), (a + j));
			combination(a, i + 1, n);								
			swap((a + i), (a + j)); //backtrack
		}
	}
}

/*  The main() begins  */

int main()

{

	 char a[20];
	 int n;
	 printf("Enter a string: ");
	 scanf("%s", a);
	 n = strlen(a);
	 printf("combinations:\n");
	 combination(a, 0, n - 1);
	 printf("\n%d\n",total);
	 return 0;

}
