// 2. Write a program to print the sum of digits of the number provided by user.

#include <stdio.h>
int main(){
	int num;
	int r;
	int sum = 0;
	printf("Enter a number: ");
	scanf("%d", &num);

	while (num != 0) {
	    r = num %10;
		sum = sum + r;
		num = num / 10;
	}
	printf(" %d ", sum);
	return 0;
}

