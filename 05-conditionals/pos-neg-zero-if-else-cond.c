#include <stdio.h>
int main() {
    int num;
    printf("enter a number : ");
    scanf("%d",&num);
    if (num == 0){
        printf("%d is zero.",num);
    }
    else if(num > 0){
        printf("%d is a positive number.",num);
    }
    else{
        printf("%d is a negative number.",num);
    }
    return 0;
}