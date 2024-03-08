#include<stdio.h>
#include<math.h>
extern long long decimal_to_binary(int n);
/*{
    int r, sum=0, count=0;
    while(n!=0){
        r = n % 2;
        sum = sum + pow(10,count)*r;
        count++;
        n /= 2;
    }
    return sum;
}*/

int main()
{
    int a, b;
    printf("Enter a = ");
    scanf("%d", &a);
    printf("a = %d\n", decimal_to_binary(a));
    printf("Enter b = ");
    scanf("%d", &b);
    printf("b = %d\n", decimal_to_binary(b));
    int x = ~a, y = ~b; //two's complement
    printf("~a = %d;    ~b = %d\n", decimal_to_binary(x), decimal_to_binary(y));
    int c = a&b, d = a|b, e = a^b; 
    printf("a&b = %d\n", decimal_to_binary(c));
    printf("a|b = %d\n", decimal_to_binary(d));
    printf("a^b = %d", decimal_to_binary(a^b));
    return 0;
}