#include <stdio.h>
int main() {
        printf("Welcome to odd or even number checker\n");
        int number;
        printf("Enter a number:");
        scanf("%d", &number);
        if (number / 2 == 0) {
                printf("The number %d is even\n", number);

        } else {
                printf("The number %d is odd\n", number);

        }
        return 0;
}
