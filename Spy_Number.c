#include<stdio.h>
int main()
{
    int n,q,r,s=0,p=1;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        s=s+r;
        p=p*r;
        q=q/10;
    }
    if(s==p)
    {
        printf("Spy Number");
    }
    else
    {
       printf("Not Spy Number");
    }
}