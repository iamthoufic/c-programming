//increment and decrement operators


//if i have to add one to my age

#include <stdio.h>
int main() {
    int age = 21;
    //age = age + 1;
    // age++; //easier way to increment age by adding one.
    // printf("my age is : %d",age);
    printf("pre-age : %d\n",++age);
    printf("post-age : %d\n",age++);
    printf("age : %d\n",age);
    return 0;
}

/*
++age = pre-increment operator
age++ = post-increment operator

age-- = pre-decrement operator
--age = post-decrement operator

pre-increment = the value gets updated and then prints.
post-increment = the value gets printed first and then updated to the variable.
*/