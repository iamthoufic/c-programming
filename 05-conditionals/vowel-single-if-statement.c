#include <stdio.h>
int main() {
    char alphabet;
    printf("enter an alphabet : ");
    scanf("%c",&alphabet);

    if (alphabet == 'a' || alphabet == 'A' || alphabet == 'e' || alphabet == 'E' || alphabet == 'i' || alphabet == 'I' || alphabet == 'O' || alphabet == 'o' || alphabet == 'u' || alphabet == 'U')
        printf("vowel");
    else
        printf("consonant");  
    return 0;
}