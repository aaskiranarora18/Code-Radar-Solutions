#include <stdio.h>
int main() {
    char a;
    scanf("%c%c",&a ,&b);
    if(a=='G'){
        printf("Go");
    }
    else{
        if(a=='R'){
            printf("Stop");
        }
        else{
            if(a=='Y'){
                printf("Slow Down");
            }
            else{
                printf("Invalid Input");
            }
        }
    }
    return 0;
}