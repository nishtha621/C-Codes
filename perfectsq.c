#include <stdio.h>
int pefSq(int num){
    for(int i=0;i<=num;i++){
        if(i*i==num){
        return 1;
        }
    }
    
}
int i;
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){
        if (pefSq(i)==1){
            printf("%d ",i);
        }

    }
return 0;}