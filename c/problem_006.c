#include <stdio.h>

static int square(int n) {
	return n * n;
}

int main(void) {
	int sumSquares = 0;
	int squareSum = 0;
	for (int i = 1; i<= 100; i++) {
		int integer = i;
		sumSquares += square(integer);
		squareSum += i;
	}
	squareSum = square(squareSum);
	int difference = squareSum - sumSquares;
	printf("%d\n", difference);
}
