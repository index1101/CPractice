#include<stdio.h>

int main () {
	int n;
	int ans = 0;
	scanf("%d",&n);
	while  (n != 0) {
		n=n/10;
		ans++;
	}
	printf("%d\n", ans);
	return 0;
}
