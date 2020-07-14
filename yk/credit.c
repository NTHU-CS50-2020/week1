#include <cs50.h>
#include <stdio.h>

void verify(long);

int main(){
    long num;
    do{
        num = get_long("Number: ");
    }while(num < 0);

    verify(num);

    return 0;
}

void verify(long num){
    //luhn's algo
    int checkSum = 0;
    for(long i = num/10; i > 0; i /= 100){
        int tmp = (i % 10) * 2;
        checkSum += tmp%10 + tmp/10;
    }
    for(long i = num; i > 0; i /= 100)
        checkSum += i%10;

    //output
    num /= 1000000000000;
    if(checkSum % 10 == 0){
        if(num < 10){
            //13 digits
            if(num == 4){
                printf("VISA\n");
                return;
            }
        }else if(num < 1000){
            //15 digits
            if(num / 10 == 34 || num / 10 == 37){
                printf("AMEX\n");
                return;
            }
        }else if(num < 10000){
            //16 digits
            if(num / 100 > 50 && num / 100 < 56){
                printf("MASTERCARD\n");
                return;
            }else if(num / 1000 == 4){
                printf("VISA\n");
                return;
            }
        }
    }
    printf("INVALID\n");
}