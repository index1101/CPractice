#include <stdio.h>

int main() {
    int num = 0x61626364;
    char *p = (char *)(&num);
    printf("%s\n", p);
    return 0;
}
