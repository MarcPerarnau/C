#include <stdio.h>

int main() {

    int dividend, divider;

    printf("Enter a dividend: ");
    scanf("%d", &dividend);
    printf("Enter a divider: ");
    scanf("%d", &divider);

    if (divider == 0){
        printf("Error: cannot be divided by 0");
    } else {
        printf("%d", dividend/divider);
    }

    return 0;
}
