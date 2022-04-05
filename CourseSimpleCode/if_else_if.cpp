#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main(){

   /* bool isRain = true;

    if(!isRain){
         cout << "Take a umbralla!!! Now is rain!!!";
     }
     else{
         cout << "On ";
     }

    /*string str;
    str =  (!isRain) ? "Take a umbralla!!! Now is rain!!!" : "No!";
    cout << str;
    */

    int var;
    cin >> var;
    if (var % 2 == 0){
        
        cout << var << " chetnoe!!!" << endl;
    }
    //else if(var < 5){
       // cout << "entered your variable less then 5!!!" << endl;
    //}
    else{
        cout << var << " nechotnoe "<< endl;
    }
    cout << var % 2<< endl;
    getch();
    return(0);


}