#include <stdio.h>
int main(){
int n;
scanf("%d",&n);
int dig=0;
int k=n;
while(k>0){
    dig++;
    k=k/10;
}
int sum=0,r,i;
if (dig%2==0){
    i=1;
}
else{i=0;
}
while(n>0){
    if(i%2==0){
    r=n%10;
    sum=sum+r;
}
else{r=n%10;
    sum=sum-r;
}
n=n/10;
i++;}
printf("%d",sum);
return 0;
}