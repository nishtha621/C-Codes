#include <stdio.h>
int fibbonacciSeries(int n){
int first=0,sec=1,next,i,sum=0;
for (i=1;i<=n;i++){
    printf(" %d ",first);
    next=first+sec;
    first=sec;
    sec=next;
    sum=sum+next;
} 
}

int main(){
    int n;
    scanf("%d",&n);
   fibbonacciSeries(n);
return 0;
}