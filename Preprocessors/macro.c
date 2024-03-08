#include<stdio.h>

#define PI 3.14
#define CIRCLKE_AREA(x) (PI * x * x) // right expression is ((PI) * (X) * (X))

int main() 
{
    int r = 5;
    printf("Enter the radius: ");
    scanf("%d", &r);
    float area = CIRCLKE_AREA(r + 3);
    printf("%0.2f", area);
    float area_2 = (3.14 * r) + (3 * r) + 3; //explain wrong expression 
    printf("\n%0.2f", area_2);
    return 0;
}