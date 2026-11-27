#include<stdio.h>

void Accumulate(int *ret, int n){
    *ret = 0;
    for(int i=0;i<n;i++){
        *ret += i;
    }
}

int main(){
    int ret=0;
    int n=100;
    Accumulate(&ret, n);
    printf("Result: %d\n", ret);
    return 0;
}