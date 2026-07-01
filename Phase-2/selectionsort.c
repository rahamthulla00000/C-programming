#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    

    for(int ind=0;ind<n-1;ind++){
        int smallest=ind;
        for(int jnd=ind;jnd<n;jnd++){
            if(arr[smallest]>arr[jnd]){
                smallest=jnd;
            }
            
        }
        int temp=arr[ind];
        arr[ind]=arr[smallest];
        arr[smallest]=temp;
    }

    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
}