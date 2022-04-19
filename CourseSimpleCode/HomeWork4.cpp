/*Вложенные циклы*/

#include <iostream>

using namespace std;

int main(){

    int heigth, width;
    cout << "Enter heigth" << endl;
    cin >> heigth;
    cout << "Enter width" << endl;
    cin >> width;
        for(int i = 0; i < heigth; i++){
        
            for(int i = 0; i < width; i++){
                cout << "*";
            }
        cout << endl;
        }
    cout<<endl;
    system("pause");
    return(0);
}