#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the size of the Array");
    scanf("%d",&n);

    int *arr = malloc(n * sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }

    free(arr);
    return 0;


}