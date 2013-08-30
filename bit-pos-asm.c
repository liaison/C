#include <stdio.h> 
#include <stdlib.h> 

/**
  Date: Aug 30, 2013 
  Reference: http://www.advancedlinuxprogramming.com/alp-folder/alp-ch09-inline-asm.pdf

  Find the most significant bit in a long integer. 
  Implemented through the inline asm code. 
  
*/

int main(int argc, char * argv[]) {
    long number; 
    long max = atol(argv[1]); 

    unsigned position; 
    volatile unsigned result; 

    printf("number of cycles: %lu\n", max); 

    for( number=0; number < max; number++ ){
    
        asm( "bsr %1, %0" : "=r" (position) : "r" (number) );

        result = position; 
    }
    
    return 0; 
}






