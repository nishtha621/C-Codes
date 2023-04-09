#include<stdio.h>
 int swap(int *a,int *b,int *c){
int temp;
temp=*b;
*b=*a;
*a=*c;
*c=temp;
printf("%d %d %d", *a,*b,*c);
}
int main(){
 int a,b,c; 
 scanf("%d %d %d",&a,&b,&c);
 swap(&a,&b,&c); 
 return 0;
}
 
