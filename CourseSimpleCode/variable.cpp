#include <iostream>
#include <conio.h>
#include <clocale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Rus");
    int a = 1;
    int b;
    b = 3;
    int c;
    c = a + b;
    cout << "This is value of C variable:"<< " " << c << endl;
    
    cout << "This is value of B variable:"<< " " << b << endl; 
    cout << "This is value of A variable:"<< " " << a << endl;

    double d = 3.14;
    cout << d << endl;
    char world = 'm';
    cout << world << endl;
    bool Y = false;
    cout << Y << endl;
    getch();
     
    return 0;
}