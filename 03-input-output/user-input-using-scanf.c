//user input using scanf

#include <stdio.h>
int main() {

    int age;
    char grade;
    float cgpa;
    double balance;

    printf("enter your age : "); 
    scanf("%d", &age);
    printf("enter your grade : ");
    scanf(" %c", &grade);
    printf("enter your cgpa : ");
    scanf(" %f", &cgpa);
    printf("enter your balance : ");
    scanf(" %lf", &balance);

    printf("\n");
    printf("your age is %d.\n",age);
    printf("your grade is %c. \n",grade);
    printf("your cgpa is %.2f. \n",cgpa);
    printf("your balance is %lf. \n",balance);

    printf("\n");
    printf("my age is %d and i have gotten a %c grade during fall semester.\n",age,grade);
    printf("my cgpa is %.2f and currently i am unemployed now with the bank balance %lf \n",cgpa,balance);
    printf("\n");

    int card_num, p_code;
    printf("enter your card number and passcode to check the balance : ");
    scanf("%d  %d",&card_num,&p_code);
    printf("the card number is %d and the account balance is %lf .",card_num,balance);
    
    return 0;
}