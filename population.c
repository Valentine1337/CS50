// CONDITION:
// We have a population of N llamas. Each year, N / 3 new llamas are born, and N / 4 llamas pass away.



#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for start size
    int start;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);

    // Prompt for end size
    int end;
    do
    {
       end = get_int("End size: ");
    }
    while (end < start);
   
    // Calculate number of years until we reach threshold
    int years = 0;
    for(int i=0; i<=years & start<end; i++)
    {
    years++;
    start = start + (start / 3) - (start / 4);
    }

    // Print number of years
    printf("Years: %i\n", years);

}
