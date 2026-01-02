#include <stdio.h>

int main() {
    int i, j, k;

    /* (a) Rectangle 7 columns, 4 rows */
    printf("\n(a) Rectangle (7 x 4)\n");
    for(i = 1; i <= 4; i++) {
        for(j = 1; j <= 7; j++) {
            printf("* ");
        }
        printf("\n");
    }

    /* (b) Square 4 columns, 4 rows */
    printf("\n(b) Square (4 x 4)\n");
    for(i = 1; i <= 4; i++) {
        for(j = 1; j <= 4; j++) {
            printf("* ");
        }
        printf("\n");
    }

    /* (c) Right-angle triangle */
    printf("\n(c) Right Angle Triangle\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    /* (d) Reverse Right-angle triangle */
    printf("\n(d) Reverse Right Angle Triangle\n");
    for(i = 5; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    /* (e) Central (Pyramid) Triangle */
    printf("\n(e) Central Triangle\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5 - i; j++) {
            printf("  ");
        }
        for(k = 1; k <= (2*i - 1); k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
