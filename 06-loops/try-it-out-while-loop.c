//while loop -- jump in the steps of 2
//print all the numbers from 1 to n.

#include <stdio.h>
int main() {
    int n,i,ans;
    printf("enter a number : ");
    scanf("%d", &n);

    i = 1;
    ans = 0;

    while(i<=n){
        ans = 0+i;
        printf("The number sequence after skipping a step : %d\n",ans);
        i+=2;
    }
    
    return 0;
}