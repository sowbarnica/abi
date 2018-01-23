#include <stdio.h>
int main()
{
    int s, ri = 0, rem, oi;

    printf("Enter an integer: ");
    scanf("%d", &s);

    oi = s;
    while( s!=0 )
    {
        rem = s%10;
        ri = ri*10 + rem;
        s/= 10;
    }
    if (oi == ri)
        printf("%d is a palindrome.", oi);
    else
        printf("%d is not a palindrome.", oi);
    
    return 0;
}
