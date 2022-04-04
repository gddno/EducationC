#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int age;
    int height;
    int weight;
    cout << "Please enter your age" << endl;
    cin >> age;
    cout << "Please enter your height" << endl;
    cin >> height;
    cout << "Please enter your weight" << endl;
    cin >> weight;
    cout << "Your parametrs the best and is: " << endl;
    cout << "age: " << age << endl;
    cout << "height: " << height << endl;
    cout << "weight: " << weight << endl;
    cout << "Enter your age, height, weight :" << endl;
    cin >> age >> height >> weight;
    cout << "your age is: " << age << endl;
    cout << "height is: " << height << endl;
    cout << "weight is: " << weight << endl;
    getch();
    return (0);
}