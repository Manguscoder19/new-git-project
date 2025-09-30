#include <stdio.h>
int main() {
    int twinAge;
    printf("Enter age of one twin: ");
    scanf("%d", &twinAge);
    printf("Combined age of twins = %d\n", twinAge + twinAge);
    return 0;
}