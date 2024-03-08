#include<stdio.h>
#include<math.h>

extern long long decimal_to_binary(int n){
    int r, sum=0, count=0;
    while(n!=0){
        r = n % 2;
        sum = sum + pow(10,count)*r;
        count++;
        n /= 2;
    }
    return sum;
}
