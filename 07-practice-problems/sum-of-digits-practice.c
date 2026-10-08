//sum of digits using while loop

#include <stdio.h>
int main() {
    int num, sum, rem;

    num = 1234;
    sum = 0;

    while(num>0){
        rem = num%10;
        sum = sum + rem;
        num = num/10;
    }
    printf("sum of the digits of %d : %d",num,sum);
    return 0;
}

