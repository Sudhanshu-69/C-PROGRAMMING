#include <stdio.h>

int main() {
    float bal;
    scanf("%f", &bal);

    bal += 100;
    bal -= 50;
    bal *= 2;
    bal /= 2;

    printf("Final Balance = %.2f", bal);
    return 0;
}
