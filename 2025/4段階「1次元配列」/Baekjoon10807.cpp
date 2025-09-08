#include <stdio.h>

int main() {
	int n, target;
	int arr[100];
	int count = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &target);
	for(int i= 0; i<n; i++) {
		if(arr[i] == target) {
			count++;
		}
	}
	printf("%d", count);
}