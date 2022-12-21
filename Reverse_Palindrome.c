#include<stdio.h>
int rev(int n)
{
    int res=0,d;
    while(n)
    {
        d=n%10;
        res=res*10+d;
        n=n/10;
    }
    return res;
}
int pal(int n)
{
    int temp,rev=0,d;
    temp=n;
    while(n)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(rev==temp)
    {
        return 1;
    }
    return 0;
}
int fun(int n)
{
    int x;
    x=rev(n);
    n=n+x;
    if(pal(n))
    {
        printf("%d",n);
        return 0;
    }
    return fun(n);
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
}