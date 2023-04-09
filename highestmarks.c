#include <stdio.h>
int i;
int main(){
    int t;
    int max=0;
    int r=0;
    scanf("%d",&t);
    int arr[t];
    for(i=1;i<=t;++i){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=t;++i){
        if(arr[i]>max){
            max=arr[i];
            }}
        for(i=1;i<=t;++i){
        if(max==arr[i]){
            r++;
        }}
    printf("%d %d", max,r);
return 0;}