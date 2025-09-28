#include <stdio.h>

int main() {
    int books;

    printf("Enter the number of books you have: ");
    scanf("%d", &books);

    if (books > 10) {
        printf("You have a large collection of books.\n");
    } else if (books > 0) {
        printf("You have some books.\n");
    } else {
        printf("You don't have any books.\n");
    }

    return 0;
}