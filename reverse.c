#include<stdio.h>
int i,temp;
int main(){
int n;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i = 0; i<n/2; i++)
{
temp = arr[i];
arr[i] = arr[n-i-1];
arr[n-i-1] = temp;
    }
for(int i = 0; i < n; i++)
{
printf("%d ", arr[i]);
    }


return 0;}