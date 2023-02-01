#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

double GetPi(int n) {
	if (n == 1)
		return 4;
	else {
		if (n % 2 == 0)
			return n / (n + 1.) * GetPi(n - 1);
		else
			return (n + 1.) / n * GetPi(n - 1);
	}
}

void main() {
	int n;
	double an;

	scanf("%d", &n);
	an = GetPi(n);
	printf("%g\n", an);
}