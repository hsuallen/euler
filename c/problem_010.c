#include <stdio.h>
#include <stdbool.h>
#include <math.h>

static bool isPrime(int n) {
	for (int i = 2; i < sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main(void) {
	long total = 0;
	for (int i = 2; i < 2000000; i++) {
		if (isPrime(i)) {
			total += i;
		}
	}
	printf("%ld\n", total);
	return 0;
}
