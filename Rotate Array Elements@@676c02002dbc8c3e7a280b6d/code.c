#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    int K;
    scanf("%d", &K);

    K = K % N;

    for(int r=0; r<K; r++){
        int first = arr[0];
        for(int i=0; i<N-1; i++){
            arr[i] = arr[i+1];
        }
        arr[N-1] = first;
    }

    for(int i=0; i<N; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}
