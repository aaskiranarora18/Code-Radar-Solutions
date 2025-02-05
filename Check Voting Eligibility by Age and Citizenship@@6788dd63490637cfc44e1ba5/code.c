#include <stdio.h>
int main() {
    int a,b;
    printf("");
    scanf("%d%d",&a,&b);
    if(a>=0 && b==1){
        printf("Eligible");
    }
    else{
        if(a<18 && b==1){
            printf("Not Eligible");
        }
        
    }
    return 0;
}