#include <stdio.h>
int main()
{
    int num, on, rem, res= 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &num);

    on = num;

    while (on != 0)
    {
        rem = on%10;
        res += rem*rem*rem;
        on /= 10;
    }

    if(res == num)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);

    return 0;
}

