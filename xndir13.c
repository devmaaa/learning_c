#include<stdio.h>

int main() {
    int a = 0;
    int b = 0;
    int res = 0;
    printf("Please enter number 1: \n");
    scanf("%d", &a);
    printf("Please enter number 2: \n");
    scanf("%d", &b);
    res = a+b;
    printf("The sum of two numbers is: %d\n", res);

    return 0;
}
