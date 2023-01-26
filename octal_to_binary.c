#include<stdio.h>
int main(){
    char n[100];
    scanf("%s",n);
    for(int i = 0 ; n[i]!=NULL ; i++){
        if(i==0 && n[i]=='0'){
            printf("0");
        }
        else if(i==0 && n[i]=='1'){
            printf("1");
        }
        else if(i==0 && n[i]=='2'){
            printf("10");
        }
        else if(i==0 && n[i]=='3'){
            printf("11");
        }
        else if(n[i]=='0'){
            printf("000");
        }
        else if(n[i]=='1'){
            printf("001");
        }
        else if(n[i]=='2'){
            printf("010");
        }
        else if(n[i]=='3'){
            printf("011");
        }
        else if(n[i]=='4'){
            printf("100");
        }
        else if(n[i]=='5'){
            printf("101");
        }
        else if(n[i]=='6'){
            printf("110");
        }
        else if(n[i]=='7'){
            printf("111");
        }    
    }
}
