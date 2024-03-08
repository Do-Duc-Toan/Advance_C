#include<stdio.h>

union student
{
    char lettergrade;
    int roundedgrade;
    float exactgrade;
};

int main()
{
    union student record_1;
    union student record_2;

    //assign values to record_1 variable
    record_1.lettergrade = 'B';
    record_1.roundedgrade = 87;
    record_1.exactgrade = 86.5;

    printf("Letter grade: %c\n", record_1.lettergrade);
    printf("Rounded grade: %d\n", record_1.roundedgrade);
    printf("Exact grade: %f\n", record_1.exactgrade);

    record_2.lettergrade = 'A';
    printf("Letter grade: %c\n", record_2.lettergrade);
    record_2.roundedgrade = 100;
    printf("Rounded grade: %d\n", record_2.roundedgrade);
    record_2.exactgrade = 90.00;
    printf("Exact grade: %0.2f", record_2.exactgrade);
    return 0;
}
