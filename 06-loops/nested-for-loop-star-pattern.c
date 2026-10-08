//star pattern using a nested loops : 

// #include <stdio.h>
// int main() {
//     int n = 5;
//     for (int i = 0;i<n;i++){
//         for(int j = 0; j<n;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

/*
popular patterns to print using nested for loop

*/

// #include <stdio.h>

// int main(){
//     printf("printing star pattern using the nested loop : \n");

//     for (int i=1;i<=5;i++){
//         for(int j = 1; j <= i; j++){
//             printf("* ");
//        }
//        printf("%\n");
//     }
//     return 0;
// }



//printing inverted star pattern using the nested for loop :
#include <stdio.h>

int main(){
    printf("printing inverted star pattern using the nested loop : \n");
    for (int i = 1; i <= 5; i++){
        //  printf("i : %d",i);
        for(int j = i; j<=5; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}