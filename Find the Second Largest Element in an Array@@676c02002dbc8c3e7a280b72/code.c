// Your code here...
#include <stdio.h>
int main(){
    int k[30],h,d;
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&k[i]);
    }
    for(int i=0;i<a;i++){
       if(a[i]>h){
        h=a[i];
        d=h;
       }
       if(a[i]>d){
        d=a[i];
       }
    }
    printf("%d",d);
}