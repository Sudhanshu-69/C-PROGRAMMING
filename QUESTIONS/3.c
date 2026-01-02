#include <stdio.h>

int main() {
    int a = 10;
    float b = 2.5;
    char c = 'A';
    double d = 5.678;

    printf("int: %d size=%lu\n", a, sizeof(a));
    printf("float: %.2f size=%lu\n", b, sizeof(b));
    printf("char: %c size=%lu\n", c, sizeof(c));
    printf("double: %.3lf size=%lu\n", d, sizeof(d));

    return 0;
}
