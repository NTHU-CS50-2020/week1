#include <cs50.h>
#include <stdio.h>
long Standard(long n)
{
    int count=0;
    while (n != 0) 
    {
        n /= 10;     // n = n/10
        count++;
    };

    switch (count)
                                                {/*American Express uses 15-digit numbers, 
                                                    start with 34 or 37
                                                MasterCard uses 16-digit numbers, 
                                                    start with 51, 52, 53, 54, or 55
                                                and Visa uses 13- and 16-digit numbers
                                                    start with 4 */ 
    case 15:
        printf("American Express\n");
        return  1;                              /*為甚麼這裡寫break;就跑不出來*/
    case 16:
        printf("MasterCard\n");
        return  1;
    case 13:
        printf("Visa\n");
        return  1;
    default:
        return  0;
     };
};
	
                                    /* Luhn’s Algorithm
                                        1.4003600000000014
                                        1‧
                                            2 + 0‧2 + 0‧2 + 0‧2 + 0‧2 + 6‧2 + 0‧2 + 4‧2
                                            2 + 0 + 0 + 0 + 0 + 12 + 0 + 8
                                            
                                        2. 
                                            2 + 0 + 0 + 0 + 0 + 1 + 2 + 0 + 8 = 13
                                        
                                        3.
                                            Now let’s add that sum (13) to the sum of the digits that weren’t multiplied by 2 (starting from the end):	
                                            13 + 4 + 0 + 0 + 0 + 0 + 0 + 3 + 0 = 20 
                                        
                                        4.
                                            the last digit in that sum (20) is a 0, so David’s card is legit!*/ 

int main(void)
{
    long d=0;

    do{
    long c = get_long("Number: ");
    d=c; 
    d=Standard(d);

    }while( d <= 0);
}
