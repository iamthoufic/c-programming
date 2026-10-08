/*
practice problems.
    - count of number of digits in a number.
    - sum of digits using while loop
    - reverse a number.
    - check if a number is a palindrome.

*/


//count the number of digits in a number 
#include <stdio.h>
int main() {
    int num = 4356789;
    int count = 0;

    while(num>0) {
        count++;
        num = num/10;
    }
    printf("number of digits : %d",count);
    return 0;
}


/*
decimal system of the numbe r
435 = 4*100 + 3*10 + 5


435
-> divide it by 10 
-> 43 as quotient and 5 as the remainder.

43 
-> divide it 10
-> 4 as quotient and 3 as the remainder.

4 
-> divide it by 10
-> 0 as quotient and 4 as the remainder.

*/