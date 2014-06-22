#include <stdio.h>
#include <math.h>
#include <stdbool.h>

static const long value = 600851475143;

static bool isPrime(int n) {
	for (int i = 2; i < sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main(void) {
	int largestFactor = 0;
	for (int i = 2; i < sqrt(value); i++) {
		if (value % i == 0) {
			if (isPrime(i)) {
				largestFactor = i;
			}
		}
	}
	printf("%d\n", largestFactor);
	return 0;
}
