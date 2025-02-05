#include <stdio.h>
int main() {
    int a,i,c=0;
    printf("");
     scanf("%d",&a);
     for( i=2;i<=a-1;i=i+1){
        if(a%i==0){
            c=1;
        }
     }
     if(c==1){
        printf("Prime");
     }
     else{
        printf("Non Prime");
     }
    return 0;
}