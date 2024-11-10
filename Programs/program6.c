#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 10 && num <= 20 && num % 2 == 0) {
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }

    return 0;
}