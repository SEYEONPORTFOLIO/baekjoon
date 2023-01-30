#include<stdio.h>
int main() {
	int N;
	int A;
	int MAX, MIN;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &A);
		if (i == 0)	MAX = MIN = A;
		if (i != 0) {
			if (A > MAX) MAX = A;
			else if (A < MIN) MIN = A;
		}
	}
	printf("%d %d", MIN , MAX);
	return 0;
}