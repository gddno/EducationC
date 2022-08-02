/*sizeof*/

#include<iostream>

using namespace std;

int main(){
    
   
   int arr[]{12,24,34,355,343,21};
   int a = sizeof(arr);
   int b = sizeof(arr[0]);

   
    cout << a/b << endl;
   
}