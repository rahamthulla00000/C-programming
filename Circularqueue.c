#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



struct queue{
    int* q;
    int front,rear,capacity,size;
};

bool isEmpty(struct queue*);
bool isFull(struct queue*);

struct queue* createQueue(int capacity){
    struct queue* obj=(struct queue*)malloc(sizeof(struct queue));

    obj->q=(int*)malloc(capacity*sizeof(int));
    obj->front=0;
    obj->rear=0;
    obj->size=0;
    obj->capacity=capacity;
    return obj;
}
bool enque(struct queue* obj,int val){
    if(isFull(obj)){
        printf("Queue is full");
        return false;
    }

    obj->q[obj->rear]=val;
    obj->size++;
    obj->rear++;
    obj->rear = obj->rear%obj->capacity;
    return true;
}

bool deque(struct queue* obj){
    if(isEmpty(obj)){
        printf("Queue is empty");
        return false;
    }

    obj->size--;
    obj->front++;

    return true;
}

bool isFull(struct queue* obj){
    return obj->size == obj->capacity;
}

bool isEmpty(struct queue* obj){
    return obj->size==0;
}


int getRear(struct queue* obj){
    int index=(obj->rear-1+obj->capacity)%obj->capacity;
    return obj->q[index];
}
int getFront(struct queue* obj){
    return obj->q[obj->front];
}


int main(){
    struct queue* obj =createQueue(5);

    enque(obj,1);
    enque(obj,2);
    enque(obj,3);
    enque(obj,4);
    enque(obj,5);
    
    enque(obj,6);
    printf("%d",getRear(obj));
    printf("%d",getFront(obj));
   
}