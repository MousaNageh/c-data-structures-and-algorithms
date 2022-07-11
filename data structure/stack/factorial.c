#include <stdio.h>

int factorial(int n){
    return n > 0 ?  n * factorial(n-1): 1 ;
}


int main(int argc, char const *argv[])
{ 
    printf("value : %d ",factorial(3));
}