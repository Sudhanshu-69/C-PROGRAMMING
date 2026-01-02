#include <stdio.h>

int main() {
    float a, b;
    scanf("%f %f", &a, &b);

    printf("Equal: %d\n", a==b);
    printf("First Greater: %d\n", a>b);
    printf("Second Greater: %d\n", b>a);

    return 0;
}
