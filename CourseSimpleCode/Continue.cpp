#include <iostream>
#include <conio.h>

using namespace std;

/*int main(){
    for(int i = 0; i < 10; i ++){
       
        if(i == 5){
        continue;
        } 
        cout << "Number = " << i << endl;
    }
    getch();
    return(0);
}
*/
int main(){
    int i = 0;
    while(i < 10){
       i++;
        if(i == 5){

            continue;
        }
        cout << "Number = "<< i << endl;
        
    }

system("pause");
    //getch();
    return(0);
}