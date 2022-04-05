#include <iostream>
#include <conio.h>

using namespace std;

int main (){
    int a, b, selection;
    cin >> a >> b >> selection;
    switch (selection){
        case 1:{
            cout << (a + b) << endl;
        }break;
        case 2:{
            cout << (a - b) << endl;
        }break;
        case 3:{
            cout << (a * b) << endl;
        }break;
        case 4:{
            cout << a / b << endl;
        }break;
    }
    
    getch();
    return(0);
}