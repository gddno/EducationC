#include <iostream>
using namespace std;
#include <Stack>

stack int stack;
void push(){
    
}

void pop(){
    
}

void printMass(short* mass, int size){
    for(int i = 0; i < size; i++){
        std::cout << "value: " << *(mass+i) << " address: " << mass+i << std::endl;
    }
}

int main(){
    int size = 7;
    short mass[size] = {0,10,2,3,4,5,6,12,123};
    cout << *(mass+1) << endl;  //операция разыменования 
    cout <<mass[2] << endl;
    printMass(mass,size);
    
}