#include<stdio.h> 

int main() {
    int x = 0;
    int result = 0;
    printf("please enter a number: \n");
    scanf("%d", &x);
    result = (4 * x + 24 * x *x - 12);
    printf("%d", result);

    return 0;
}
