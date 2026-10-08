//while-loop

#include <stdio.h>
int main() {
    int n;

    printf("enter a number : ");
    scanf(" %d", &n);

    int i = 1;
    printf("Init of i : %d\n",i);

    while(i < n){
        printf("%d \n",i);
        i++;
        printf("updated i : %d \n",i);
    }
    printf("end of the loop");
    return 0;
}