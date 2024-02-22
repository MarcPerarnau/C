#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = 0; // Eliminar el salto de línea al final de la entrada

    reverseString(sentence);
    printf("The inverted phrase is: %s\n", sentence);

    return 0;
}
