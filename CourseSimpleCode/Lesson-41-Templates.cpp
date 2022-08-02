#include <iostream>

using namespace std;

/*Шаблоны функций*/

// int Sum(int a, int b){
//     return a + b;
// }

// double Sum(double a, double b){
//     b++;
//     return a + b;
// }


// template <typename T1, typename T2>
// T1 Sum(T1 a, T2 b)
// {
//     return a + b;
// }
// int main(){
//     cout << "Tvoi razmer: " << Sum(5.5, 6.3) << endl; 
//     cout << Sum(5, 6) << endl;
//     cout << Sum(5, 6.1) << endl;
//     system("pause");
//     return 0;
// }

// template <typename T1, typename T2>
// void Sum(T1 a, T2 b)
// {
//     cout << a << endl;
//     cout << b << endl;
// }

// int main()
// {
//     Sum(5, "Idi Domoy");
//     system("pause");
//     return 0;
// }


// class и typename не смешивать между собой!!!!

template <class T>
void Sum(T a)
{
    cout << a << endl;
}

int main()
{   Sum(5);
    system("pause");
    return 0;
}