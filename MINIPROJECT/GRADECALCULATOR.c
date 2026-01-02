#include <stdio.h>

int main() {
    float marks[5], total = 0, percentage;
    char grade;
    int i;

    printf("=====================================\n");
    printf("        STUDENT GRADE CALCULATOR      \n");
    printf("=====================================\n");

    printf("Enter marks of 5 subjects (out of 100):\n");

    for(i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);

        if(marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks entered! Please enter marks between 0 and 100.\n");
            return 0;
        }

        total += marks[i];
    }

    percentage = total / 5;

    if(percentage >= 90)
        grade = 'A';
    else if(percentage >= 80)
        grade = 'B';
    else if(percentage >= 70)
        grade = 'C';
    else if(percentage >= 60)
        grade = 'D';
    else if(percentage >= 50)
        grade = 'E';
    else
        grade = 'F';

    printf("\n=====================================\n");
    printf("              RESULT                 \n");
    printf("=====================================\n");
    printf("Total Marks   : %.2f / 500\n", total);
    printf("Percentage    : %.2f %%\n", percentage);
    printf("Grade         : %c\n", grade);

    if(grade == 'F')
        printf("Status        : FAIL\n");
    else
        printf("Status        : PASS\n");

    printf("=====================================\n");

    return 0;
}
