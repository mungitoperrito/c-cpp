#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#define MAX_NAME_SIZE 100


void cs50_style()
{
    string name;

    name = get_string("What's your name? ");

    printf("Hola, hola %s!\n", name);
}


void general_style()
{
    char name[MAX_NAME_SIZE];
    char c;
    int num_chars = 0;

    printf("What's your name? ");

    while((c = getchar()) != EOF){              /* Allows spaces in names*/
       if(c == '\n')
          break;

       if(num_chars < MAX_NAME_SIZE)            /* Protects from too long lines */
          name[num_chars] = c;

       num_chars = num_chars + 1;
   }

    printf("Hola, hola %s!\n", name);
}


int main()
{
    cs50_style();
    general_style();

    return EXIT_SUCCESS;
}
