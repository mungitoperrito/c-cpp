#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define EXIT_BAD_ARGS 1
#define EXIT_BAD_KEY 1
#define NUMBERS ((current_ch >= 48) && (current_ch <= 57)) // ASCII 0-9
#define LOWER_CASE ((current_ch >= 'a') && (current_ch <= 'z'))
#define UPPER_CASE ((current_ch >= 'A') && (current_ch <= 'Z'))

// PROTOTYPES
int check_args(int argc, char *argv[]);
int check_key(string key);
string get_plaintext();
char *encrypt_plaintext(string plaintext, int key);

int main(int argc, char *argv[])
{
    string plaintext;
    char *cyphertext;
    int key;

    // Verify that there is one command line argument
    if (check_args(argc, argv) == -1)
    {
        printf("Provide an integer key\n");
        return EXIT_BAD_ARGS;
    }

    // Check that the argument is an integer
    key = check_key(argv[1]);
    if (key == -1)
    {
        printf("Usage: ./caesar key\n");
        return EXIT_BAD_KEY;
    }

    // Get the text
    plaintext = get_plaintext();

    // Encrypt the text
    cyphertext = encrypt_plaintext(plaintext, key);

    // Print encrypted output
    printf("ciphertext: %s\n", cyphertext);

    return EXIT_SUCCESS;
}

// Verify that there is one argument
int check_args(int argc, char *argv[])
{
    int args_ok;

    args_ok = (argc == 2) ? 0 : -1;

    return args_ok;
}

// Verify key is a non-negative integer
int check_key(string key_str)
{
    char current_ch;
    int return_value = 1;
    int key_str_length = strlen(key_str);
    int key;
    int flag = 0;

    for (int i = key_str_length - 1; i >= 0; i--)
    {
        current_ch = key_str[i];
        if (!NUMBERS)
        {
            flag = -1;
            break;
        }
    }

    // Return integer or return -1 if there were problems
    key = (!flag) ? atoi(key_str) : -1;

    return key;
}

// Get the plaintext input string
string get_plaintext()
{
    string plaintext = NULL;

    do
    {
        plaintext = get_string("plaintext:  ");
    }
    while (plaintext == NULL);

    return plaintext;
}

// Encrypt the input string, use key from command line args
char *encrypt_plaintext(string plaintext, int key)
{
    int rotate = key % 26;
    int txt_length = strlen(plaintext);
    int wrap;
    char *cyphertext;
    const int LOWER_MIN = 'a';
    const int LOWER_MAX = 'z';
    const int UPPER_MIN = 'A';
    const int UPPER_MAX = 'Z';
    char current_ch;

    cyphertext = (char *) malloc((txt_length + 1) * sizeof(char));
    if (cyphertext == NULL)
    {
        printf("Can't get memory.\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < txt_length; i++)
    {
        current_ch = plaintext[i];
        if (LOWER_CASE)
        {
            if (rotate + current_ch > LOWER_MAX)
            {
                wrap = (int) (current_ch + rotate - LOWER_MAX) - 1;
                current_ch = (int) (LOWER_MIN + wrap);
            }
            else
            {
                current_ch += rotate;
            }
            cyphertext[i] = current_ch;
        }
        else if (UPPER_CASE)
        {
            if (rotate + current_ch > UPPER_MAX)
            {
                wrap = (int) (current_ch + rotate - UPPER_MAX) - 1;
                current_ch = (int) (UPPER_MIN + wrap);
            }
            else
            {
                current_ch += rotate;
            }
            cyphertext[i] = current_ch;
        }
        cyphertext[i] = current_ch;
    }

    cyphertext[txt_length] = '\0'; // Null terminator

    return cyphertext;
}
