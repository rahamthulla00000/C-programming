#include<stdio.h>
int main(){
    int x = 7;
int *p = &x;

*p = *p + 3;

printf("%d\n", x);
printf("%d\n", *p);
}