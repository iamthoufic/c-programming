//comparison operators

#include <stdio.h>
#include <stdbool.h>

int main() {
    int age = 24;
    int legalAge = 18;

    bool isAdult  = true;  //this will return 1.
    bool isAdult = false;  //this will return 0.
    bool isAdult = age > legalAge;

    printf("%d\n",age > legalAge); 
    printf("%d",isAdult);
    return 0;
}


/*
if the age is greater than the legal age -- then the output will be one (true).
if the age is lesser than the legal age -- then the output will be zero (false).
*/

/*
boolean data type can be used to store these kinda outputs where we have true or false.
creating boolean datatype is not easy. cause boolean datatype is not a primary datatype.
*/


/*
These are all the comparison operators :

> - greater than
< - lesser than
>= - greater than or eqaul to
<= - lesser than or eqaul to
== - equal  to
!= - not equal to

*/