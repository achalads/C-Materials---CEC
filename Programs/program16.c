#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return reversed;
}
bool isEmirp(int num) {
    if (!isPrime(num)) return false;
    int reversed = reverseNumber(num);
    return (reversed != num && isPrime(reversed));
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isEmirp(num)) {
        printf("%d is an emirp number.\n", num);
    } else {
        printf("%d is not an emirp number.\n", num);
    }

    return 0;
}
