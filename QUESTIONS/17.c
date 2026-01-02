#include <stdio.h>

int main() {
    int m;
    scanf("%d",&m);

    switch(m) {
        case 2: printf("28 Days"); break;
        case 4: case 6: case 9: case 11: printf("30 Days"); break;
        default: printf("31 Days");
    }
    return 0;
}
