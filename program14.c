#include <stdio.h>

int main() {
   
    
    printf("Even numbers:\n");
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0)
            printf("%d ", i);
    }
    printf("\nOdd numbers:\n");
    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
