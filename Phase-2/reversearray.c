#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    int temp;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int ind=0;ind<n/2;ind++){
        temp=arr[ind];
        arr[ind]=arr[n-1-ind];
        arr[n-1-ind]=temp;
    }
    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
}
