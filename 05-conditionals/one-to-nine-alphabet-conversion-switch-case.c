//try-it-out
//get a number between 1 to 9 and print that number in alphabet using the switch case :


#include <stdio.h>
int main() {
    char num;

    printf("Enter a number between 1 to 9 : ");
    scanf("  %c", &num);

    switch(num){
        case '1':
            printf("one");
            break;
        case '2':
            printf("two");
            break;
        case '3':
            printf("three");
            break;
        case '4':
            printf("four");
            break;
        case '5':
            printf("five");
            break;
        case '6':
            printf("six");
            break;
        case '7':
            printf("seven");
            break;
        case '8':
            printf("eight");
            break;
        case '9':
            printf("nine");
            break;
        default :
            printf("invalid input.");
    }
    
    return 0;
}


//if i want take int as the input, then i should not be using '' in the case.
//the number should directly be given if the input datatype is integer.

#include <stdio.h>
int main() {
    int num;

    printf("Enter a number between 1 to 9 : ");
    scanf("  %d", &num);

    switch(num){
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;
        default :
            printf("invalid input.");
    }
    
    return 0;
}