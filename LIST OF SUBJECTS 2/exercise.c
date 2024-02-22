#include <stdio.h>

int main() {
    char *subjects[] = {"Mathematics", "Physics", "Chemistry", "Hystory", "Lenguage"};

    for (int i = 0; i < sizeof(subjects) / sizeof(subjects[0]); i++) {
        printf("I'm studying %s\n", subjects[i]);
    }

    return 0;
}
