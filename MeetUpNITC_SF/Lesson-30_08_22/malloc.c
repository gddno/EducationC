#include <stdio.h>
#include <conio.h>
#include <memory.h>

int main()
{
    int a [10];
    int* pa = (int*)malloc(10 * sizeof(int) );

    pa[0] = 42;
    printf("*pa = %d\n",*pa);

    *(pa + 5) = 99;
    printf("pa[5] = %d\n",pa[5]);
    
    printf("pa[9] = %d\n",pa[9]);
    printf("pa[10] = %d\n",pa[10]);

    free(pa);
    getch();
    return 0;
}