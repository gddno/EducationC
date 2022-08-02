#include <iostream> 
//Двумерный массив
using namespace std;

int main(){
            const int ROWS = 5;
            const int COLS = 2;

            int array[ROWS][COLS];

            for(int i = 0; i < ROWS; i++){
                for(int j = 0; j < COLS; j++){
                    array[i][j] = rand() % 20;
                }
            }

            for(int i = 0; i < ROWS; i++){
                for( int j = 0; j < COLS; j ++){
                    cout << array[i][j] << "\t";
                    }
                    cout << endl;
            }
}