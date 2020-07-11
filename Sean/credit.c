#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <stdlib.h>

bool luhn(int d[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2)
        {
            if (d[i] * 2 < 10)
            {
                sum += d[i] * 2;
            }
            else
            {
                sum += (d[i] * 2) / 10 + (d[i] * 2) % 10;
            }
        }
        else
        {
            sum += d[i];
        }
    }
    return (sum % 10 == 0) ? 1 : 0;
}

int main(void)
{
    long credit = get_long("Number: ");
    /* 
    AMEX: 15 digits, 34,37
    MASTERCARD: 16 digits, 51,52,53,54,55
    VISA: 13, 16 digits, 4
    */
    int nDigits = floor(log10(labs(credit))) + 1;
    int digits[nDigits];
    for (int i = 0; i < nDigits; i++)
    {
        digits[i] = credit % 10;
        credit /= 10;
    }
    switch (nDigits)
    {
        case 15:
            if (digits[nDigits - 1] == 3 && (digits[nDigits - 2] == 4 || digits[nDigits - 2] == 7)) 
            {
                if (luhn(digits, nDigits))
                {
                    printf("AMEX\n");
                    break;
                }
            }
            else
            {
                printf("INVALID\n");
                break;
            }
        case 13:
            if (digits[nDigits - 1] == 4)
            {
                if (luhn(digits, nDigits))
                {
                    printf("VISA\n");
                    break;
                }
            }
            else
            {
                printf("INVALID\n");
                break;
            }
        case 16:
            if (digits[nDigits - 1] == 4)
            {
                if (luhn(digits, nDigits))
                {
                    printf("VISA\n");
                    break;
                }
            }
            else if (digits[nDigits - 1] == 5 && digits[nDigits - 2] >= 1 && digits[nDigits - 2] <= 5)
            {
                if (luhn(digits, nDigits))
                {
                    printf("MASTERCARD\n");
                    break;
                }
            }
            else
            {
                printf("INVALID\n");
                break;
            }
        default :
            printf("INVALID\n");
            break;
    }
}