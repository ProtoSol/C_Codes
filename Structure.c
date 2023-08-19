#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float CGP;

};
void main() {
    int i,n;
    printf("Enter the number of students: \n");
    scanf("%d",&n);
    struct student s[n];
    printf("Enter information of students:\n");
    for (i = 0; i < n; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number %d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter CGP: ");
        scanf("%f", &s[i].CGP);
    }
    printf("Displaying Information:\n\n");
    for (i = 0; i < n; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("CGP: %.1f", s[i].CGP);
        printf("\n");
    }
}