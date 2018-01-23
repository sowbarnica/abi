#include <stdio.h>
#include <math.h>

int main()
{
    int l, h, i, t1, t2, rem, d = 0, res = 0;

    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &l, &h);
    printf("Armstrong numbers between %d an %d are: ", l, h);

    for(i = l + 1; i < h; ++i)
    {
        t2 = i;
        t1 = i;
        while (t1 != 0)
        {
            t1 /= 10;
            ++d;
        }
        while (t2 != 0)
        {
            rem = t2 % 10;
            res += pow(rem, d);
            t2 /= 10;
        }
        if (res == i) {
            printf("%d ", i);
}
        d =0;
        res = 0;

    }
    return 0;
}

