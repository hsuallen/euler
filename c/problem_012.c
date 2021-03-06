#include <stdio.h>
#include <stdbool.h>

// the minimum factors of a triangle number
static const int minFactors = 500;

// generates nth triangle number
static int tNumber(int n) {
	int total = 0;
	for (int i = 1; i <= n; i++) {
		total += i;
	}
	return total;
}

// checks the number of factors
static int checkFactors(int n) {
	int factors = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i ==0) {
			factors++;
		}
	}
	return factors;
}

// returns true if n has at least nFactors of factors
static bool nDivisors(int n, int nFactors) {
	int number = tNumber(n);
	number = checkFactors(number);
	return (number >= nFactors);
}

int main(void) {
	int number = 0;
	for (int i = 1;; i++) {
		if (nDivisors(i, minFactors)) {
			number = i;
			break;
		}
	}
	printf("%d\n", number);
	return 0;
}
