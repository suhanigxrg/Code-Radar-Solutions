#include<stdio.h>
int main(){
    int N;
    scanf("%d\n",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int K;
    scanf("%d",&K);
    for(int i=0;i<K;i++){
        arr[i]=arr[i+K];
        
    }
     for(int i=0;i<N;i++){
         printf("%d\n",arr[i]);
    }
   
    return 0;
}