// Your code here...
#include <stdio.h>
int main(){
int a , k=1;
printf(" ");
scanf("%d",&a);
for(int i=a;i>=1;i--){
    for(int j=1;j<=i;j++){
        printf("%d ", j);
    }
    printf("\n ");
}
return 0;
}