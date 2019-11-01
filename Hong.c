#include <stdio.h>
#define P(a,b) _Generic((b), \
	int :  printf("%s = %d expect= %d\n", #a, a, b), \
	double :printf("%s = %f  expect =%f\n", #a, a, b), \
)

#define MAX(a,b) ((a) > (b) ? (a) : (b)) //to do

int main() {
	P(MAX(2,3), 3);
	P(5 + MAX(3,4), 9);
	P(MAX(2,MAX(3,4)), 4);
	P(MAX(2,3 > 4 ? 3 : 4), 4);
	int a = 7;
	P(MAX(a++, 6), 7);
	P(a,  8);
	return 0;
	
}
