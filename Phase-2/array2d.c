#include<stdio.h>
#include<stdlib.h>

int main(){
    int m,n;
    printf("enter the size of the 2d array M and N:");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    printf("enter the array elements");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }


    printf("The array elements are ");
    for(int ind=0;ind<m;ind++){
        for(int jnd=0;jnd<n;jnd++){
            printf("%d ",arr[ind][jnd]);
            
        }
        printf("\n");
    }
}   