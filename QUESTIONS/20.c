#include <stdio.h>

int main() {
    int age, count=0;
    for(int i=1;i<=10;i++){
        scanf("%d",&age);
        if(age>=30) count++;
    }
    printf("Count = %d", count);
    return 0;
}
