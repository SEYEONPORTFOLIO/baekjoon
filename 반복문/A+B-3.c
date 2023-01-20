#include<stdio.h>
int main() {
	int cas, a, b;
	scanf("%d", &cas);
	for (int i = 0; i < cas; i++) {
			scanf("%d %d", &a, &b);
			printf("%d\n", a + b);
	}
	return 0;
}
