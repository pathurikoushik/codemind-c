#include<stdio.h>
int main()
{
    int a[100],i,n,count=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            count++;
            continue;
        }
        if (a[i]%2==0)
        {
            count++;
        }
    }
    if (count==n)
    {
        printf("True");
    }
    else
    printf("False");
}