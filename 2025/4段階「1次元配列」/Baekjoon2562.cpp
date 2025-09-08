#include <stdio.h>

int main() {
	int max = 0;
	int maxIndex = 0;
	for (int i = 0; i < 9; i++) {
		int tmp;
		scanf("%d", &tmp);
		if (max < tmp) {
			max = tmp;
			maxIndex = i + 1;
		}
	}
	printf("%d\n", max);
	printf("%d", maxIndex);
}