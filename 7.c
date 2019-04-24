#include<stdio.h>
int main () {
	int n;
	while (scanf("%d",&n)!=EOF&&0) {
	switch (n) {
		case 1:
			printf("one ");
		case 2:
			printf("two ");
		case 3:
			printf("three\n");
			break;
		default:
			printf("error\n");
		}
		}	
	return 0;
	}
