#include <stdio.h>
#include <stdbool.h>
int main() {
    int a,b;
    printf("");
    scanf("%d&d",&a,&b);
    if((a>1 && b<1)||(a==0 && b==0)){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
} 