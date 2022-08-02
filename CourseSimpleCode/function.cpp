#include<iostream>
//функция
using namespace std;

int sum(int a, int b, int c){
    cout << "Enter a " << endl;
    cin >> a;
    cout << "Enter b " << endl;
    cin >> b;
    cout << "Enter c " << endl;
    cin >> c;
    return a + b + c;
}

int main(){
    int a,b,c;
    
    cout << sum (a, b, c)<< endl;
    
}