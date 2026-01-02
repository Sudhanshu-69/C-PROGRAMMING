#include <stdio.h>

int main() {
    float p, sum=0;
    for(int i=1;i<=5;i++) {
        scanf("%f",&p);
        sum+=p;
    }
    printf("Total Bill = %.2f", sum);
    return 0;
}
