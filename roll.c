#include <stdio.h>
int i;
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++){
    if (arr[i]%2==0){ int even=arr[i];
        printf("%d ",even);
    }}printf("\n");
     for(i=1;i<=n;i++){
    if (arr[i]%2!=0){int odd=arr[i];
        printf("%d ",odd);
}}
return 0;}