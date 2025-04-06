// Your code here...
#include <stdio.h>
int main(){
    int a;
    char k='A';
    printf(" ");
    scanf("%d",%a);
    for(int i=1;i<=a;i++){
      for(int j=1;j<=i;j++){
        printf("%c",k++);
      }
    }
    return 0;
}