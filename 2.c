#include<stdio.h>
int main() {
char str[100];
scanf("%[^\n]s",str);
int ret=printf("%s",str);
printf("%d\n",ret);
return 0;
}
