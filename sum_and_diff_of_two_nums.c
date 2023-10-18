
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;
    
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    
    int sum1=0.0,diff1=0.0;
    float sum2=0.0,diff2=0.0;
    
    sum1= a+b;
    diff1 = a-b;
    
    sum2= c+d;
    diff2 = c-d;
    
    printf("%d ",sum1);
    printf("%d",diff1);
    
    printf("\n%.1f ",sum2);
    printf("%.1f",diff2);
    
    return 0;
}

