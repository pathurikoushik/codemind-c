#include<stdio.h>
int sum(int *vk,int r,int l){
    int s=0;
    for(int i=r;i<l;i++){
        s+=vk[i];
    }
    return s;
}
int main(){
    int a;
    scanf("%d",&a);
    for(int l=0;l<a;l++){
        int n,vk[2004],r,b=0;
        scanf("%d",&n);
        for(r=0;r<n;r++){
            scanf("%d",&vk[r]);
        }
        for(r=0;r<n;r++){
            if(sum(vk,0,r)==sum(vk,r+1,n)){
                printf("YES
");
                b=1;
                break;
            }
        }
        if(b!=1){
            printf("NO
");
        }
    }
}