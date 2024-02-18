#include <stdio.h>

int main(){

    char word[100];
    printf("Enter a word: ");
    scanf("%s", &word);

    for (int i = 0; i <= 10; i++){
        printf("%s \n",word);
    }

    return 0;
}
