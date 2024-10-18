#include<stdio.h>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    int avg = 0;

    printf("Please enter 1th number: \n");
    scanf("%d",&a);
    printf("Please enter 2th number: \n");
    scanf("%d", &b);
    printf("Please enter 3th number: \n");
    scanf("%d", &c);
    avg = (a + b + c) / 3;
    printf("Your average is: %d \n", avg); 
    return 0;
}
