#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	float km, mile;
	scanf("%f", &km);
	mile = km / 1.609;
	printf("%f km is equal to %.1f miles.", km, mile);
	return 0;
}