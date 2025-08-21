#include <stdio.h>
#include <math.h>

int main() {
    int n, digit = 0, sum = 0, copy, original;
    printf("Enter the number: ");
    scanf("%d", &n);

    original = n;

    
    copy = n;
    while (copy > 0) {
        copy = copy / 10;
        digit++;
    }


    copy = n;
    while (copy > 0) {
        sum += pow(copy % 10, digit);
        copy = copy / 10;
    }

    if (sum == original) {
        printf("The number is Armstrong\n");
    } else {
        printf("It is not an Armstrong number\n");
    }
    return 0;
}
