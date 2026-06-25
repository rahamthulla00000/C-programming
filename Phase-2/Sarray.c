#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int min=arr[0];

    for(int ind=1;ind<n;ind++){
        if(min>arr[ind]){
            min=arr[ind];
        }
    }
    printf("Smallest element in an array is : %d",min);
}