#include <stdio.h>
int i,j,temp;
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);}
        printf("The given array is:");
for(i=0;i<n;i++){
    printf("%d ", arr[i]);
}
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
printf("\n sorted array is:");
for(i=0;i<n;i++){
    printf( "%d ",arr[i]);}
return 0;}