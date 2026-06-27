#include<stdio.h>

float Eng, Mat, Phy, Chem, Bio, Sum, Per;

int Percentage();
int Grade(float Per);

int main() {

    Percentage();
    Grade(Per);

    return 0;

}

int Percentage() {
    printf("Enter your percentage in English : ");
    scanf("%f", &Eng);

    printf("Enter your percentage in Mathematics : ");
    scanf("%f", &Mat);

    printf("Enter your percentage in Physics : ");
    scanf("%f", &Phy);

    printf("Enter your percentage in Chemistry : ");
    scanf("%f", &Chem);

    printf("Enter your percentage in Biology : ");
    scanf("%f", &Bio);

    Sum = Eng + Mat +Phy + Chem + Bio;
    Per =  Sum / 5;
    printf("Percentage = %.2f\n", Per);

    return 0;
}

int Grade(float Per) {
    
    if (100.0 >= Per && Per>= 85.0) {
        printf("Your grade is A+.");
    } else if (85.0 > Per && Per>= 70.0) {
        printf("Your grade is A.");
    } else if (70.0 > Per && Per >= 50.0) {
        printf("Your grade is B.");
    } else if (50.0 > Per && Per >= 35.0) {
        printf("Your grade is C.");
    } else {
        printf("Your grade is F");
    }

    return 0;
}