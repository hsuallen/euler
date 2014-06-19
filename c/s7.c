#include <stdio.h>
#include <math.h>
#include <stdbool.h>

static const int nthPrime = 10001;

// Returns true if n is prime. Assumes n > 3.
static bool isPrime(int n) {
	if (n % 2 == 0 || n % 3 == 0) return false;
	int root = (int)sqrt(n);
	for (int i = 5; i <= root; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0) {
			return false;
		}
	}
	return true;
}

int main(void) {
	int i = 1;
	int count = 2;
	while (true) {
		i += 4;
		if (isPrime(i)) count++;
		if (count == nthPrime) break;
		i += 2;
		if (isPrime(i)) count++;
		if (count == nthPrime) break;
	}
	printf("%d\n", i);
	return 0;
}
