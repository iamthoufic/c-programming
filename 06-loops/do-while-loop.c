//do while loop


//print hi hi hi! for 5 times
// #include <stdio.h>
// int main() {
//     int n = 5;
//     while(n > 0){
//         printf("hi hi hi!\n");
//         n--;
//     }
//     return 0;
// }

// while loop - entry control loop


// do while

// #include <stdio.h>

// int main(){
//     int n = 5;

//     do {
//         printf("hi hi hi!\n");
//         n--;
//     } while(n>0);
//     return 0;
// }


//do while -- it has to execute or do whatever is inside the do block while the while condition is true or satisfied.


//while - entry control loop
//do while - exit control loop

// for example :

#include <stdio.h>

int main(){
    int n = 0;

    do {
        printf("hi hi hi!\n");
        n--;
    } while(n>0);
    // this is an exit control loop eventhough that the while condition is not met.
    //it will execute the block atleast once.
    return 0;
}