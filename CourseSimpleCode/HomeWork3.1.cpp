#include <iostream>
#include <conio.h>

using namespace std;

int main (){
    int count_symbol;
    char witch_use_symbol;
    int type_line;
    int a = 0;

    cout << "How mach symbol you wanna enter now" << endl;
    cin >> count_symbol;
    cout << "Enter symbol wich you wanna look on your skreen" << endl;
    cin >> witch_use_symbol;
    cout << "Enter 1 if you wanna gorizont line else enter 2" << endl;
    cin >> type_line;

    if (type_line != 1 && type_line !=2){
        cout<< "Don't correct type symbol" << endl;

        return(0);
    }

    do{
        if(type_line == 2){
            cout << witch_use_symbol << endl;
    }
        else{
            cout << witch_use_symbol << " ";
        }
    a++;
    }while(a < count_symbol);
    
    getch();
    return(0);
}