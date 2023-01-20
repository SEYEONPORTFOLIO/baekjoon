#include<stdio.h>
int main() {
	int all, n, price, a, b = 0;
	scanf("%d", &all);
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &price);
		b+=price* a;
	}
	if (all == b) printf("Yes");
	else printf("No");
	return 0;
}