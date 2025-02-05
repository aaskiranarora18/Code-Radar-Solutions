#include <stdio.h>
int main() {
    int n,m,l;
    scanf("%d %d %d",&n,&m,&l);
    if ((n==m && m==l)){
        printf("Equilateral");
    }
    else if ((n==m && m!=l) || (n!=m && m==l)){
        printf("Isosceles");
    }
    else if (n!=m && m!=l){
        printf("Scalene");
    }

    return 0;
}