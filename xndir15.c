#include<stdio.h>

int main() {
    int yearly = 0;
    int monthly = 0;

    printf("Please input your yearly salary: \n");
    scanf("%d", &yearly);
    monthly = yearly / 12;
    printf("Your Annual salary is: %d, Which in months would be: %d ", yearly, monthly);
  
    return 0;
}
