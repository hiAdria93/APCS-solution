#include<stdio.h>
#include<stdlib.h>

int main(void){

    int a, b, c;
    scanf("%d%d%d",&a,&b,&c);
    
    if(((a=!0)&&(b=!0))&&(c==1)){
        printf("AND\nOR");
    }
    else if(((a=!0)&&(b=!0))&&(c==0)){
        printf("IMPOSSIBLE");
    }
    else if((((a==0)&&(b=!0))||((a=!0)&&(b==0)))&&(c==1)){
        printf("XOR\nOR");
    }
    else if((((a==0)&&(b=!0))||((a=!0)&&(b==0)))&&(c==0)){
        printf("OR");
    }
    else if(((a==0)&&(b==0))&&(c==0)){
        printf("AND\nOR\nXOR");
    }
    else if(((a==0)&&(b==0))&&(c==1)){
        printf("IMPOSSIBLE");
    }
    return 0;
    system("pause");
    
}