//while-loop-practice

#include <stdio.h>
int main() {
    int num;

    printf("enter a number : ");
    scanf("%d", &num);

    while (num>0){
        if(num <= 10){
            printf("%d\n",num);
            num--;   //just change num-- or num++ if you wanna print the numbers in descending and ascending order.
        }
        else{
            break;
        }
    }
    return 0;
}

//printing numbers in ascending order.

/*
#include <stdio.h>

int main(){
    int n;

    printf("enter a number : ");
    scanf(" %d", &n);

    while(n>0){
        if (n <= 10){
            printf("%d\n",n);
            n++;
        }
        else{
            break;
        }
    }
    return 0;
}
*/


//printing numbers in descending order.

/*
#include <stdio.h>

int main(){
    int n;

    printf("enter a number : ");
    scanf(" %d", &n);

    while(n>0){
        if (n <= 10){
            printf("%d\n",n);
            n--;
        }
        else{
            break;
        }
    }
    return 0;
}
*/