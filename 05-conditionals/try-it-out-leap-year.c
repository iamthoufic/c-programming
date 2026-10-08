//try-it-ot : leap year 

#include <stdio.h>
int main() {
    int year;

    printf("enter the year : ");
    scanf("%d", &year);

    if (year%4 == 0){
        printf("%d is a leap year.",year);
    }

    else{
        printf("%d is not a leap year.",year);
    }
    
    return 0;
}

/*
to check, if a year is a leap year.

if the year is perfectly divisible by 400 or 4 = leap year

x%y == 0 --> perfectly divisble by something yields us zero.
this logic can be used to find the leap year.

*/