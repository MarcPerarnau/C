#include <stdio.h>

int main() {
    int number;
    printf("Enter a number for the countdown: ");
    scanf("%d", &number);

    for (int i = number; i >= 0; i--) {
        printf("%d\n", i);
    }

    return 0;
}
