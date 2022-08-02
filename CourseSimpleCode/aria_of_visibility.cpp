#include <iostream>

using namespace std;

    int a;

 int foo(){
    a++;
    int b;
    cout << b << endl;
    
    return 0;
 }

int main(){

        foo();    
        a++;
        cout << a << endl;
        system("pause");
   return 0;
}