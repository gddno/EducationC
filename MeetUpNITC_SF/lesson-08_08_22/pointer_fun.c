#include <stdio.h>
#include<conio.h>

int quatrupol_v1(int x)
{   
    int ret = x * 5;
    x = x + 1;
    return ret;
}

int quatrupol_v2(int* x)
{
    int ret = *x * 5;
    *x = *x + 1;
    return ret;
} 

int main()
{
    int x = 5;
    int result = quatrupol_v1(x);
    printf("result = %d\n", x);
    printf("result = %d\n", result);
    

    result = quatrupol_v2(&x);
    printf("result = %d\n", result); 
    printf("result = %d\n", x); 

    getch();
    return 0;

}