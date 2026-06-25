#include<stdio.h>

int main(){
    int n,a=-1,b=1,c;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Fibonacci series:");
    for(int i=0;i<n;i++){
        
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}