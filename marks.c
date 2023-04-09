#include <stdio.h>
int main(){
int n,g1=0,g2=0,g3=0,g4=0,g5=0,i;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
if(arr[i]<=39){
    g1++;
}
else if(arr[i]>=40 && arr[i]<=49 ){
    g2++;
}
else if(arr[i]>=50 && arr[i]<=59){
    g3++;
}
else if(arr[i]>=60 && arr[i]<=79){
    g4++;
}
else if(arr[i]>=80 && arr[i]<=100){
    g5++;
}
}
 i=1;
printf("%d %d\n",i++, g1);
printf("%d %d\n",i++, g2);
printf("%d %d\n",i++, g3);
printf("%d %d\n",i++, g4);
printf("%d %d\n",i++, g5);

return 0;
}