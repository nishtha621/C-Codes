#include <stdio.h>
void main()
{
    char c;
scanf("%c", &c);

    if (isalpha(c))
printf("%c is Alphabet", c);
    else if(isdigit(c))
printf("%c is Number", c);
    else
printf("%c is Special Character",c);
}
