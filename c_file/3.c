#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int GetGCD(int a, int b) {
	if (a % b == 0)
		return b;
	return GetGCD(b, a % b);
}

int GetLCM(int a, int b) {
	int gcd;

	gcd = GetGCD(a, b);
	return a * b / gcd;
}

void main() {
	int n;
	int lcm;
	
	lcm = 0;
	while (1) {
		scanf("%d", &n);
		if (n == 0)
			break;
		if (lcm == 0)
			lcm = n;
		else
			lcm = GetLCM(lcm, n);
	}
	printf("%d\n", lcm);
}