#include<stdio.h>
#include<time.h>
#include <math.h>

int binary_search(int *arr, int n, int x) {
	int head = 0, tail = n - 1, mid;
	while (head <= tail) {
		mid = (head + tail) >> 1;
		if (arr[mid] == x) return mid;
		if (arr[mid] < x) head = mid + 1;


		else tail = mid - 1;
	}
	return -1;
}

int arr[100];

double my_sqrt(double y) {
	#define EXP 1e-7
	double head = 0, tail = y, mid;
	while (tail - head > EXP) {
		mid = (head + tail) / 2.0;
		if (mid * mid < y) head = mid;
		else tail = mid;
	}
	return head;
}

double newton_sqrt(double y) {
	double x = 0;
}
int main() {
	int n, a;
	scanf("%d", &n);
}	
	
