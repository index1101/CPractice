#include<stdio.h>

int f(int k,int x,int b) {
	return k * x + b;
}
int main() {
	int k,b;
        while(~scanf("%d%d",&k,&b)) {
	for(int i = 1;i <= 100;i++) {
			printf("%d",f(k,i,b));
		}
	}
	return 0;
}
