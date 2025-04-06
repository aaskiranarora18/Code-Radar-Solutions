// Your code here...
#include <stdio.h>
int main(){
int a , k=1;
printf(" ");
scanf("%d",&a);
for(int i=1;i<=a;i++){
    for(int j=i;j<=a;j++){
        printf("%d ",k++);
    }
    printf("\n");
}
return 0;
}