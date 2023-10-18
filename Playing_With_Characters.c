#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch;
    char str1[50];
    char str2[50];
    
    scanf("%c\n",&ch);
    scanf("%s\n",str1);
    scanf("%[^\n]%*c", str2);
    
    printf("%c\n",ch);
    printf("%s\n",str1);
    printf("%s",str2);
    
    return 0;
}


