#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    for (int i = 1; i <= age; i++) {
        printf("* %d\n", i);
    }

    return 0;
}
