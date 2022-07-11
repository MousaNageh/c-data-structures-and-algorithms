#include <stdio.h>

void moveDisks(int count , int start , int finish, int temp){
    if(count > 0 ){
        moveDisks(count-1,start,temp,finish) ;
        printf("Move Disk %d from %d to %d \n",count,start,finish);
        moveDisks(count-1,temp,finish,start) ;
        // printf("Move Disk %d from %d to %d \n",count,start,finish);
    }
}


int main(int argc, char const *argv[])
{ 
    moveDisks(2,1,3,2);
}