#include <stdio.h>
int main()
{
    char d;
    printf("Enter a character: ");
    scanf("%c",&d);

    if( (d>='a' && d<='z') || (d>='A' && d<='Z'))
        printf("%c is an alphabet.",d);
    else
        printf("%c is not an alphabet.",d);

    return 0;
}
