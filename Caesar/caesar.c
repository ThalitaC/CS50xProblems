#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    //check for comand-line arguments
    if (argc != 2)
    {
        //print error mesage
        printf("ERROR! You must enter a valid positive integer key \n");
        return 1;
    }

    //iterate argv[1] and check if it is all digits
    int len = strlen(argv[1]);


    for (int i = 0; i < len; i++)
    {
        char c = argv[1][i];
        
        if isdigit(c)
        {
            //convert argv[1] to int
            const int key = atoi(argv[1]);

            //prompt user for plaintext
            string plaintext = get_string("Enter plaintext: \n");

            printf("Ciphertext: ");

            //cipher text
            for (int j = 0; j < strlen(plaintext); j ++)
            {
                //check if it is lowercase, aplly key and print
                if (isupper(plaintext[j]))
                {
                    printf("%c", ((plaintext[j] - 'A') + key) % 26 + 65);
                }
                
                //check if it is uppercase, apply key and print
                else if (islower(plaintext[j]))
                {
                    printf("%c", ((plaintext[j] - 'a') + key) % 26 + 97);
                }
                
                //if it is not a letter, print as it is
                else
                {
                    printf("%c", plaintext[j]);
                }
            }
        }

        //print new line
        printf("\n");

        //exit program
        return 0;
    }
}
