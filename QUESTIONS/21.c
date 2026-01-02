#include <stdio.h>

int main() {
    float d, total=0;
    for(int i=1;i<=30;i++){
        scanf("%f",&d);
        total+=d;
    }
    printf("Total Distance = %.2f km", total);
    return 0;
}
