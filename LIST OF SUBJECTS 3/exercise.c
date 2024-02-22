#include <stdio.h>
#include <string.h>

int main() {
    char *subjects[] = {"Matemáticas", "Física", "Química", "Historia", "Lengua"};
    char scores[5][10]; // Arreglo de calificaciones para cada materia

    for (int i = 0; i < 5; i++) {
        printf("What grade did you get in %s? ", subjects[i]);
        scanf("%s", scores[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("In %s you have %s\n", subjects[i], scores[i]);
    }

    return 0;
}
