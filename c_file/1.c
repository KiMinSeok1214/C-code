#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void PrintInverse(int n) {
	if (n != 0) {
		printf("%d", n % 10);
		PrintInverse(n / 10);
	}
}

void main() {
	int n;

	scanf("%d", &n);
	PrintInverse(n);
	printf("\n");
}