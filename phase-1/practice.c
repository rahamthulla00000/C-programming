#include<stdio.h>
int main(){
    int i=1;
    {
        int i=2;
        {
            int i=3;
            {
                printf("%d",i);
            }

            

        }

        printf("%d",i);
    }
    printf("%d",i);

    return 0;
}