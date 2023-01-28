#include<stdio.h>
int main() {
	int n, int_, a=0;
	scanf("%d", &n);
	int arr[100];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &int_);
	for (int i = 0; i < n; i++) {
		if (arr[i] == int_) a++;
	}
	printf("%d", a);
	

	return 0;
}
