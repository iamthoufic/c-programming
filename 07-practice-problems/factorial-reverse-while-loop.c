//factorial of a number

#include <stdio.h>

int main(){
    int n, i, fact;

    printf("enter a number : ");
    scanf("%d",&n);

    fact = 1;
    i = n;

    while (i>=1){
        fact = fact*i;
        i--;
    }

    printf("%d is the factorial of %d",fact,n);
    return 0;
}