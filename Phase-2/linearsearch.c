#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    printf("Enter the target element:");
    scanf("%d",&target);
    int found=0;//flag variable

    for(int ind=0;ind<n;ind++){
        if(target==arr[ind]){
            found=1;
            printf("found at index = %d",ind);
            break;
        }
        
    
    }   
    if(found==0){
        printf("Target element is not found");

        
    }

}