#include <stdio.h>

int main() {
    int originalNum, num, remainder, reversedNum = 0;

        
    printf("Enter an integer: ");
    scanf("%d", &originalNum);

    if (originalNum < 0) {
        printf("Result: %d is NOT a Palindrome number.\n", originalNum);
        return 0;
    }

    num = originalNum;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        printf("Result: %d is a Palindrome number.\n", originalNum);
    } else {
        printf("Result: %d is NOT a Palindrome number.\n", originalNum);
    }

    return 0;
}