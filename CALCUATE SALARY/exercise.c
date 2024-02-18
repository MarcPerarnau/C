#include <stdio.h>
#include <math.h>

int main() {

    int hours;
    float dollar, total;

    printf("Enter monthly hours worked: ");
    scanf("%d", &hours);
    printf("Hourly wage: ");
    scanf("%f", &dollar);

    total = round(dollar * hours);

    printf("Your salary for %d hours is %f", hours, total);


    return 0;
}
