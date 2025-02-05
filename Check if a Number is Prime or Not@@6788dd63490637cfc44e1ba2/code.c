#include <stdio.h>
int main() {
    int a;
     scanf("%d",&a);
     int i,c=0;
     for( i=2;i<=a-1;i=i+1){
        if(a%i==0){
            c=1;
        }
     }
     if(c==0){
        printf("Prime");
     }
     else{
        printf("Non Prime");
     }
    return 0;
}