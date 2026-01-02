#include <stdio.h>

int main() {
    int u, total=0;
    for(int i=1;i<=7;i++){
        scanf("%d",&u);
        total+=u;
    }
    printf("Total = %d units", total);
    return 0;
}
