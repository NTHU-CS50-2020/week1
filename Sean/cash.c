#include <stdio.h>
#include <cs50.h>
#include <math.h>

void cal(int *money, int *change, int coin)
{
    int tmp = *money / coin;
    *money -= tmp * coin;
    *change += tmp;
}

int main(void)
{
    float c = -1.0;
    while (c < 0) 
    { 
        c = get_float("Change owed: ");
    }
    int coin = 0;
    int tmp = 0;
    int cents = round(c * 100);
    
    cal(&cents, &coin, 25);
    cal(&cents, &coin, 10);
    cal(&cents, &coin, 5);
    cal(&cents, &coin, 1);
    printf("%d\n", coin);
}