#include <stdlib.h>
#include <stdio.h>
#include "queue.h"
void CreateQueue(Queue *pq){
    pq->size = 0 ; 
    pq->front =NULL ; 
    pq->rear = NULL ; 
}

void Append(QueueEntry e , Queue *pq){
    QueueNode * node  = (QueueNode*) malloc(sizeof(QueueNode));
    node->entry = e ; 
    node->next = NULL ;
    if(pq->rear)
        pq->rear->next = node ;
    if(pq->front ==NULL)
        pq->front = node ;
    pq->rear = node ;
    pq->size ++ ;  
}
void Serve(QueueEntry *pe , Queue *pq){
    *pe= pq->front->entry ; 
    QueueNode  * node  = pq->front ;
    pq->front = pq->front->next ;
    if(pq->front==NULL)
        pq->rear = NULL ;
    free(node) ; 
    pq->size -- ;
}

int QueueEmpty(Queue *pq){
    return  !pq->size ; 
}

int QueueFull(Queue *pq){
    return  false ; 
}

int QueueSize(Queue *pq){
    return pq->size ;
}

void ClearQueue(Queue *pq){
    pq->size = 0 ; 
    while(pq->front){
        pq->rear = pq->front->next ;
        free(pq->front);
        pq->front = pq->rear ; 
    }

}
void TraverseQueue(Queue *pq , void (*pf)(QueueEntry)){
    for(QueueNode *pn=pq->front ; pn ; pn=pn->next ){
        (*pf)(pn->entry) ; 
    }
}
