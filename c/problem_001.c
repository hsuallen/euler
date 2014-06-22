#include <stdio.h>

const int restriction = 1000;

int main(void) {
	int sum = 0;
	for (int i = 3; i < restriction; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}
	printf("%d\n", sum);
}
