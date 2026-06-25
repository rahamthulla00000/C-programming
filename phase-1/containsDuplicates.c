#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool bruteForce(int arr[],int size){

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                return true;
            }
        }
    }

    return false;
}

bool optimize(int arr,int size){
    int hash[5]={0};

    for(int i=0;i<size;i++){



        hash[arr[i]]++;
    }
}

int main(){
    int arr[]={1,2,3,1};

    bool res = bruteForce(arr,4);

    if(res){
        printf("No duplicates found");
    }else{
        printf("Duplicates found");
    }
}