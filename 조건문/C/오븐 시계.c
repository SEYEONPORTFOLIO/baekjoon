#include<stdio.h>
int main() {
	int H, M, T;
	scanf("%d %d", &H, &M);
	scanf("%d", &T);
	H += (M + T) / 60;
	M = (M + T) % 60;
	if (H > 23) H %= 24;
	printf("%d %d", H, M);
	return 0;
}