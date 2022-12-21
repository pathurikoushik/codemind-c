#include<stdio.h>
int main()
{
    int i,j=0,t;
    scanf("%d",&i);
    t=i;
    while(i>0)
    {
        i=i/10;
        j++;
        if(j==10 && i==0)
        {
            j--;
        }
    }
    if(j==9)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}