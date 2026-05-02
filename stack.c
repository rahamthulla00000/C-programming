#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX_SIZE 100
struct stack{
    int stack[MAX_SIZE];
    int top;
    int capacity;
};

bool isEmpty(struct stack*);
bool isFull(struct stack*);

struct stack* stackcreate(int capacity){
    struct stack* obj = malloc(sizeof(struct stack)); 
    obj->capacity=capacity;
    obj->top=-1;
    return obj;
};


bool push(struct stack* obj,int val){
    if(isFull(obj)){
        printf("Stack is Full");
        return false;

    }else{
        obj->top++;
        obj->stack[obj->top]=val;
        return true;
    }
}
bool pop(struct stack* obj){
    if(isEmpty(obj)){
        printf("Stack is Empty");
        return false;
        }

    obj->top--;
    return true;
    }
int peek(struct stack* obj){
    return obj->stack[obj->top];
}



bool isEmpty(struct stack*obj){
    return obj->top==-1;
    }


bool isFull(struct stack* obj){
    return obj->top==obj->capacity-1;

}


int main(){
    struct stack*obj = stackcreate(5);
    push(obj,1);
    push(obj,2);
    push(obj,3);
    push(obj,4);
    push(obj,5);
    //pop(obj);


    printf("%d",peek(obj));
}