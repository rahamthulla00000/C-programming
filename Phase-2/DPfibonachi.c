#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int dp[n+1];
    int temp1=0;
    int temp2=1;
    for(int itr=1;itr<=n;itr++){
        int temp3=temp1+temp2;
        temp1=temp2;
        temp2=temp3;
    }

    printf("%d",temp1);
    



}