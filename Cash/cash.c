#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)

{

    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;


    //25 10 5 1
    float cash;
    //prompt user for change owed value
    do
    {
        cash = get_float("Change owed\n");
    }
    
    //repete until get a positive number
    while (cash < 0);
    
    //turn float dollar into integer cents
    int cents = round(cash * 100);
    
    //count quarters
    while (cents - 25 >= 0)
    {
        cents -= 25;
        quarters++;
    }
    
    //count dimes
    while (cents - 10 >= 0)
    {
        cents -= 10;
        dimes++;
    }
    
    //count nickels
    while (cents - 5 >= 0)
    {
        cents -= 5;
        nickels++;
    }
    
    //count pennies
    while (cents - 1 >= 0)
    {
        cents -= 1;
        pennies++;
    }

    int totalCoins = quarters + dimes + nickels + pennies;
    printf("total coins number: %i\n", totalCoins);
}