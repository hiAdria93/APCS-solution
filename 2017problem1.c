/* Logical Operators */
/* APCS 2017-10 Problem1 */
/* With only 1 column, the input is consisted by 3 seperate intergers, a, b, and c. The number c represent the 
logical relationship between a and b. Figure out the logical operators that can connect these numbers. */

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
