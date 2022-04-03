#include <iostream>
#include <locale>
#include <Windows.h>

using namespace std;

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "russian");
    cout << "\n\t\"\\In forest borned tree\\\"\n ";
    cout << "Hy, Dima!!!";
    return 0;
}