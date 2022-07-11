#define MAXSTACK 1000
#define StackEntry int 

typedef struct stacknode
{
    StackEntry entry ; 
    struct stacknode *next ;
    
    
}StackNode;

typedef struct stack
{
    StackNode *top ; 
    int size ;
    
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