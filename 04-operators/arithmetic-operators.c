//arithmetic-operators

#include <stdio.h>
int main() {
    int myAge, myDadAge;
    myAge = 15;
    myDadAge = 35;
    int sum, sub, prod, mod;
    float div;
    sum = myAge + myDadAge;
    sub = myAge - myDadAge;
    prod = myAge * myDadAge;
    div = (float) myAge / myDadAge; //for division, to get the right answer, we gotta do the typecasting.
    mod = 5 % 2; //it will get us the remainder when we divide two numbers.

    printf("mod operator : %d.\n",mod);
    printf("sum : %d\nsub : %d\nprod : %d\ndiv : %.15lf",sum,sub,prod,div); 
    return 0;
}

/*
    operators
    -> arithmetic operator :
        + - * / %

    operands - data in which operators work on.


*/