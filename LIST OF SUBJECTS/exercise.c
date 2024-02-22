#include <stdio.h>

int main() {
    char *subjects[] = {"Mathematics", "Physics", "Chemistry", "History", "Language"};

    for (int i = 0; i < sizeof(subjects) / sizeof(subjects[0]); i++) {
        printf("%s\n", subjects[i]);
    }

    return 0;
}
