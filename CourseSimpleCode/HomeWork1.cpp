#include <iostream>
#include <conio.h>
#include <clocale>

using namespace std;

int main(){
    int number1, number2, number3;
    cout << "Free numbers, please: " << endl;
    cin >> number1 >> number2 >> number3;
    int sum = number1 + number2 + number3;
    int mult = number1 * number2 * number3;
    float ave = (float)(number1 + number2 + number3)/3;
    cout << "Their sum : " << sum << endl;
    cout << "Their multiplying : " << mult << endl;
    cout << "Their average : " << ave << endl;
   
    getch();
    return(0);
}