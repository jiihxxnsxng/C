#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	printf("Please enter a number:");
	scanf("%d", &n);

	int a = 0;
	for (int i = 1; i < n+1; i++) {

		if (n % i == 0) {
			a++;
		}

	}
	if (a == 2) {
		printf("It is a prime number.");
	}
	else {

		printf("It is not a prime number.");
	}
	return 0;
}