#include <stdio.h>

int main(){

    int n, sum;

    printf("Enter a whole number: ");
    scanf("%d", &n);

    sum = n * (n + 1) / 2;

    printf("The sum of the first integer number form 1 to %d is: %d", n, sum);

    return 0;
}
