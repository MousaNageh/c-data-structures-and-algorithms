#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

void CreateStack(Stack *ps){
    ps->top = NULL ;
    ps->size = 0 ; 
}
void Push(StackEntry e , Stack *s){
    StackNode *pn = (StackNode*)malloc(sizeof(StackNode)) ;
    pn->entry =e ; 
    pn->next = s->top ;
    s->top = pn ; 
    s->size ++ ; 
}

void Pop(StackEntry *e , Stack *s){
    StackNode *pn ; 
    if(s->top == NULL){
        e = NULL ;
        return ;
    } 
    *e = s->top->entry ;
    pn = s->top ;
    s->top = s->top->next ;
    free(pn) ;
    s->size -- ; 
}

int  StackEmpty(Stack *s){
    return  s->top == NULL ;
}
int StackFull(Stack *s){
    return 0 ; 
}

void ClearStack(Stack *s){
    while(s->top != NULL){
        StackNode *sn = s->top ;
        s->top = s->top->next ; 
        free(sn);  
    }
    s->size = 0 ;
}
int  StackSize(Stack *s){
    // int size = 0 ;
    // StackNode *sn ; 
    // sn = s->top ; 
    // while (sn != NULL)
    // {
    //     size++ ;
    //     sn = sn->next ; 
    // }
    return s->size ; 
}

void TranverseStack(Stack *s ,void (*pf) (StackEntry) ){
    StackNode *pn =s->top ;
    while (pn != NULL){
        (*pf)(pn->entry) ; 
        pn = pn->next ; 
    }
}