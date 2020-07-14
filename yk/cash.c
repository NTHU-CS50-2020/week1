#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(){
    float input;
    do{
        input = get_float("Change owed: ");
    }while(input < 0);

    int cents = round(input * 100);
    int answer = 0;
    answer += cents/25;
    cents %= 25;
    answer += cents/10;
    cents %= 10;
    answer += cents/5;
    cents %= 5;
    answer += cents;

    printf("%d\n", answer);

    return 0;
}