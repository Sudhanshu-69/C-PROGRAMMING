#include <stdio.h>

int main() {
    int p, count=0;
    for(int i=1;i<=30;i++){
        scanf("%d",&p);
        if(p==1) count++;
    }
    printf("Present Days = %d", count);
    return 0;
}
