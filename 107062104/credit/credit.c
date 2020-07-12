#include <stdio.h>
#include <cs50.h>

bool numberIsValid(long number){
    if(!(number/1000000000000000 == 4 || number / 10000000000000 == 4))
    {
        //printf("%ld %ld %ld\n", number, number/1000000000000000, number/1000000000000);
        return false;
    }
    int count = 0;
    long temp = number;
    for(int i = 0; i<16; i++){
        if(i%2 == 1){
            int tmp = (temp%10) * 2;
            count += tmp/10 + tmp%10;
        }
        else count += temp%10;
        //printf("%d with %ld\n", count, temp%10);
        temp /= 10;
    }
    //printf("%d\n", count);
    return (count % 10 == 0)? true:false;
}

int main(){
    long number = get_long("Number: ");
    bool isValid = numberIsValid(number);
    if(number / 10000000000000 == 34 || number / 10000000000000 == 37) printf("AMEX\n");
    else if(number / 100000000000000 >= 51 && number / 100000000000000 <= 55) printf("MASTERCARD\n");
    else if(isValid) printf("VISA\n");
    else printf("INVALID\n");
    return 0;
}