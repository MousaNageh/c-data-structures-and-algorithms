#define MAXLENGTH 100
#define QueueEntry int 

typedef struct queueNode
{
    QueueEntry entry ;
    struct queueNode *next  ;
}QueueNode;

typedef struct queue
{
    QueueNode *front  ; 
    QueueNode *rear  ; 
    int size ;
}Queue;

void CreateQueue(Queue *) ;
void Append(QueueEntry , Queue *) ;
void Serve(QueueEntry * , Queue *) ;
int QueueEmpty(Queue *);
int QueueFull(Queue *);
int QueueSize(Queue *);
void ClearQueue(Queue *);
void TraverseQueue(Queue * , void (*)(QueueEntry));