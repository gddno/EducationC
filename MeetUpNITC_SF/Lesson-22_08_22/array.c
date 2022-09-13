#include<stdio.h>
#include<conio.h>
#define ARRAY_SIZE 10



int sum(int* array, int size);

int sum(int* array, int size)
{   
    int sum = 0;
    for(int i = 0; i < size; i ++){
        sum = sum + *(array + i);
    }
    return sum;
}

void print_array(int* array, int size)
{   
    printf("=======\n");
    for(int i = 0; i < size; i++){
        printf("%d\t", *(array + i));
        //printf("%d\t", *(array[i]));   
    }
    printf("======\n");
}

int main()
{   
    int array[ARRAY_SIZE] = {10,12,12,2,23,23,232,34,22,42};
    //printf("Sizeof(array) = %u\n", sizeof(array));
    printf("Sizeof(&array[0]) = %u\n", sizeof(&array[0]));
    printf("array[2] = %d\n", array[2]);
    printf("array + 2 = %X\n", array + 0);// адрес переменной в памяти 
    printf("array + 2 = %X\n", array + 1);
    printf("*(array + 2) = %d\n", *(array + 0)); // операция разименования 
    printf("&array[2] = %d\n", *(&array[2]));
    printf("%d\n", sum(array, sizeof(array)/sizeof(array[0])));
    print_array(array, sizeof(array)/sizeof(array[0]));
    getch();
    
    return 0;

}