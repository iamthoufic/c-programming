//rules of identifier naming :

#include <stdio.h>
int main() {
    int age, age_45,_age, Age;
    age = 45;
    age_45 = 45;
    _age = 67;
    Age = 56;
    //int 1_age = 45;
    //it would return us invalid suffix.

    printf("age : %d \n",age);    
    printf("Age : %d",Age);
    return 0;
}

/*
1. contains letters, digits and underscores.
2. begin with a letter or an underscore.
3. case sensitive.

should not use these to name an identifier :
4. whitespaces or special character.
5. keywords.
*/