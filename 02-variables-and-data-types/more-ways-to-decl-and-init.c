//more ways to declare and initialize variables.

//method - 1
// #include <stdio.h>
// int main() {
//     int num1 = 56;
//     int num2 = 67;
//     printf("num1 : %d \n",num1);
//     printf("num2 : %d",num2);
//     return 0;
// }


#include <stdio.h>
int main() {
    int num1 = 56, num2 = 67;
    printf("num1 : %d \n",num1);
    printf("num2 : %d",num2);
    return 0;
}


// #include <stdio.h>
// int main(){
//     int num1, num2;
//     num1 = 45;
//     num2 = 67;
//     printf("num1 : %d \n",num1);
//     printf("num2 : %d",num2);
//     return 0;
// }


//same value assignment to multiple variables
#include <stdio.h>
int main(){
    int num1, num2, num3;
    num1 = num2 = num3 = 67;
    return 0;
}