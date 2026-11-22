#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <stdbool.h>
#include <ctype.h>

bool only_digits(const char *argument);
int intArg;
char rotate (char c, int n);

int main(int argc, char *argv[])
{

    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    };

    if (only_digits(argv[1]) == false)

        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    if (only_digits(argv[1])== true)
        
        {   
            char* text = get_string("plaintext: ");
            char* newText;
            intArg = atoi(argv[1]);
            for (int i=0; text[i] != '\0'; i++)
                { 
                    char newChar = rotate(text[i], intArg);
                    newText[i] = newChar;
                }
            printf("ciphertext: %s\n", newText);
        }
 
}

bool only_digits(const char *argument)
{

    if (argument == NULL || *argument == '\0')
    {
        return false;
    }
    for (int i = 0; argument[i] != '\0'; i++)

    {
        if (!isdigit(argument[i]))

        {
            return false;
        }
    }
    return true;
}

char rotate (char c, int n) {

    if (isalpha(c) == false)
    {
        return c;
    }
    if (isupper(c))

    {
        int ascii = (int)(c);
        ascii = (ascii - 65);
        ascii = (ascii + n) % 26;
        return ((char)(ascii + 65));
    }

    if (islower(c))

    {
        int ascii = (int)(c);
        ascii = (ascii - 97);
        ascii = (ascii + n) % 26;
        return ((char)(ascii + 97));
    }

    else
    {
        return c;
    }
}