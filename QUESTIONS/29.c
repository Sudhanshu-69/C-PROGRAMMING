#include <stdio.h>

char grade(float avg){
    if(avg>=90) return 'A';
    else if(avg>=80) return 'B';
    else if(avg>=70) return 'C';
    else if(avg>=60) return 'D';
    else return 'F';
}

int main(){
    float m1,m2,m3,avg;
    scanf("%f %f %f",&m1,&m2,&m3);
    avg=(m1+m2+m3)/3;
    printf("Grade = %c", grade(avg));
    return 0;
}
