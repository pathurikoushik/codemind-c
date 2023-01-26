#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d%d",&a,&b);
        if(a==1){
            if(b%2==0){
                printf("Even
");
            }
            else{
                printf("Odd
");
            }
        }
        else if(b%2==1){
            if(a%2==0){
                printf("Even
");
            }
            else{
                printf("Odd
");
            }
        }
        else{
            printf("Impossible");
        }
    }
}