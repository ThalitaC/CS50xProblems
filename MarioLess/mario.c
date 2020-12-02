#include <stdio.h>

#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        //prompt user for size
        n = get_int("Size: ");
    }
    //rejects non numerical and non integer inputs
    while (n < 1 || n > 8);
  
    //make lines
    for (int i = 1; i <= n; i++)
    {
        //make spaces
        for (int k = n - 1; k >= i; k--)
        {
            printf(" ");
        }
        //make #
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
      
        //next line
        printf("\n");
    }
  
}