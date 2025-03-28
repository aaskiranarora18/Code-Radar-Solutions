// Your code here...
#incluse <stdio.h>
int main(){
    int k,a[50],c=0;
    printf("");
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<k;i++){
        if(a[i]<a[i-1]){
           c=1;
        }
    }
    if(c==1){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}