#include<stdio.h>
#include<stdlib.h>

int rev(int num,int res){
    if(num==0){
        return res;
    }
    else{
        int rem=num%10;
        res=res*10+rem;
        int result=rev(num/10,res);
        return result;
    }

}

int main(){
    int num;
    scanf("%d",&num);

    int rs=rev(num,0);
    printf("%d",rs);

    return 0;
}