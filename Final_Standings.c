#include<stdio.h>
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int i = 0; i < n; i++){
        arr[i]=0;
    }
    arr[0]=1;
    arr[1]=k-1;
    for(int i = 2 ; i < n+1 ; i++){
        arr[i] = (k-1)*(arr[i-1]+arr[i-2]);
    }
    printf("%d",arr[n]);
}