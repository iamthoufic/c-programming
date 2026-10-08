#include <stdio.h>
int main() {
    char grade = 'S';
    float cgpa = 8.91;
    double balance = 450.5667788954433221;
    double speed_of_light = 3e8; //300,000,000
    printf("my cgpa is %.2f. \n",cgpa);    
    printf("and my grade is %c. \n",grade);
    printf("my account balance is %.10lf",balance);
    printf("speed of light is %.lf",speed_of_light);
    return 0;
}


/*
float data type
- numbers with point, decimal places. 
- float generally stores upto six decimal places on its memory.
- six precision digits will be stored after the decimal.

double data type
- double can be used to store more than six digit precision atfer the decimal.
- double can store upto 15 digits of precision.

you can't define a same name or identifiers to define two data types.
the indentifier name should be unique.

*/