#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int high=0,low=0;
    for(i=0;i<=n;i++){
        if(high<arr[i]){
            high=arr[i];
        }
    }
    for(i=0;i<=n;i++){
        if(low>arr[i]){
            low=arr[i];
        }}
        printf("%d %d",high,low);
return 0;}