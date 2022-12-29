#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n],i,e=0,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
            s=s+ar[i];
        }
    }
    for(i=0;i<n;i++)
    if(ar[i]%2!=0)
    {
        e=e+ar[i];
    }
    if(e>s)
    {
        printf("%d",e-s);
    }
    else
    {
        printf("%d",s-e);
    }
}