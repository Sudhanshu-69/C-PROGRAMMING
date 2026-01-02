#include <stdio.h>
#include <string.h>

int main() {
    char u[10], p[10];
    scanf("%s %s", u, p);

    if(strcmp(u,"admin")==0 && strcmp(p,"1234")==0)
        printf("Login Successful");
    else
        printf("Invalid Login");

    return 0;
}
