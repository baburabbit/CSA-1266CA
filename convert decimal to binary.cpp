#include <stdio.h>
#include<math.h>
int main() {
    int decimalNumber;
    int octalNumber = 0;
    int i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    while (decimalNumber > 0) {
        octalNumber += (decimalNumber % 2) * pow(10, i);
        decimalNumber /= 2;
        i++;
    }
    printf("The octal number is: %d\n", octalNumber);
    return 0;
}
