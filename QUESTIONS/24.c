#include <stdio.h>

int main() {
    int ch,n,i;
    scanf("%d",&ch);

    while(ch==1){
        scanf("%d",&n);
        for(i=1;i<=10;i++)
            printf("%d x %d = %d\n",n,i,n*i);
        scanf("%d",&ch);
    }
    return 0;
}
