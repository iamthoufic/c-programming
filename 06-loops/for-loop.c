//for-loop

#include <stdio.h>
int main(){
    int num = 5;
    printf("number sequence printed using the for loop : \n");
    for(int i = 1;i<= num; i++){
        printf("%d ",i);
    }
    
    printf("\n");

    int i = 1;
    printf("number sequence printed using the while loop : \n");
    while(i<=num){
        printf("%d ",i);
        i++;
    }



    return 0;
}


// #include <stdio.h>
// int main() {
//     int n, i;
//     n = 5;
//     i= 1;
//     while(i<=n){
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }