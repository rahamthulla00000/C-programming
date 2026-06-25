#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("enter the size of the array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int ind=0;ind<n-1;ind++){
        for(int jnd=0;jnd<n-1-ind;jnd++){
            int temp;
            if(arr[jnd]>arr[jnd+1]){
                temp=arr[jnd];
                arr[jnd]=arr[jnd+1];
                arr[jnd+1]=temp;
            }
        }
    }
    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
}