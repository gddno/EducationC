#include<stdio.h>
#include<conio.h>

#define ARRAY_1_SIZE 10
#define ARRAY_2_SIZE 12

int sum(const int* first, const int* const last);

int sum(const int* first, const int* const last)
{   int s = 0;

    // for(int i = 0; i < 10; i++){
    //     s = s + first[i];

    // }
    int i = 0;
    do{
            s += *first;
           // i++;
            first ++;
    }while(first != last);
    return s;
}

int main()
{
    int array_1[ARRAY_1_SIZE] = {12,13,134,14,14,123,24,124,2,1};
    int array_2[] = {12,13,134,14,14,123,24,124,2,1,12,432};
    int* first = array_1;
    int* last = &array_1[10];
    int result = sum(first, last);
    printf("result = %d\n", result);

    first = &(array_2[0]);
    last = array_2 + sizeof(array_2)/sizeof(array_2[0]);
    result = sum(first, last);
    printf("result = %d\n", result);
    getch();
    return 0;
}