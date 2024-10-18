#include<stdio.h>

int main() {
    int age_in_years = 0;
    int age_in_days = 0;
    printf("Please Enter your Age in Years: \n");	
    scanf("%d", &age_in_years);
    age_in_days = (365 *  age_in_years);
    printf("Your Age in days: %d \n", age_in_days);

    return 0;
}
