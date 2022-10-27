#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number, i, product;
	printf("Enter a number ");
	scanf("%d", &number);
	for(i=1;i<=10;i++){
		product = i * number;
		printf("%d x %d = %d \n", i, number, product);
	}
	return EXIT_SUCCESS;
}
