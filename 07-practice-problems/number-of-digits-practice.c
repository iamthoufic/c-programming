#include <stdio.h>
int main() {
    int num = 435;
    int count = 0;

    while(num>0){
        count++;
        num /= 10; 
    }

    printf("the number of digit is %d.",count);
    
    return 0;
}