//sum of all numbers from 0 to 10 using for loop

//sum - for loop in reveerse
// #include <stdio.h>
// int main() {
//     int num = 10;
//     int sum = 0;

//     for (int i = num; i>=0; i--){
//         sum += i;
//     }
//     printf("total sum : %d",sum);
//     return 0;
// }


//sum - for loop in forward
#include <stdio.h>
int main() {
    int num = 10;
    int sum = 0;

    for (int i = 0; i<=num; i++){
        sum += i;
    }
    printf("total sum : %d",sum);
    return 0;
}


// both of these blocks if executed should yield 55.
//if not, your code and the logic is wrong.