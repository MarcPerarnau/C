#include <stdio.h>
#include <math.h>

int main() {

    float height, bmi, weight;

    printf("Enter your weight in kg: ");
    scanf("%f", &weight);
    printf("Enter your height in mts: ");
    scanf("%f", &height);

    bmi = (weight / (height * height));

    printf("Your body mass index is: %2.f", bmi);


    return 0;
}
