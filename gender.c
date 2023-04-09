#include <stdio.h>
int main(){
int n,i;
scanf("%d",&n);
int marks[n];
for (i=0;i<n;i++){
    scanf("%d",&marks[i]);
}
int gender;
printf("enter gender");
scanf("%d",&gender);
int sum=0;
    for (i=0;i<n;i++){
        if (gender==1){
    if (i%2==0){
        sum=sum+marks[i];
    }}
else if(gender==2){
    if (i%2!=0){
        sum=sum+marks[i];
    }}
}
printf("%d",sum);
return 0;}