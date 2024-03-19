#include <stdio.h>

int main() {
    int decimalNum, remainder, binary = 0, base = 1;
    int decimal;

    printf("Enter a number: ");
    scanf("%d", &decimalNum);
    decimal = decimalNum;

    // Convert decimal to binary
    while (decimalNum > 0) {
        remainder = decimalNum % 2;
        binary = binary + remainder * base;
        decimalNum = decimalNum / 2;
        base = base * 10;
    }

    printf("The binary representation for %d is: %d\n", decimal, binary);

    return 0;
}




