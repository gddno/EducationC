#include <iostream>
#include<conio.h>

using namespace std;

void fill_array(int array[], const int SIZE)
 {
   //int a = sizeof(array);     
    for(int i = 0; i < SIZE; i ++){ 
            array[i] = rand() % 10;
    }
    //int a = sizeof(array); 
   
}

void print_array(int array[], const int SIZE){
    for(int i = 0; i < SIZE; i ++){
        cout << array[i] << endl; 
    }
}

int main(){
const int SIZE = 10;
int massiv [SIZE];
int getch();
int a = sizeof(massiv);
fill_array(massiv, SIZE);
print_array(massiv, SIZE);
system("pause");

}