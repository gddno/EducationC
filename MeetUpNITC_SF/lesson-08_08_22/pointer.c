#include <stdio.h>
#include<conio.h>

int main()
{
    int x = 5;
    int y = 6;
    int* ptrX = &x;

    printf("x = %d\n", x);
    printf("ptrX = %x\n", ptrX);
    printf("&x = %x\n", ptrX);
    printf("*ptrX = %d\n", *ptrX);
    printf("Sizeof(int)=%d\n", sizeof(int));
    printf("Sizeof(int)=%d\n", sizeof(int*));
    printf("Sizeof(int)=%d\n", sizeof(char));
    printf("Sizeof(int)=%d\n", sizeof(char*));
    printf("Sizeof(x) = %d\n", sizeof(x));
    printf("Sizeof(ptrx) = %d\n", sizeof(ptrX));

    *ptrX = 42;
    printf("x = %d\n", x);
    *ptrX = *ptrX + 1;
    printf("x = %d\n", x);

    ptrX = ptrX + 2;

    printf("Sizeof(ptrx) = %d\n", *ptrX);
    getch();
    return 0;

}