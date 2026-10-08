//try it out - scanf exercise

#include <stdio.h>
int main() {
    char alphabet;
    printf("enter an alphabet character : ");
    scanf("%c", &alphabet);
    printf("the entered character is %c.\nthe corresponding size of the character is %zu.",alphabet,sizeof(alphabet));
    return 0;
}