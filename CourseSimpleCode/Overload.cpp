#include <iostream>

using namespace std;

int Sum(int a, int b, int c){
    a++;
    return a+b+c;
}

int Sum(int a, int b){
    return a + b;
}

double Sum(double a, double b){
    b++;
    return a + b;
}

int main(){
    cout << "Tvoi razmer: " << Sum(5.5, 6.3) << endl; 
    cout << Sum(5, 6) << endl;
    cout << Sum(5, 6, 7) << endl;
    system("pause");
    return 0;
}