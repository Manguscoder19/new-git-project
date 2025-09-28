#include <stdio.h>

int main() {
    char response;

    printf("Do you think you are pretty? (y/n): ");
    scanf(" %c", &response);

    if (response == 'y' || response == 'Y') {
        printf("You are pretty!\n");
    } else {
        printf("Beauty is in the eye of the beholder.\n");
    }

    return 0;
}