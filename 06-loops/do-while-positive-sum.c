//write a program that repeatedly asks the user
//to enter a positive number.
//If the user enters a negative number or zero,
//the program should stop and display the sum of all positive numbers entered.

#include <stdio.h>
int main() {
    int sum = 0;
    int num;

    
    do{
        printf("enter a positive number : ");
        scanf("%d",&num);
        if (num > 0)
            sum += num;
    } while(num > 0);
    printf("total sum : %d",sum);
    return 0;
}