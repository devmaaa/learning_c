#include<stdio.h>

int main() {
    int a = 0;
    int b = 0;
    int result = 0;
    printf("please input numbers \n");
    scanf("%d%d", &a, &b);
    result = a + b;
    printf("%d", result);
    return 0;
}
