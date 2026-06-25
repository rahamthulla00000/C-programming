#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the array elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int even=0;
    int odd=0;

    for(int j=0;j<n;j++){
        if(arr[j]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("EVEN = %d\n",even);
    printf("Odd = %d",odd);
}