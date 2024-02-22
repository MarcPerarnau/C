#include <stdio.h>

int main() {

    char fruits[4][10] = {"Banana", "Apple", "Pear", "Orange"};
    float price[4] = {1.35, 0.8, 0.85, 0.7};
    char fruit[10];
    float kg;

    printf(" \n Wich fruit do you want?: ");
    scanf("%s", &fruit);
    printf(" \n How many kg: ");
    scanf("%f", &kg);

    int found = -1;
    for (int i = 0; i < 4; i++){
        if (strcmp(fruit,fruits[i])== 0){
            found = i;
            break;
        }
    }
    if (found != -1) {
        printf("%.2f kg of %s worth %.2f $\n", kg, fruits[found], price[found]*kg);
    } else {
        printf("The fruit is not here\n");
    }
  return 0;
}
