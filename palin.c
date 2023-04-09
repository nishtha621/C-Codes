#include <stdio.h>
int isPalindrome(int num){
    int s,re,c;
    s=0;
    c=num;
    while(num>0){
        re=num%10;
        s=re+s*10;
        num=num/10;
    }
    printf("reversed: %d",s);
    if(s==c){
        printf("\n palindrome number");
    }
    else{
        printf("\n not palindrome");
    }
    return 0;
}
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    isPalindrome(num);
    return 0;
}