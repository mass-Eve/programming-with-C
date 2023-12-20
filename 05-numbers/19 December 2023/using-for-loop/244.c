// A number is called happy if it leads to 1 after a sequence of steps wherein each step number is replaced by the sum of squares of its digit that is if we start with Happy Number and keep replacing it with digits square sum, we reach 1. 

#include <stdio.h>

int main() {
    int num, originalNum, remainder, result;
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;
    for (;;) {
        result = 0;
        while (num != 0) {
            remainder = num % 10;
            result += remainder * remainder;
            num /= 10;
        }
        if (result == 1) {
            printf("%d is a happy number.\n", originalNum);
            break;
        } else if (result == originalNum || result == 4) {
            printf("%d is not a happy number.\n", originalNum);
            break;
        }
        num = result;
    }

    return 0;
}