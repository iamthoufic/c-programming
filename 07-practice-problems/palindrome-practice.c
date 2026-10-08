//check whether a number is a palindrome or not?

#include <stdio.h>
int main() {
    int num, rem, rev, i;

    printf("enter a number : ");
    scanf("%d", &num);
    i = num;
    rev = 0;

    //reversing a number 
    while(num>0){
        rem = num %10;
        rev = (rev*10) + rem;
        num = num/10;
    }
    printf("reveresed number : %d\n",rev);

    if (i == rev){
        printf("It is a palindrome.");
    }
    else{
        printf("It is not a plaindrome.");
    }
    return 0;
}