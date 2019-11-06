/*************************************************************************
	> File Name: 6.c
	> Author: liutaiwei
	> Mail: 243187728@qq.com
	> Created Time: 2019年07月19日 星期五 18时18分11秒
 ************************************************************************/

#include<stdio.h>

#define pi 3.14
int main() {
    double r;
    scanf("%lf", &r);
    printf("%.2f\n", 2 * pi * r);
    printf("%.2f\n", pi * r * r);
    return 0;
}
