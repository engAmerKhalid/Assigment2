#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int numDigits(int input);

int isArmstrong(int number) {
    int n = numDigits(number);
    int temp = number;
    int sum = 0;

    while (number != 0) {
        int remainder = number % 10;
        int digitPower = (int)pow((double)remainder, (double)n);
        sum += digitPower;
        number = number / 10;
    }

    return (sum == temp);
}

int main() {
    int count = 0;
    int number = 0;

    while (count < 20) {
        if (isArmstrong(number)) {
            printf("%d is an Armstrong number.\n", number);
            count++;
        }
        number++;
    }

    return 0;
}

int numDigits(int input) {
    int count = 0;
    while (input > 0) {
        count++;
        input = input / 10;
    }
    return count;
}
