#include <iostream>
#include <conio.h>

using namespace std;

int main (){
    
    int sum = 0;
    int rangeBegin, rangeEnd;

    cout << "Enter start your range" << endl;
    cin >> rangeBegin;
 
    cout << "Enter end your range"  << endl;
    cin >> rangeEnd;

    do{
        if(rangeBegin % 2 != 0){

            sum += rangeBegin;  

        }
        rangeBegin++; 
    }while(rangeBegin < rangeEnd);

    cout << sum << endl;

    getch();
    return(0);
}