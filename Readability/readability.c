#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    
    //prompt user for input text
    string text = get_string("Text: \n");
    
    //variables
    int cletters = 0;
    int cwords = 1;
    int csentences = 0;
    int len = strlen(text);
    
    //for loop to count letters, words and sentences
    for (int i = 0; i < len; i++)
    {
        //count letters
        char cha = text[i];
        if (isalpha(cha))
        {
            cletters++;
        }
        //count words
        if (isspace(cha))
        {
            cwords++;
        }
        
        //count sentences
        if (cha == '.' || cha == '?' || cha == '!')
        {
            csentences++;
        }
    
    
        //coleman-liau index = 0.0588 * L - 0.296 * S - 15.8
        double  l = ((double) cletters / cwords) * 100;
        double  s = ((double) csentences / cwords) * 100;
        double  index = 0.0588 * l - 0.296 * s - 15.8;
    
        if (index < 0)
        {
            printf("Before Grade 1\n");
        }
    
        else if (index > 16)
        {
            printf("Grade 16+\n");
        }
    
        else
        {
            printf("Grade %.0f\n", round(index));
        }
    }

