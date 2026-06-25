#include<stdio.h>
#include<strings.h>

int main(){
    char str[100];
    scanf("%[^\n]s",str);
    int size=strlen(str);

    int val=0;
    for(int ind=size-1;ind>=0;ind--){
        if(str[ind]==' '){
            val=0;
        }else{
            if((str[ind]+val)>122){
                str[ind]=(str[ind]+val)-26;
                val++;
            }else{
                str[ind]=str[ind]+val;
                val++;
            }
        }
    }
    printf("%s",str);
}