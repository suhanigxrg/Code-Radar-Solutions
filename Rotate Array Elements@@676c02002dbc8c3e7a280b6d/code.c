#include<stdio.h>
int main(){
    int N;
    printf("%d\n",N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int K
    scanf("%d",&K);
    for(int i=0;i<K;i++){
        arr[i]=arr[i+K];
        printf("%d",arr[i]);
    }
    return 0;
}