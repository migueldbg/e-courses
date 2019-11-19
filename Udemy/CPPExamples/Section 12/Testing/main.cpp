#include <iostream>

using namespace std;

int main(){
    
    int *p;
    
    cout << p << endl;
    cout << &p << endl;
    cout << sizeof p << endl;
    
    cout << "==========================================" << endl;
    
    p = nullptr;
    
    cout << p << endl;
    cout << &p << endl;
    cout << sizeof p << endl;    
}