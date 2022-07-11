#define MAXSTACK 1000
#define StackEntry int 

typedef struct stack
{
    int top ; 
    StackEntry entry[MAXSTACK] ;
}Stack;


void CreateStack(Stack *) ;

int StackFull(Stack *);

int StackEmpty(Stack *);

void Push(StackEntry , Stack *) ; 

void Pop(StackEntry * , Stack *) ; 

void StackTop(StackEntry * , Stack *) ;

int StackSize(Stack *);

void ClearStack(Stack *) ;


void TranverseStack(Stack * , void (*) (StackEntry) ) ;    