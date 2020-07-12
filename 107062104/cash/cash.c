#include <stdio.h>
#include <cs50.h>
#include <math.h>

int count(int cents){
    int counts = 0;
    if(cents>=25){
        counts+=1+count(cents-25);
    }else if(cents>=10){
        counts+=1+count(cents-10);
    }else if(cents>=5){
        counts+=1+count(cents-5);
    }else if(cents>=1){
        counts+=1+count(cents-1);
    }
    return counts;
}

int main(){
    float dollars = -1;
    int cents;
    int ans = 0;
    while(dollars<0){
        dollars = get_float("Change owed: ");
        if(dollars>=0){
            cents = round(dollars * 100);
            printf("%d\n", count(cents));
        }
    }
    return 0;
}