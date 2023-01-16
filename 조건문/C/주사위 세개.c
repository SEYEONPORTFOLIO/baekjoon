#include<stdio.h>
int main() {
	int a, b, c;
	int money;
	scanf("%d %d %d", &a, &b, &c);
	if ((a == b)&&(b==c)&&(a == c)) {
		money = 10000 + a * 1000;
	}
	else if ((a == b) && (b != c)) money = 1000 + a * 100;
	else if ((b == c) && (a != c)) money = 1000 + b * 100;
	else if ((a == c) && (b != c)) money = 1000 + c * 100;
	else if ((a!=b)&&(b!=c)&&(a!=c)) {
		int max = a;
		if (a < b) {
			if (b < c) max = c;
			else max = b;
		}
		else if (a < c) {
			max = c;
		}
		money = max * 100;
	}
	printf("%d", money);
	return 0;
}