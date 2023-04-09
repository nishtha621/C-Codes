#include <stdio.h>
 int i;
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<=n;i++){
         printf(" %d ",arr[i]);
    }
   
    int max=0;
   for (i=0;i<=n;i++){
    if(max<arr[i]){
        max=arr[i];
    }
   }
   printf("\n %d ",max);
    
    
return 0;
}