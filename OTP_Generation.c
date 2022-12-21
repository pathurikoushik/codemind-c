#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int j=0,i;
    fgets(str,sizeof(str),stdin);
    while(str[j]!=NULL)
    {
        i=int(str[j])-48;
        if(i%2!=0)
        {
            printf("%d",i*i);
        }
        j++;
    }
}