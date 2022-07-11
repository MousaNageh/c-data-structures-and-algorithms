#define MAXLENGTH 100
#define QueueEntry int 

typedef struct queue
{
    int front ; 
    int rear ; 
    int size ;
    QueueEntry entry[MAXLENGTH];  
}Queue;

void CreateQueue(Queue *) ;
void Append(QueueEntry , Queue *) ;
void Serve(QueueEntry * , Queue *) ;
int QueueEmpty(Queue *);
int QueueFull(Queue *);
int QueueSize(Queue *);
void ClearQueue(Queue *);
void TraverseQueue(Queue * , void (*)(QueueEntry));