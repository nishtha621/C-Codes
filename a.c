#include <stdio.h>
int arm(int k){
    int sum=0;
    int c=k;
    while(k>0){
        int r=k%10;
        sum=r*r*r+sum;
        k=k/10;
    }
    if(c==sum){
        printf("%d ",sum);
    }
    return 0;}
int main(){
    int n,i;
scanf("%d",&n);
for(i=0;i<=n;i++){
arm(i);
}
    return 0;}