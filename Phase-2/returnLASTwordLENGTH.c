#include<stdio.h>
#include<string.h>
int lengthoflast(char *str){
    int i=strlen(str)-1;
    while(i >= 0 && str[i]==' '){
        i--;
    }
    int count=0;
    while(i>=0&&str[i]!=' '){
        count++;
        i--;
    }
    return count;


}
int main(){
    char str[100];
    scanf("%[^\n]s",str);

    printf("%d",lengthoflast(str));
    return 0;
}