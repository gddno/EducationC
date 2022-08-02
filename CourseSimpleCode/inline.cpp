#include <iostream>

using namespace std;

inline int Sum(int a, int b)
{
    cout << a + b << endl;
    return a + b;
}

int main()
{
    Sum(5, 4);
    system("pause");
    return 0;
}