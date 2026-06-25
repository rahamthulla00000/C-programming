#include<stdio.h>
#include<stdlib.h>
struct node{
    int val;
    struct node* left;
    struct node* right;
    
};

struct node* create(int arr[],int index,int size){
    if(index>=size||arr[index]==-1) return NULL;

    struct node* root = (struct node*)malloc(sizeof(struct node));

    root->val=arr[index];
    root->left=create(arr,2*index+1,size);
    root->right=create(arr,2*index+2,size);

    return root;
}

struct node* createtree(int arr[],int size){
    return create(arr,0,size);
}


int main(){
    int arr[]={4,2,7,1,3,-1,-1,-1,-1};
    struct node* root = createtree(arr,sizeof(arr));
    printf("%d",root->left->right->val);

}


