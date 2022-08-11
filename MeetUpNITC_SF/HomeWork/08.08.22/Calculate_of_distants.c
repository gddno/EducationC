#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    float x1, y1, x2, y2;
    printf("Enter please x1: ");
    scanf("%f", &x1);
    printf("Enter please y1: ");
    scanf("%f", &y1);
    printf("Enter please x2: ");
    scanf("%f", &x2);
    printf("Enter please y2: ");
    scanf("%f", &y2);
    float distans = sqrt(pow(y2-y1, 2)+pow(x2-x1, 2));
    printf("Distant = %f", distans);
    getch();
}