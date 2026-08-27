#include <iostream>
using namespace std;
int main(){
    float a=2.3, b=3.5, temp;
    cout << "Before swapping: a="<<a<<", b="<<b<<endl;
    temp = a;
    a = b;
    b = temp;
    cout<< "After swapping: a="<<a<<", b="<<b<<endl;
    return 0;
}
