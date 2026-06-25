#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

typedef struct{
    int* dq;
    int front, rear, size, capacity;
} deque;

bool isFull(deque*);
bool isEmpty(deque*);

deque* createDeque(int k){
    deque* obj = (deque*)malloc(sizeof(deque));
    obj->dq = (int*)malloc(k * sizeof(int));
    obj->front = k - 1;
    obj->rear = 0;
    obj->size = 0;
    obj->capacity = k;
    return obj;
}

bool insertFirst(deque* obj, int val){
    if(isFull(obj)){
        return false;
    }

    obj->dq[obj->front] = val;
    obj->front = (obj->front - 1 + obj->capacity) % obj->capacity;
    obj->size++;
    return true;
}

bool removelast(deque* obj){
    if(isEmpty(obj)){
        return false;
    }

    obj->rear = (obj->rear - 1 + obj->capacity) % obj->capacity;
    obj->size--;
    return true;
}

int getRear(deque* obj){
    if(isEmpty(obj)){
        return -1;
    }

    return obj->dq[(obj->rear - 1 + obj->capacity) % obj->capacity];
}

bool isEmpty(deque* obj){
    return obj->size == 0;
}

bool isFull(deque* obj){
    return obj->size == obj->capacity;
}

int main(){
    deque* obj = createDeque(5);

    insertFirst(obj,1);
    insertFirst(obj,2);
    insertFirst(obj,3);

    removelast(obj);
    removelast(obj);

    printf("Rear element: %d\n", getRear(obj));

    return 0;
}