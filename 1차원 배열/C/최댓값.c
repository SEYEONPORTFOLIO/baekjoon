#include<stdio.h>
int main() {
	int A[9];
	int MAX = 0, N;
	for (int i = 0; i < 9; i++) {
		scanf("%d\n", &A[i]);
		if (A[i] > MAX) {
			MAX = A[i];
			N = i + 1;
		}
	}
	printf("%d\n", MAX);
	printf("%d", N);
	return 0;
}