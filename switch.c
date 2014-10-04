/**
 *  Switch two number without using a temporary/third variable.
 **/
#include<stdio.h>
#include<stdlib.h>


void exchange(int *a, int *b){
    *a = (*a) - (*b);  // diff 
    *b = (*b) + (*a);
    *a = (*b) - (*a); 
}


int main(){
    int a = 20, b = 30; 

    printf("a=%d, b=%d\n", a, b); 

    exchange(&a, &b); 

    printf("After exchange: a=%d, b=%d\n", a, b); 

    return 0;
}




