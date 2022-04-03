#include <iostream>

#include <typeinfo>

using namespace std;

struct Node {
    int ivalue = 10;
    double dvalue = 11.5;
    string str = "Hello";
};

union UNode {
    int ivalue; // int - 4
    double dvalue; // double - 8
};

int main(){

    Node node;
    node.ivalue = 22;
    cout << node.ivalue << " " << node.dvalue << " " << node.str << endl;
    
    UNode unode;
    
    cout << typeid(unode).name() << endl;
    
    
    
    return 0;
}