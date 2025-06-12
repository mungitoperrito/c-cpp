#include <cs50.h>
#include <stdio.h>

void print_char_string(int num_chars, char character);

int main(void)
{
    print_char_string(4, '?');
    printf("\n");
    return 0;
}

// Print a character num_chars times
void print_char_string(int num_chars, char character)
{
    int i;

    for (i = 0; i < num_chars; i++)
    {
        printf("%c", character);
    }
}
