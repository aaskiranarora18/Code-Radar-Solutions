// Your code here...
#include <stdio.h>
int main(){
    int k,a[50],max[0],min[0];
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
            a[i]=min;
        }
    }
    printf("%d %d",min ,max);
}