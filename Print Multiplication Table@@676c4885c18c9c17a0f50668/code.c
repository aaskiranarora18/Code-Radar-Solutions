#include <stdio.h>
#include<math.h>
int main(){
    int num,i,c=0;
    printf("");
    scanf("%d",&num);
    for(i=1;i<=10;i++){
        c=num*i;
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
 }