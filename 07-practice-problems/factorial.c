//factorial of a number 

#include <stdio.h>
int main() {
    int n;

    printf("enter a number : ");
    scanf(" %d", &n);

    int i = 1;

    while (n>0){
        i = i*n;
        n--;  
    }
     printf("%d \n",i);
    return 0;
}