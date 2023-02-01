#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void Print(int a, int r) {
	if (a > 0) {
		Print(a / r, r);
		printf("%d", a % r);
	}
}

void main() {
	int a, r;
	
	scanf("%d%d", &a, &r);
	Print(a, r);
	printf("\n");
}