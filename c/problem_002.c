#include <stdio.h>

int main(void) {
	int sum = 2;
	int next = 2;
	int previous = 1;
	for (int i = 0;; i++) {
		int temp = next;
		next += previous;
		previous = temp;
		if (next % 2 == 0) sum += next;
		if (next > 4000000) break;
	}
	printf("%d\n", sum);
	return 0;
}
