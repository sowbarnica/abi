#include <stdio.h>
int main()
{
    char d;
    int LowercaseVowel, UppercaseVowel;

    printf("Enter an alphabet: ");
    scanf("%c",&d);
    LowercaseVowel = (d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u');
    UppercaseVowel = (d == 'A' || d == 'E' || d == 'I' || d == 'O' || d == 'U');
    if (LowercaseVowel && UppercaseVowel)
        printf("%c is a vowel.", d);
    else
        printf("%c is a consonant.", d);
    return 0;
}
