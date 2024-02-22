#include <stdio.h>
#include <math.h>
int main() {

    float amount, interest;
    int years;

    printf("Amount to invest? ");
    scanf("%f", &amount);
    printf("Annual percentage interest? ");
    scanf("%f", &interest);
    printf("Years? ");
    scanf("%d", &years);

    float total = amount * pow((interest / 100 + 1), years);
    printf("Final capital: %.2f\n", total);

    return 0;
}
