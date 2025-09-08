#include <stdio.h>

int main() {
	int n;
	auto min = 1000000;
	auto max = -1000000;
	scanf("%d", &n);
	auto* arr = new int[n];
	for (auto i = 0; i < n; i++) {
		int tmp;
		scanf("%d", &tmp);
		if (tmp < min) min = tmp;
		if (tmp > max) max = tmp;
	}
	printf("%d %d", min, max);
}