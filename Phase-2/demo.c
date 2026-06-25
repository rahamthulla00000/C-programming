#include<stdio.h>


int main(){
	
	int arr[5];int sum=0;
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    for(int j=0;j<5;j++){
        sum=sum+arr[j];
    }

    printf("Sum = %d",sum);
}