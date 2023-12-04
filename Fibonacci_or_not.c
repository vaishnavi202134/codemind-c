//fabinocci or not 
#include <stdio.h>
int main()
{
    int num, a = 0, b = 1,c;
    scanf("%d", &num);
    while (2) 
	{
        c = a + b;
        if (c == num) 
        {
            printf("True");
            break;
        } 
        else if (c > num)
        {
            printf("False");
            break;
        }
        a = b;
        b = c;
    }
}
