//reverse a number 

#include <stdio.h>
int main() {
    int num, rev, rem;
    num = 123;
    rem = 0;
    rev = 0;
    
    while(num>0){
        rem = num%10;
        rev = (rev * 10) + rem;
        num = num/10;
    }
    printf("%d",rev);
    return 0;
}

/*
435 = 534

43 5
4  3
0  4


5
5 x 10 + 3 = 53
53 x 10 + 4 = 534


*/

/*

*/