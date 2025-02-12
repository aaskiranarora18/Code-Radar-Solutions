#include <stdio.h>
#include<math.h>
int main(){
    int num,i,c=0;
    printf("");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        c=c+i;
    }
    printf("%d",c);
    return 0;
 }