// NOT COMPLETE


#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CYPHER_KEY_LENGTH 26
#define EXIT_BAD_ARGS 1
#define EXIT_BAD_KEY 1


// PROTOTYPES
int check_num_of_args(int argc, char *argv[]);
char *get_substitution_key(char *text_string);

// MAIN
int main(int argc, char *argv[])
{
    char *cypherkey;
    char *cyphertext;
    char *plaintext;

    // Check arguments
    // Verify that there is one command line argument
    if (check_num_of_args(argc, argv) == -1)
    {
        printf("Provide a 26 character key.\n");
        return EXIT_BAD_ARGS;
    }

    // Get the substitution key
    cypherkey = get_substitution_key(argv[1]);
    printf("DEBUG ARGV: %s\n", argv[1]);
    printf("DEBUG CK: %s\n", cypherkey);

    // Get the plaintext input
    string plaintext = get_plaintext();

    // Encrpyt the plaintext
    // Print the cyphertext

    cyphertext = "DEBUG"; // DEBUG
    printf("ciphertext: %s\n", cyphertext);

    return EXIT_SUCCESS;
}

// FUNCTIONS
// Verify that there is one argument
int check_num_of_args(int argc, char *argv[])
{
    int args_ok;

    args_ok = (argc == 2) ? 0 : -1;

    return args_ok;
}

// Check that the key conforms to requirements
char * get_substitution_key(char * text_string)
{
    char *key_buffer = (char *)malloc(sizeof(char) * CYPHER_KEY_LENGTH);

    // Verify length
    if (strlen(text_string) != CYPHER_KEY_LENGTH)
    {
        printf("Key must be %d characters long.\n", CYPHER_KEY_LENGTH);
        exit(EXIT_BAD_KEY);
    }

    key_buffer[0] = 'D'; # DEBUG - DEV

    return key_buffer;
}

