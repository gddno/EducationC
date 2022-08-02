#include <iostream>
#include <ctime>

using namespace std;

int main(){
    srand(time(NULL));
    const int SIZE = 10;
    int arr[SIZE];

    bool alreadyThere;
    for(int i = 0; i < SIZE; ){
        alreadyThere = false;
        int NewRandonValue = rand() % 20; 
        for(int j = 0; j < i; j++){
            if(arr[j] == NewRandonValue){
                alreadyThere = true;
                break;
            }
        }
        if(!alreadyThere){
            arr[i] = NewRandonValue;
            i++;
        }
    }


    for(int i = 0; i < SIZE; i++){
        cout << arr[i] << endl;
    }

}