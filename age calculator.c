#include <stdio.h>

int main() {
    // This code is used to calculate your age based on the year of birth.//

    int year_of_birth;
    int current_year = 2025;
    int age;
    printf("Enter your year of birth:");
    scanf("%d", &year_of_birth);
    age = current_year - year_of_birth;
    printf("Your age is:%d\n", age);
       if (age >= 18) {
        printf("you are an adult.\n");
       } else {
        printf("You are not an adult.\n");

       }
       

    return 0;
}