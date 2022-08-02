#include <iostream>

using namespace std;
/* Аргументы (параметры) по умолчанию*/

void foo(int q, int a = 5, double b = 0.5){
    for(int i = 0; i < a; i++)
    {
        cout << "#" << endl;
    }
}

// int baa() {
//     return 3;
// }

// T& operator[](size_t index) {

//     return array[index];
// }

int main() {

    foo(4); 


    system("pause");
    return 0;
}