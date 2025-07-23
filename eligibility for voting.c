#include <stdio.h>

// This code checks whether a person is eligible to vote or not
int main() {

    printf("Welcome to the voting eligibility checker\n");
    printf("Please enter your details.\n");

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    printf("Thank you for using the voting eligibility checker.\n");

    return 0;
}
