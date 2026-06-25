#include<stdio.h>
#include<stdlib.h>
int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    for(int ind=0;ind<size;ind++){
        scanf("%d",&arr[ind]);
    }

    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            for(int k=i;k<=j;k++){
                printf("%d",arr[k]);
            }
            printf("   ");
        }
        printf("\n");
    }

    return 0;
}