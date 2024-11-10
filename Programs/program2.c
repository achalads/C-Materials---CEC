#include <stdio.h>

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);

    printf("ASCII values of characters in the string:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("Character: %c, ASCII: %d\n", str[i], str[i]);
    }

    return 0;
}