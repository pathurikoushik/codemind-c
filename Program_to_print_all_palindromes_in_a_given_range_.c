#include<stdio.h>
int fun(int a)
{
    int rev=0;
    while(a)
    {
        rev=(rev*10)+a%10;
        a/=10;
    }
    return rev;
}
int main()
{
    int a,b,pal=0;
    scanf("%d%d",&a,&b);
    while(a!=b)
    {
        pal=fun(a);
        if(pal==a)
        printf("%d ",a);
        a++;
    }
}