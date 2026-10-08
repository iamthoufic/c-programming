//type-conversion

#include <stdio.h>
int main() {

    int num1 = 9.8;     // c compiler implicitly converted the data type of float into int.
    float num2 = 9;
    float intdiv = 7/6;
    float div =7/6.0;

    float div1 = (float) 7/6;
    int sum1 = 23.67;
    int sum2 = (int) 56.67;

    float tryitout_exer = (int)7.8/7;

    printf("num1 : %d\n",num1);
    printf("num2 : %f\n",num2);
    printf("div : %f\n",div);  //it uses integer division to perform the calculation.
    printf("int-div : %f\n",intdiv);
    printf("div1 : %f\n",div1);
    printf("sum1 : %d\n",sum1);
    printf("sum2 : %d\n",sum2);
    printf("tryout example : %f",tryitout_exer);


    return 0;
}


/*
implicity type conversion is done automatically.


int divided by int == int
we won't get the correct answer if this the division is not perfect.


float div = (float) 7/6;
explicit type conversion -> 

*/