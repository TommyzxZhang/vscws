#include <math.h>


int binary_to_number(int binary_digits[], int number_of_digits) {
    int num = 0;
    for (int i = 0; i < number_of_digits; i++)
    {
        num = num * 10 + binary_digits[i];
    }

    int decimalNumber = 0, i = 0, remainder;
    while (num != 0)
    {
        remainder = num % 10;
        num /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }
    return decimalNumber;

}