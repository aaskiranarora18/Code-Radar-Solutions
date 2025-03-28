// Your code here...
#include <stdio.h>
int main(){
    int a, k[50],c=0,d=0;
    printf("");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        printf("");
    }
    for(int i=1;i<=a;i++){
        scanf("%d",&k[i]);
    }
    for(int i=1;i<=a;i++){
        if(a[i]%2==0){
            c=c+1;
        }
        else{
             d=d+1;
        }
    }
    printf("%d %d",c,d);
      return 0;
}