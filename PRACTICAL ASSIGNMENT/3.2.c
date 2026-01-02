#include <stdio.h>

int main() {
    int i, j;

    /* S */
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(i == 1 || i == 3 || i == 5 || (i == 2 && j == 1) || (i == 4 && j == 5))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    /* U */
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if((j == 1 || j == 5) && i < 5 || (i == 5 && j > 1 && j < 5))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    /* D */
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(j == 1 || (i == 1 && j < 5) || (i == 5 && j < 5) || (j == 5 && i > 1 && i < 5))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    /* H */
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(j == 1 || j == 5 || i == 3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    /* A */
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(i == 1 || i == 3 || j == 1 || j == 5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    /* N */
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(j == 1 || j == 5 || i == j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    /* S */
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(i == 1 || i == 3 || i == 5 || (i == 2 && j == 1) || (i == 4 && j == 5))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    /* H */
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(j == 1 || j == 5 || i == 3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

     /* U */
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if((j == 1 || j == 5) && i < 5 || (i == 5 && j > 1 && j < 5))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
