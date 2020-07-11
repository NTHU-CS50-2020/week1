#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h = 0;
    while (h > 8 || h < 1) 
    { 
        h = get_int("Height: ");
    } 
    for (int i = 1; i <= h; i++)
    {
        for (int j = h; j > i; j--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("  ");
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }        
        printf("\n");
    }
}