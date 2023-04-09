#include <stdio.h>
int main() {
        int num,i;
    scanf("%d", &num);
    int marks[10];
    
    for(i=0; i<num; i++){
        scanf("%d", &marks[i]);
    }
    int gender;
    scanf("%d", &gender);
    int sum = 0;
    for (i=0; i<num; i++) 
    {
        if(gender==1)
        {
            if (i%2==0) 
            {
              sum += marks[i];  
            }
        }
        else if (gender==2) 
        {
            if (i%2==1) 
            {
              sum += marks[i];  
            }  
        }
    }
    printf("%d",sum);
    return 0;
}
