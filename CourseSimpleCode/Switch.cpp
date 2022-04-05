#include <iostream>
#include <conio.h>

using namespace std;

int main (){
    
    int a;
    cin >> a;

    switch(a){
        case 1:{
        cout << "You entered 1!!!" << endl;
        //break;
        }
        case 2:{
        cout << "You entered 2!!!" << endl;
        break;
        }
        case 3:{
        cout << "You entered 3!!!" << endl;
        break;
        }
        default:{
        cout << "I don't know witch number you entered :)" << endl;
        break;
        }
    }

    getche();
    return(0);
}
