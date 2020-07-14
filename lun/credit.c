#include <cs50.h>
#include <stdio.h>
bool Algorithm(long i)
{
	return true;
		
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
                                        
}

int main(void)
{
    long d=0;
     
    do{
	    	
	    long c = get_long("Number: ");
	    d=c;
	
	    int count=0;        //有幾個位數
	    while (c!= 0) 
	    {
	        c/= 10;     // n = n/10
	        count++;
	    };
	    
	    bool t=Algorithm(c);       //不能+是甚麼
	    if(t){
	    switch(count)
	    {
	    case 15:
	 	if(d / 10000000000000 == 34 || d / 10000000000000 == 37) 
		{printf("American Express\n");	break;	 }      //不寫break的話會一直往下跑                        
	    case 16:
	        if(d / 100000000000000 >= 51 && d / 100000000000000 <= 55) 
			{printf("MasterCard\n");	break;	 } 
	        else if(d / 1000000000000000 == 4 || d / 1000000000000 == 4) 
	        {
	            printf("Visa\n");	break;	
	        }   
	    case 13:
	        if(d / 1000000000000000 == 4 || d / 1000000000000 == 4) 
	        {
	            printf("Visa\n");		break;
	        }   
	    default:
	        d=0;
	
	     };}
	     
    }while( d <= 0);        //要用do之外的變數
}

/*
long Standard(long n)
{
    int count=0;
    while (n != 0) 
    {
        n /= 10;     // n = n/10
        count++;
    };

    switch (count)
    {
                                                American Express uses 15-digit numbers, 
                                                    start with 34 or 37
                                                MasterCard uses 16-digit numbers, 
                                                    start with 51, 52, 53, 54, or 55
                                                and Visa uses 13- and 16-digit numbers
                                                    start with 4 
    case 15:
        printf("American Express\n");
        return  1;                              為甚麼這裡寫break;就跑不出來
    case 16:
        printf("MasterCard\n");
        return  1;
    case 13:
        printf("Visa\n");
        return  1;
    default:
        return  0;
     };
};*/
