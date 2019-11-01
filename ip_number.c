#include <stdio.h>

union IP{
    unsigned int num;
    unsigned char ip[4];
};
int is_little() {
    static int a = 1;
    return ((char *)(&a))[0];
}

int main() {
    char ip_str[25];
    while (~scanf("%s", ip_str)) {
        int a, b, c, d;
        sscanf(ip_str,"%d.%d.%d.%d", &a, &b, &c, &d);
        IP ip;
        ip.ip[3] = a;
        ip.ip[2] = b;
        ip.ip[1] = c;
        ip.ip[0] = d;
        printf("%s = %u\n", ip_str, ip.num);
    }
    return 0;
}
