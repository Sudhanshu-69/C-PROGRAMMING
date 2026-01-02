#include <stdio.h>

int main() {
    int c;
    scanf("%d",&c);

    switch(c) {
        case 1: printf("Stop"); break;
        case 2: printf("Ready"); break;
        case 3: printf("Go"); break;
        default: printf("Invalid");
    }
    return 0;
}
