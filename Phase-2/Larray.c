#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }


    int max=arr[0];

    for(int j=0;j<n;j++){
        if(max<arr[j]){
            max=arr[j];
        }
    }

    printf("%d",max);
}