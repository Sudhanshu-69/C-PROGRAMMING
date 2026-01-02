#include <stdio.h>

int main() {
    float a, b;

    printf("Enter two account balances: ");
    scanf("%f %f", &a, &b);

    printf("Both balances equal: %d\n", a == b);
    printf("First balance greater: %d\n", a > b);
    printf("Second balance greater: %d\n", b > a);

    return 0;
}
