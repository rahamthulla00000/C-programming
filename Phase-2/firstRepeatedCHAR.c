#include<stdio.h>
#include<strings.h>
int firstrep(int *freq,char *str){
    int i=0;
    for(int ind=0;str[ind]!='\0';ind++){
        i=str[ind]-'a';//109-97=12
        freq[i]++;
        if(freq[i]>1){
            return i;
        }
    }
    return -1;
}

int main(){
    char str[100];
    scanf("%s",str);
    int freq[26]={0};

    int res=firstrep(freq,str);
    if(res!=-1){
        printf("%c",res+'a');
    }
    else{
        printf("-1");
        
    }


}