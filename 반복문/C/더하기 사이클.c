#include<stdio.h>
int main() {
	int a, a1, ten, one, b = 0;
	scanf("%d", &a);
	a1 = a;
	do {
		ten = a / 10;
		one = a % 10;
		a = (one * 10) + ((ten + one) % 10);
		b++;
	} while (a != a1);
	printf("%d", b);
	return 0;
}