#include <stdio.h>
int main() {
    int num1, num2;
    printf("enter the num1 : ");
    scanf("%d",&num1);

    printf("enter the num2 : ");
    scanf(" %d",&num2);

    if (num1 > num2){
        printf("%d is greater than %d\n",num1,num2);
    }
    else if(num2 > num1){
        printf("%d is greater than %d\n",num2,num1);
    }
    else{
        printf("%d and %d are the same numbers.",num1,num2);
    }
    return 0;
}

