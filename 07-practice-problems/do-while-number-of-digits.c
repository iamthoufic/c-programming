//number of digits using do while loop


#include <stdio.h>
int main() {
    int num, count;

    printf("enter a number : ");
    scanf("%d",&num);
    count = 0;

    if (num == 0)
        printf("num of digit : 1.\n");
    else{
        do{
        count = count+1;
        num = num/10;
        } while (num>0);
        printf("num of digits : %d",count);
    }
    
    return 0;
}