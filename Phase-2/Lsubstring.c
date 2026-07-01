#include<stdio.h>
#include<string.h>

int longestsubstring(char *s){
    int max=0;
    int len=0;
    int j=0;
    int freq[256]={0};
    for(int i=0;s[i]!='\0';i++){
        int ind=(int)s[i];
        freq[ind]++;
        while(freq[ind]>1){
            int leftind=(int)s[j];
            freq[leftind]--;
            j++;
        }
        len=i-j+1;
        if(len>max){
            max=len;
        }
    }
    return max;


}

int main(){
    char str[256];
    scanf("%[^\n]s",str);
    printf("%d",longestsubstring(str));

}