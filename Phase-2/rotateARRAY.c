
#include <stdio.h>

// void add(int *a , int *b){
//     *a = *a + 10;
//     *b = *b + 10;
// }

// void rotate(int size , int arr[] , int k){
//     for(int itr=1;itr<=k;itr++){
//         int safe = arr[size-1];
//         for(int ind=size-1;ind>=1;ind--){
//             arr[ind] = arr[ind-1];
//         }
//         arr[0] = safe;
//     }
// }


void reverse(int arr[] , int st , int end){
    while(st < end){
        int temp = arr[st];
        arr[st] = arr[end];
        arr[end] = temp;
        st++;
        end--;
    }
}
int main()
{
    
    // i.p
    // // rotate the arrayu by k times right totation
    // 5
    // 10 65 86 456 785
    // k = 3
    
    // o.p 
    // 86 456 785 10 65  
    int size;
    scanf("%d",&size);
    
    int arr[size];
    for(int ind=0;ind<size;ind++){
        scanf("%d",&arr[ind]);
    }
    
    int k;
    scanf("%d",&k);
    // 
    
     //rotate(size , arr , k);
    reverse(arr , 0 , size-1);
    reverse(arr , 0 , k-1);
    reverse(arr , k , size-1);
   
    // int a = 10;
    // int b = 20;
    // add(a , b); // call by value
    // add(&a , &b); // call by ref => work with pointer
    // printf("%d%d",a,b);
    
   
    return 0;
}
