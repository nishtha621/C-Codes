#include <stdio.h>
int main(){
    int t,i,j;
    scanf("%d",&t);
   while(t>0){
    int n,k;
    printf("\n n: k: \n");
    scanf("%d  %d \n",&n,&k);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int s=0,su=0;
    for (i=0;i<n;i++){
        if(arr[i]==k){
            j=i;
             for (i=0;i<j;i++){
                s=s+arr[i];
             }
              for (i=j+1;i<n;i++){
                su=su+arr[i];
        }
    }
    } printf("%d %d",s,su);
   t--;}
return 0;
}