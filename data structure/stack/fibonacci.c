#include <stdio.h>

int fibonacci(int n){
    if (n== 0 ) 
        return 0 ;
    if (n == 1 ) 
        return 1 ;
    return  (fibonacci(n-1) + fibonacci(n-2)) ;
        
}
int fibonacciWithooutRecurion(int n){
    int oneBack = 1 ;
    int twoBack =0 ;
    int current ;  
    if (n<=0)
        return 0 ;
    if (n==1) 
        return 1 ;
    for (int i =2 ; i<=n ; i++){
        current = oneBack + twoBack ; 
        twoBack = oneBack ;  
        oneBack = current ;
    }
    return current ; 
}


int main(int argc, char const *argv[])
{  
    int n =4 ; 
    int res= 0 ; 
    printf("%d \n" , fibonacci(n)) ; 
    printf("%d \n" , fibonacciWithooutRecurion(n)) ; 
}