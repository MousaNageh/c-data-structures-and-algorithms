#include <stdio.h>
#include "stack.h" 



void CreateStack(Stack *ps){
    ps->top = 0 ;
};

int StackFull(Stack *ps){
    return  MAXSTACK  <=  ps->top  ; 
};

int StackEmpty(Stack *ps){
    return   !ps->top   ; 
};

void Push(StackEntry pe , Stack *ps){
    ps->entry[ps->top]= pe  ; 
    ps->top ++ ;
};

void Pop(StackEntry *pe , Stack *ps){
    *pe =  ps->entry[--ps->top] ; 
};

void StackTop(StackEntry *pe , Stack *ps){
    *pe =  ps->entry[ps->top-1] ; 
};

int StackSize(Stack *ps){
    return   ps->top   ; 
};

void ClearStack(Stack *ps){
        ps->top =0    ; 
};
void TranverseStack(Stack *ps , void (*pf) (StackEntry) ){
    for(int i = ps->top ; i > 0 ; i--)
        (*pf)(ps->entry[i-1]) ;
};