#include <stdio.h>

int main()
{
	
    int num1,num2;
    float num3,num4;
    scanf("%d %d", &num1, &num2);
    scanf("%f %f", &num3, &num4);
    
    if((num1 >= 1 && num2 >= 1) || (num3 >= 1 && num4 >= 1)){
        printf("%d %d\n", num1 + num2, num1 - num2);
        printf("%.1f %.1f", num3 + num4, num3 - num4);
    }
    return 0;
}