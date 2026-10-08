#include <stdio.h>
#include <stdbool.h>

int main() {
    //Your Code goes here!
    int age;
    char gender;

    printf("enter your age : ");
    scanf("%d", &age);

    printf("enter your gender : ");
    scanf(" %c", &gender);

    printf("your age : %d\n",age);
    printf("your gender : %c\n",gender);
    // printf();

    bool isMan = age >= 18 && gender == 'M';
    printf("whether the person is a man? :  %d\n",isMan);

    bool isWoman = age >= 18 && gender == 'F';
    printf("whether the person is a woman? : %d\n",isWoman);
    return 0;
}

/*
three logical operators
    -> AND - && = logical and operator
    -> OR - || = logical or operator
    -> NOT - ! = logical not operator
truth table

AND 
A  B  Output
0  0  0 
0  1  0
1  0  0
1  1  1 

OR

A  B  Output
0  0  0
0  1  1
1  0  1
1  1  1


NOT

A  Output  
0  1
1  0

*/