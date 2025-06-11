#include <cs50.h>
#include <stdio.h>

int main()
{
    int x = get_int("X: ? ");
    int y = get_int("Y: ? ");

    /* Normal if-else */
    if (x > y)
    {
        printf("%d is greater than %d\n", x, y);
    }
    else if (y > x)
    {
        printf("%d is greater than %d\n", y, x);
    }
    else
    {
        printf("%d is equal to %d\n", x, y);
    }



    /* Ternary */
    printf("Ternary\n");
    x > y ? printf("%d is greater than %d\n", x, y) :
            y > x ? printf("%d is greater than %d\n", y, x) :
            printf("%d is equal to %d\n", x, y);

    return 0;
}
