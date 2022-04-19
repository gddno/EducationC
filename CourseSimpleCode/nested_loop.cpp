/*Вложенные циклы*/

#include <iostream>

using namespace std;

int main(){

    for(int i = 1; i < 5; i++){
    cout << "Ferst cycle worked: "<< i << endl;
        for(int i = 1; i < 5; i++){
            cout << "   Second cycle worked: " << i << endl;
        }
    }
    system("pause");
    return(0);
}