#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	if (n == 0) {
	printf("FOOLISH");
	} else if (0<n&&n<60) {
	printf("FAIL");
	} else if(60<=n&&n<75) {
	printf("MEDIUM");
	} else if(75<=n&&n<=100) {
	printf("GOOD");
	} 
	return 0;
}
