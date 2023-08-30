#include <stdio.h>
#include<math.h>
int main()
{  
    int num, binarynum, decimalnum = 0, base = 1, rem;  
    printf (" Enter a binary number with the combination of 0s and 1s \n");  
    scanf (" %d", &num); 
    binarynum = num;   
    while ( num > 0)  
    {  
        rem = num % 10; 
        decimalnum=decimalnum+rem*base;  
        num=num/10; 
        base=base*2;  
    }  
    printf ( " The binary number is %d \t", binarynum); 
    printf (" \n The decimal number is %d \t", decimalnum); 
}
