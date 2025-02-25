// Your code here...
#include <stdio.h>

int main() {
    int a,i,j;
    printf("");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<i;j=j+2){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}