// Your code here...
#include <stdio.h>
int main(){
    int a[10],k,h=0;
    printf("");
    scanf("%d",&k);
    for(int i=1;i<=k;i++){
        printf("");
    }
    for(int i=1;i<=k;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=k;i++){
        if(a[i]>h){
            h=a[i];
        }
        else{
           if(a[i]==-1){
            h=-1;
           }
        }
    }
    printf("%d",h);
    return 0;
}