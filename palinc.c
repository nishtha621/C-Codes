#include <stdio.h>
int palin(int n){
scanf("%d",&n);
int sum=0;
int k=n;
while(n>0){
    int r=n%10;
    sum=sum*10+r;
    n=n/10;
}
if (sum==k){
    printf("%d Palindrome",sum);
}
else{printf("%d Not Palindrome",sum );}
return 0;}
int main(){
    int j;
    palin(j);
return 0;
}