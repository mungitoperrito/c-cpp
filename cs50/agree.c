#include <cs50.h>
#include <stdio.h>

int main()
{
    char c = get_char("Do you agree: ");

    if ((c == 'y') || (c == 'Y'))
    {
        printf("Yes\n");
    }
    else if ((c == 'n') || (c == 'N'))
    {
        printf("No\n");
    }
    else
    {
        printf("Bad response\n");
    }

    return 0;
}

