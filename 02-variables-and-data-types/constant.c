//constat
//constant is a datatype modifer

#include <stdio.h>
int main() {
    const float pi = 3.1415; //const - read only value
    //the value of pi gonna remain constant through the program.
    //const -- datatype modifier
    printf("the value of pi is : %f",pi);
    return 0;
}


//code snippet to check whether can we initiate any other value to the delcared constant.
#include <stdio.h>
int main(){
    const float pi = 3.1415;
    pi = 1.2345;    
    printf("the value of pi : %f",pi);
    return 0;
}

//it is a better practice to name your constants as an uppercase.