/**
 *  Find the maximum number without using if-else or other comparison operator. 
 * 
 *  Switch two number without using a temporary/third variable.
 **/
#include<stdio.h>
#include<stdlib.h>


void exchange(int *a, int *b){
    *a = (*a) - (*b);  // diff 
    *b = (*b) + (*a);
    *a = (*b) - (*a); 
}


// int abs(int a){ return (int)((unsigned int)a); }

int max_1(int a, int b){
    return ( a + b + abs(a-b) ) >> 1 ; 
}

int max_2(int a, int b){

    int diff = a - b; 
    int sign = (diff >> 31) & 0x1; 
    
    return a - sign*diff; 
}

int main(){
    int a = 20, b = 30; 

    printf("a=%d, b=%d, max=%d\n", a, b, max_1(a,b)); 

    exchange(&a, &b); 

    printf("After exchange: a=%d, b=%d\n", a, b); 

    return 0;
}




