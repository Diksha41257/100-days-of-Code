#include <stdio.h>
int findCeilIndex(int arr[], int n, int x) {
	int left = 0, right = n - 1, res = -1;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (arr[mid] >= x) {
			res = mid;
			right = mid - 1; // look for a smaller index
		} else {
			left = mid + 1;
		}
	}
	return res;
}

int main() {
	int n, x;
	// Read array size
	scanf("%d", &n);
	int arr[n];
	// Read array elements
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	// Read x
	scanf("%d", &x);
	int idx = findCeilIndex(arr, n, x);
	printf("%d\n", idx);
	return 0;
}
