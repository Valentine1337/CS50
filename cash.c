#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //Ask for money
    float number;
    do
    {
        number = get_float("Cash: ");
    }
    while (number < 0.0);
    
    //Convert this number to amount of cents
    int cents = round(number * 100);
    
    //Math for quarters
    int total = 0;
    for (int j = 0; cents - 25 >= 0; j++)
    {
        total++;
        cents = cents - 25;
    }
        
    //Math for dimes
    for (int j = 0; cents - 10 >= 0; j++)
    {
        total++;
        cents = cents - 10;
    }
    
    //Math for nickels
    for (int j = 0; cents - 5 >= 0; j++)
    {
        total++;
        cents = cents - 5;
    }
    
    //Math for pennies
    for (int j = 0; cents - 1 >= 0; j++)
    {
        total++;
        cents = cents - 1;
    }
    
    //Print result
    printf("Total coins: %i\n", total);
}
