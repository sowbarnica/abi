#include <stdio.h>
int main()
{
    int d, j, f = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&d);

    for(j=2; j<=d/2; ++j)
    {
        if(d%i==0)
        {
            f=1;
            break;
        }
    }

    if (f==0)
        printf("%d is a prime number.",d);
    else
        printf("%d is not a prime number.",d);
    
    return 0;
}
