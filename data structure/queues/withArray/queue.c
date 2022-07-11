#include <stdio.h>
#include "queue.cpp"




int main(int argc, char const *argv[])
{  
    Queue q ;
    CreateQueue(&q);
    Append(12,&q) ;
    printf("%d",q.size);
}