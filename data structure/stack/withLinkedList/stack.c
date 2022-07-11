#include <stdio.h>
#include "stack.cpp"
//user level if wanna create 'stackTop'
void userStackTop(StackEntry *pe , Stack *ps){
    Pop(pe,ps) ;
    Push(*pe,ps) ;
};

int main(int argc, char const *argv[])
{ 
    Stack stack ;
    CreateStack(&stack);
    StackEntry val =20;
    Push(val,&stack);
    Push(val,&stack);
    Push(val,&stack);
    StackEntry toPrint ; 
    Pop(&toPrint,&stack);
    printf("\n You entered: %d", toPrint);
    printf("\n You entered: %d", StackSize(&stack));
    ClearStack(&stack) ;
    // printf("\n You entered: %d", );
    printf("\n You entered: %d", StackSize(&stack));

}








