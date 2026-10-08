//switch statemet

#include <stdio.h>
int main() {
    char op;
    int num1,num2;
    printf("enter the arithmetic operation : ");
    scanf(" %c",&op);

    printf("enter the two numbers : ");
    scanf(" %d %d",&num1,&num2);

    // if(op=='+')
    //     printf("%d",num1+num2);
    // else if(op=='-')
    //     printf("%d",num1-num2);
    // else if(op='*')
    //     printf("%d",num1*num2);
    // else if(op='/')
    //     printf("%d",num1/num2);
    // else
    //     printf("unknown operator.");

    switch(op){
        case '+':
            printf("answer : %d",num1+num2);
            break;
        case '-':
            printf("answer : %d",num1-num2);
            break;
        case '*':
            printf("answer : %d",num1*num2);
            break;
        case '/':
            printf("answer : %.2f",num1/num2);
            break;
        default:
            printf("invalid operation.");
    }
    
    return 0;
}