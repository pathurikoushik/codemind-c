#include<stdio.h>
int main()
{
    int a,b,i,c;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        c=a*i;
        printf("%d x %d = %d
",a,i,c);
        }
    
}