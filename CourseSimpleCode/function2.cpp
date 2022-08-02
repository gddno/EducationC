#include<iostream>

using namespace std;

int Foo(int a){
     a++;
    cout << a << endl;
}

int main(){
    int value = 1;
    
    for(int i = 0; i < 10; i++){
        Foo (value);
        value ++;
    }
     system("pause");
     return 0;
}