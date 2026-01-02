#include <stdio.h>

void printLetter(char ch) {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {

            switch (ch) {

                case 'A':
                    printf((i==1||i==3||j==1||j==5)?"*":" ");
                    break;

                case 'B':
                    printf((j==1||(i==1||i==3||i==5)&&j<5||(j==5&&i!=1&&i!=3&&i!=5))?"*":" ");
                    break;

                case 'C':
                    printf((i==1||i==5||j==1)?"*":" ");
                    break;

                case 'D':
                    printf((j==1||(i==1||i==5)&&j<5||j==5)?"*":" ");
                    break;

                case 'E':
                    printf((j==1||i==1||i==3||i==5)?"*":" ");
                    break;

                case 'F':
                    printf((j==1||i==1||i==3)?"*":" ");
                    break;

                case 'G':
                    printf((i==1||i==5||j==1||(i==3&&j>2)||(j==5&&i>2))?"*":" ");
                    break;

                case 'H':
                    printf((j==1||j==5||i==3)?"*":" ");
                    break;

                case 'I':
                    printf((i==1||i==5||j==3)?"*":" ");
                    break;

                case 'J':
                    printf((i==1||j==3||(i==5&&j<3))?"*":" ");
                    break;

                case 'K':
                    printf((j==1||i+j==6||i==j)?"*":" ");
                    break;

                case 'L':
                    printf((j==1||i==5)?"*":" ");
                    break;

                case 'M':
                    printf((j==1||j==5||(i==j&&i<=3)||(i+j==6&&i<=3))?"*":" ");
                    break;

                case 'N':
                    printf((j==1||j==5||i==j)?"*":" ");
                    break;

                case 'O':
                    printf((i==1||i==5||j==1||j==5)?"*":" ");
                    break;

                case 'P':
                    printf((j==1||(i==1||i==3)&&j<5||(j==5&&i<3))?"*":" ");
                    break;

                case 'Q':
                    printf((i==1||i==4||j==1||j==5||(i==j&&i>2))?"*":" ");
                    break;

                case 'R':
                    printf((j==1||(i==1||i==3)&&j<5||(j==5&&i<3)||(i==j&&i>3))?"*":" ");
                    break;

                case 'S':
                    printf((i==1||i==3||i==5||(i==2&&j==1)||(i==4&&j==5))?"*":" ");
                    break;

                case 'T':
                    printf((i==1||j==3)?"*":" ");
                    break;

                case 'U':
                    printf(((j==1||j==5)&&i<5||i==5)?"*":" ");
                    break;

                /* ✅ FIXED V */
                case 'V':
                    printf(((j==i && i<=4) || (j==6-i && i<=4)) ? "*" : " ");
                    break;

                case 'W':
                    printf((j==1||j==5||(i==j&&i>3)||(i+j==6&&i>3))?"*":" ");
                    break;

                case 'X':
                    printf((i==j||i+j==6)?"*":" ");
                    break;

                case 'Y':
                    printf(((i==j&&i<3)||(i+j==6&&i<3)||(j==3&&i>2))?"*":" ");
                    break;

                case 'Z':
                    printf((i==1||i==5||i+j==6)?"*":" ");
                    break;
            }
        }
        printf("\n");
    }
}

int main() {
    char ch;

    for (ch = 'A'; ch <= 'Z'; ch++) {
        printLetter(ch);
        printf("\n");
    }

    return 0;
}
