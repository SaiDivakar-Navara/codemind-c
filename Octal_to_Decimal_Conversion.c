#include <stdio.h>
#include <math.h>
int octalToDecimal(int octal) {
    int decimal = 0, i = 0;
    while(octal != 0) {
        int digit = octal % 10;
        decimal += digit * pow(8, i);
        ++i;
        octal /= 10;
    }
    return decimal;
}
int main() {
    int octal;
    scanf("%d",&octal);
    int decimal=octalToDecimal(octal);
    printf("%d",decimal);
    return 0;
}
