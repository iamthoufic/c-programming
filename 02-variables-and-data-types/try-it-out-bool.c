#include <stdio.h>
#include <stdbool.h>

int main() {
    // bool decision = !(1 && 0);
    bool decision = !(true && false);
    //either you can denote true and false in terms of 1 and 0, true or false
    printf("decision : %d",decision);
    return 0;
}

/*
    bool decision = !(1 && 0);
    1 and 0 = 0
    not 0 = 1

    therefore, the output will be one.
*/