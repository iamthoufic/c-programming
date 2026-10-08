//continue keyword :

// #include <stdio.h>
// int main() {
    
//     for(int i = 1; i<=20; i++){
//         //this if condition will skip the numbers which are multiplies of 5.
//         if (i%5 == 0){
            
//         }
//         else{
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }


/*
if (num%5 == 0) --> skip 5
*/


//anothe way to write the same code : 

// #include <stdio.h>
// int main() {
    
//     for(int i = 1; i<=20; i++){
//         //this if condition will skip the numbers which are multiplies of 5.
//         if (i%5 != 0){
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }


//try this code snippet with continue
// #include <stdio.h>
// int main() {
    
//     for(int i = 1; i<=20; i++){
//         //this if condition will skip the numbers which are multiplies of 5.
//         if (i%5 == 0){
//             continue;
//         }
//         else{
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }


#include <stdio.h>
int main() {
    
    for(int i = 1; i<=20; i++){
        //this if condition will skip the numbers which are multiplies of 5.
        if (i%5 == 0){
            //continue;
        }
        printf("%d ",i); //it will every number sequene if you comment continue
    }
    return 0;
}