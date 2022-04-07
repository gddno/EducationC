#include <iostream>
#include <conio.h>

using namespace std;
 
int main() {

    int a = 0;

    while(a<0){
        cout << "Variable a = " << a << endl;
        a++;
    }
/*
    do {
        cout << "Variable a = " << a << endl;
        a++;

    } while(a<0);
    */

    getch();
    return(0);
}