#include "queue.h"

void CreateQueue(Queue *pq){
    pq->size = 0 ; 
    pq->front =0 ; 
    pq->rear = -1 ; 
}

void Append(QueueEntry e , Queue *pq){
    pq->rear = (pq->rear + 1) % MAXLENGTH;
    pq->entry[pq->rear] = e ;
    pq->size ++ ;
}
void Serve(QueueEntry *pe , Queue *pq){
    *pe = pq->entry[pq->front];
    pq->front = (pq->front +1) % MAXLENGTH ;
    pq->size -- ; 
}

int QueueEmpty(Queue *pq){
    return  !pq->size ; 
}

int QueueFull(Queue *pq){
    return  pq->size == MAXLENGTH ; 
}

int QueueSize(Queue *pq){
    return pq->size ;
}

void ClearQueue(Queue *pq){
    pq->size = 0 ; 
    pq->front =0 ; 
    pq->rear = -1 ;
}
void TraverseQueue(Queue *pq , void (*pf)(QueueEntry)){
    for(int s=0 , pos = pq->front ; s < pq->size ; s++ ){
        (*pf)(pq->entry[pos]) ; 
        pos = (pos +1 ) % MAXLENGTH ; 
    }
}
