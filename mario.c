#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Ask user for input
    int number;
    do
    {
        number = get_int("Heigh (integer between 1 and 8: ");
    }
    while (number < 1 || number > 8);
    
    //Make # depends on number
    int y = 0;
    int z;
    for (int i = 0; i < number; i++)
    {
        y++;
        //Loop for number of dots depends on input number and number of cycles
        z = number - y;
        for (int f = 0; f < z; f++)
        {
            printf(" ");
        }
        //Loop for hashes depends on input number and every round + 1 hash
        for (int j = 0; j < y; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
