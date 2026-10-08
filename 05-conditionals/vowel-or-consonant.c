#include <stdio.h>
int main() {
    char alphabet;
    printf("enter an alphabet : ");
    scanf("%c",&alphabet);

    if (alphabet == 'a' || alphabet == 'A'){
        printf("vowel");
    }

    else if (alphabet == 'e' || alphabet == 'E'){
        printf("vowel");
    }

    else if (alphabet == 'i' || alphabet == 'I'){
        printf("vowel");
    }

    else if (alphabet == 'o' || alphabet == 'O'){
        printf("vowel");
    }

    else if (alphabet == 'u' || alphabet == 'U'){
        printf("vowel");
    }

    else{
        printf("consonant");
    }

    
    return 0;
}