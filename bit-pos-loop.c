#include <stdio.h> 
#include <stdlib.h> 

int main(int argc, char * argv[]) {
    long i, number; 
    long max = atol(argv[1]); 

    unsigned position; 
    volatile unsigned result; 

    printf("number of cycles: %lu\n", max); 

    for( number=0; number < max; number++ ){
    
        for( i=(number>>1), position=0; i != 0; position++ ){
            i >>= 1; 
        }
        
        result = position; 
    }
    
    return 0; 
}






