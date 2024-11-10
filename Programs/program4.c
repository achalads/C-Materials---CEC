#include <stdio.h>

int main() {
    unsigned int num;
    printf("Enter a hexadecimal number: ");
    scanf("%x", &num);
    printf("Decimal    : %5d\n", num);
    printf("Octal      : %5o\n", num);
    printf("Hexadecimal: %5X\n", num);

    return 0;
}
