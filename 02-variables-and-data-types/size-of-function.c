//size of function

#include <stdio.h>
int main() {
    int sum = 34;
    char grade = 'S';
    float cgpa = 8.91;
    double balance = 100000.2856;
    printf("sum : %d \n",sum);
    printf("size of int : %d bytes. \n",sizeof(sum));
    printf("size of char : %d bytes. \n",sizeof(grade));
    printf("size of float : %d bytes. \n",sizeof(cgpa));
    printf("size of double : %d bytes. \n",sizeof(balance));
    return 0;
}

/*
sizeof -- 
8 bits = 1 byte
*/