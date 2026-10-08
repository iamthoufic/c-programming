//nested if-else loop



//if-else if ladder
// #include <stdio.h>
// int main() {
//     int age;
//     char gender;

//     printf("enter your age : ");
//     scanf(" %d", &age);

//     printf("enter your gender : ");
//     scanf(" %c", &gender);

//     if (age >= 18 && gender == 'M'){
//         printf("you are a man.");
//     }

//     else if (age < 18 && gender == 'M'){
//         printf("you are a boy.");
//     }
    
//     else if (age >= 18 && gender == 'F'){
//         printf("you are a woman.");
//     }

//     else{
//         printf("you are a girl.");
//     }
//     return 0;
// }


/*
18+ and M = man
18- and M = boy

18+ and F = woman 
18- and F = girl 
*/

#include <stdio.h>

int main() {
    int age;
    char gender;

    printf("enter your age : ");
    scanf(" %d", &age);

    printf("enter your gender : ");
    scanf(" %c", &gender);

    if (age >= 18){
        if(gender == 'M'){
            printf("you are a man.");
        }
        else{
            printf("you are a woman.");
        }
    }

    else{
        if (gender == 'M'){
            printf("you are a boy.");
        }
        else{
            printf("you are a girl");
        }
    }

    return 0;
}