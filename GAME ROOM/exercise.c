#include <stdio.h>

int main(){

    int age, price;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 4){
        price = 0;
    } else if (age < 18){
        price = 5;
    } else if (age > 18){
        price = 10;
    }

    printf("You have to pay %d $", price);

    getchar();
    return 0;
}
