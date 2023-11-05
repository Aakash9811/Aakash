#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start_size, end_size, current_population, no_years = 0;

    // Prompt for start size
    do
    {
        start_size = get_int("Start Size: ");
    }
    while (start_size < 9);

    // Prompt for end size
    do
    {
        end_size = get_int("End Size: ");
    }
    while (end_size < start_size);

    // Calculate number of years until we reach threshold
    current_population = start_size;
    while (current_population < end_size)
    {
        current_population += current_population / 3 - current_population / 4;
        no_years++;
    }

    // Print number of years
    printf("Years: %i\n", no_years);

    return 0;
}
