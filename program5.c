
#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer to check if it is positive, negative, even, or odd: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("The number is positive.\n");
    } else if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    if (num != 0) {
        if (num % 2 == 0) {
            printf("The number is even.\n");
        } else {
            printf("The number is odd.\n");
        }
    } else {
        printf("Zero is neither even nor odd.\n");
    }

    return 0;
}