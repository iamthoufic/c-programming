#include <stdio.h>
int main() {
    int n, rem, rev;

    printf("enter a number : ");
    scanf("%d", &n);

    while(n>0){
        rem = n%10;
        rev = (rev*10) + rem;
        n = n/10;
    }
    printf("reversed number : %d",rev);
    return 0;
}