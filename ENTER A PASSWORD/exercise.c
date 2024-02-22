#include <stdio.h>
#include <string.h>

int main() {
    char key[] = "password";
    char password[20];

    while (strcmp(password, key) != 0) {
        printf("Enter a password: ");
        scanf("%s", password);
    }
    printf("Access granted");
    return 0;
}
