// Your code here...
#include <stdio.h>
int main(){
    int k,a[50];
    int max,min;
    printf("");
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<k;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("%d %d",min ,max);
    return 0;
}