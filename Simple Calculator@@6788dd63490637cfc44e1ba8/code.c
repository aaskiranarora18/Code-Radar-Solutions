#include <stdio.h>
int main() {
    int n,m;
    char l;
    scanf("%d %d %c",&n,&m,&l);
    if (l=='+'){
        printf("%d",n+m);
    }
    else if(l=='-'){
        printf("%d",n-m);
    }
    else if(l=='/'){
        if(m!=0){
            printf("%d",n/m);
        }else{
            printf("error");
        }
    }
    else if(l=='*'){
        printf("%d",n*m);
    }
    else
    printf("Error: Invalid operator");
    return 0;
}