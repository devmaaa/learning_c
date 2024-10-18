#include<stdio.h>

int main() {
    float c = 0;
    float f = 0;
    printf("please input weather in Celsius \n");
    scanf("%f", &c);
    f = (c * 9/5 ) + 32;
    printf("%f", f);
    return 0;
}
