#include <stdio.h>

int num[1005][1005];

int max(int i,int j) {
    return i > j ? i: j;
}
int main() {
    int x;    
    scanf("%d", &x);
    for (int i = 0; i < x; i++) {
        for(int j = 0; j < i;j++) {

            scanf("%d",&num[i][j]);
        }
    }
    for (int i = x-2; i>=0; --i) {
        for (int j = 1; j <= i; j++) {
            num[i][j] += max(num[i+1][j],num[i+1][j+1]);
        }
    }
    printf("%d\n", num[0][0]);
    return 0;
}
