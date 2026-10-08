//conditional-statements
//if-else conditions

#include <stdio.h>
#include <stdbool.h>

int main() {
    int age;

    printf("enter your age : ");
    scanf("%d",&age)
;    
    // if (age >= 15){
    //     printf("you are an adult.");
    // }
    // else{
    //     printf("you are not an adult");
    // }
    
    bool isAdult = (age >= 18);
    // printf("isAdult : %d\n",isAdult); 

    if (isAdult){
        printf("you are an adult.");
    } 

    else{
        printf("you are not an adult.");
    }
    
    return 0;
}

/*
conditional statements

if my age is more than 18, then i am an adult

*/